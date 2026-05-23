# 📊 Merge Intervals - Quick Reference

**Merge overlapping intervals!** 🎯

---

## 📋 What is Merge Intervals?

### **Definition:**

Merge Intervals is a pattern for dealing with **overlapping intervals** by sorting them and then merging or processing them based on their start and end times.

### **Key Characteristics:**

- Sort intervals by start time
- Check for overlaps
- Merge or process overlapping intervals
- Common in scheduling problems

### **When to Use:**

- Intervals **overlap** or **intersect**
- Need to **merge** overlapping ranges
- **Scheduling** problems
- Find **conflicts** or **free time**

---

## 🎯 Core Concepts

### **Interval Representation:**

```cpp
// Common representations
struct Interval {
    int start;
    int end;
};

// Or use pair/vector
vector<pair<int, int>> intervals;
vector<vector<int>> intervals;  // [[start, end], ...]
```

### **Overlap Conditions:**

```
Two intervals [a, b] and [c, d] overlap if:
a <= d && c <= b

Examples:
[1, 3] and [2, 4]  → Overlap (1 <= 4 && 2 <= 3)
[1, 3] and [4, 6]  → No overlap (1 <= 6 but 4 > 3)
```

### **Sorting Strategy:**

Always sort by **start time** first!

```cpp
sort(intervals.begin(), intervals.end());
// Sorts by first element (start time) by default
```

---

## 💡 Common Problems

### **1. Merge Intervals:**

**Problem:** Merge all overlapping intervals

**Theory:**

- Sort by start time
- If current overlaps with previous, merge
- Otherwise, add to result

```cpp
vector<vector<int>> merge(vector<vector<int>>& intervals) {
    if (intervals.empty()) return {};

    // Sort by start time
    sort(intervals.begin(), intervals.end());

    vector<vector<int>> result;
    result.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        // Check if overlaps with last interval in result
        if (intervals[i][0] <= result.back()[1]) {
            // Merge: extend end time
            result.back()[1] = max(result.back()[1], intervals[i][1]);
        } else {
            // No overlap: add new interval
            result.push_back(intervals[i]);
        }
    }

    return result;
}
// Time: O(n log n), Space: O(n)
```

**Visualization:**

```
Input: [[1,3], [2,6], [8,10], [15,18]]

After sorting: [[1,3], [2,6], [8,10], [15,18]]

Step 1: result = [[1,3]]
Step 2: [2,6] overlaps with [1,3] → merge to [1,6]
        result = [[1,6]]
Step 3: [8,10] doesn't overlap → add
        result = [[1,6], [8,10]]
Step 4: [15,18] doesn't overlap → add
        result = [[1,6], [8,10], [15,18]]
```

---

### **2. Insert Interval:**

**Problem:** Insert new interval and merge if necessary

**Theory:**

- Add all intervals before new interval
- Merge overlapping intervals
- Add all intervals after new interval

```cpp
vector<vector<int>> insert(vector<vector<int>>& intervals,
                           vector<int>& newInterval) {
    vector<vector<int>> result;
    int i = 0;

    // Add all intervals before newInterval
    while (i < intervals.size() && intervals[i][1] < newInterval[0]) {
        result.push_back(intervals[i]);
        i++;
    }

    // Merge overlapping intervals
    while (i < intervals.size() && intervals[i][0] <= newInterval[1]) {
        newInterval[0] = min(newInterval[0], intervals[i][0]);
        newInterval[1] = max(newInterval[1], intervals[i][1]);
        i++;
    }
    result.push_back(newInterval);

    // Add remaining intervals
    while (i < intervals.size()) {
        result.push_back(intervals[i]);
        i++;
    }

    return result;
}
// Time: O(n), Space: O(n)
```

**Example:**

```
intervals = [[1,3], [6,9]]
newInterval = [2,5]

Step 1: [1,3] overlaps with [2,5]
        Merge: [1,5]
Step 2: [6,9] doesn't overlap
        Add: [6,9]

Result: [[1,5], [6,9]]
```

---

### **3. Interval List Intersections:**

**Problem:** Find intersection of two interval lists

**Theory:**

- Use two pointers for both lists
- Find intersection of current intervals
- Move pointer of interval that ends first

```cpp
vector<vector<int>> intervalIntersection(vector<vector<int>>& A,
                                         vector<vector<int>>& B) {
    vector<vector<int>> result;
    int i = 0, j = 0;

    while (i < A.size() && j < B.size()) {
        // Find intersection
        int start = max(A[i][0], B[j][0]);
        int end = min(A[i][1], B[j][1]);

        // If valid intersection
        if (start <= end) {
            result.push_back({start, end});
        }

        // Move pointer of interval that ends first
        if (A[i][1] < B[j][1]) {
            i++;
        } else {
            j++;
        }
    }

    return result;
}
// Time: O(n + m), Space: O(1)
```

**Visualization:**

```
A = [[0,2], [5,10], [13,23]]
B = [[1,5], [8,12], [15,24]]

i=0, j=0: [0,2] ∩ [1,5] = [1,2]  (move i)
i=1, j=0: [5,10] ∩ [1,5] = [5,5]  (move j)
i=1, j=1: [5,10] ∩ [8,12] = [8,10]  (move i)
i=2, j=1: [13,23] ∩ [8,12] = none  (move j)
i=2, j=2: [13,23] ∩ [15,24] = [15,23]  (move i)

Result: [[1,2], [5,5], [8,10], [15,23]]
```

---

### **4. Meeting Rooms:**

**Problem:** Can person attend all meetings?

**Theory:**

- Sort by start time
- Check if any meeting starts before previous ends

```cpp
bool canAttendMeetings(vector<vector<int>>& intervals) {
    if (intervals.empty()) return true;

    sort(intervals.begin(), intervals.end());

    for (int i = 1; i < intervals.size(); i++) {
        // If current starts before previous ends
        if (intervals[i][0] < intervals[i-1][1]) {
            return false;  // Conflict!
        }
    }

    return true;
}
// Time: O(n log n), Space: O(1)
```

---

### **5. Meeting Rooms II:**

**Problem:** Minimum number of meeting rooms needed

**Theory:**

- Separate start and end times
- Sort both arrays
- When meeting starts, need room
- When meeting ends, free room

```cpp
int minMeetingRooms(vector<vector<int>>& intervals) {
    if (intervals.empty()) return 0;

    vector<int> starts, ends;
    for (auto& interval : intervals) {
        starts.push_back(interval[0]);
        ends.push_back(interval[1]);
    }

    sort(starts.begin(), starts.end());
    sort(ends.begin(), ends.end());

    int rooms = 0, maxRooms = 0;
    int i = 0, j = 0;

    while (i < starts.size()) {
        if (starts[i] < ends[j]) {
            rooms++;  // Need new room
            maxRooms = max(maxRooms, rooms);
            i++;
        } else {
            rooms--;  // Free a room
            j++;
        }
    }

    return maxRooms;
}
// Time: O(n log n), Space: O(n)
```

**Example:**

```
intervals = [[0,30], [5,10], [15,20]]

starts = [0, 5, 15]
ends = [10, 20, 30]

Time 0: Meeting starts → rooms = 1
Time 5: Meeting starts → rooms = 2
Time 10: Meeting ends → rooms = 1
Time 15: Meeting starts → rooms = 2
Time 20: Meeting ends → rooms = 1
Time 30: Meeting ends → rooms = 0

Max rooms needed = 2
```

---

### **6. Non-overlapping Intervals:**

**Problem:** Minimum intervals to remove to make non-overlapping

**Theory:**

- Sort by end time (greedy)
- Keep interval that ends earliest
- Remove overlapping intervals

```cpp
int eraseOverlapIntervals(vector<vector<int>>& intervals) {
    if (intervals.empty()) return 0;

    // Sort by end time
    sort(intervals.begin(), intervals.end(),
         [](auto& a, auto& b) { return a[1] < b[1]; });

    int count = 0;
    int end = intervals[0][1];

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] < end) {
            // Overlaps: remove this interval
            count++;
        } else {
            // No overlap: update end
            end = intervals[i][1];
        }
    }

    return count;
}
// Time: O(n log n), Space: O(1)
```

---

### **7. Employee Free Time:**

**Problem:** Find common free time for all employees

**Theory:**

- Flatten all intervals
- Merge overlapping intervals
- Gaps between merged intervals = free time

```cpp
vector<vector<int>> employeeFreeTime(vector<vector<vector<int>>>& schedule) {
    vector<vector<int>> intervals;

    // Flatten all intervals
    for (auto& employee : schedule) {
        for (auto& interval : employee) {
            intervals.push_back(interval);
        }
    }

    // Sort by start time
    sort(intervals.begin(), intervals.end());

    // Merge intervals
    vector<vector<int>> merged;
    merged.push_back(intervals[0]);

    for (int i = 1; i < intervals.size(); i++) {
        if (intervals[i][0] <= merged.back()[1]) {
            merged.back()[1] = max(merged.back()[1], intervals[i][1]);
        } else {
            merged.push_back(intervals[i]);
        }
    }

    // Find gaps
    vector<vector<int>> result;
    for (int i = 1; i < merged.size(); i++) {
        result.push_back({merged[i-1][1], merged[i][0]});
    }

    return result;
}
// Time: O(n log n), Space: O(n)
```

---

## 🔥 Interval Patterns

### **Pattern 1: Merge Overlapping**

```cpp
sort(intervals.begin(), intervals.end());
for (each interval) {
    if (overlaps with last) {
        merge
    } else {
        add to result
    }
}
```

### **Pattern 2: Find Intersections**

```cpp
// Two pointers
while (i < n && j < m) {
    find intersection
    move pointer of interval that ends first
}
```

### **Pattern 3: Count Overlaps**

```cpp
// Separate starts and ends
sort(starts)
sort(ends)
// Sweep line algorithm
```

---

## 🎯 How to Identify Merge Intervals

### **Use Merge Intervals When:**

✅ Problem involves **time intervals**
✅ Need to **merge** or **find overlaps**
✅ **Scheduling** problems
✅ Keywords: "intervals", "meetings", "ranges"
✅ Need to find **conflicts** or **free time**

### **Don't Use When:**

❌ Intervals don't overlap
❌ Order matters (can't sort)
❌ Need to preserve original order

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **With sorting:** O(n log n)
- **Without sorting:** O(n)
- **Two lists:** O(n + m)

### **Space Complexity:**

- **Result storage:** O(n)
- **In-place:** O(1)

---

## 🔥 Must Remember

### **Key Steps:**

1. **Sort** by start time (usually)
2. **Check overlap** condition
3. **Merge** or **process** overlapping intervals
4. **Track** result

### **Overlap Check:**

```cpp
// Two intervals [a, b] and [c, d] overlap if:
a <= d && c <= b

// Or simplified (if sorted):
c <= b  // Current start <= Previous end
```

### **Common Mistakes:**

- ❌ Not sorting intervals first
- ❌ Wrong overlap condition
- ❌ Not updating end time correctly
- ❌ Off-by-one errors (inclusive vs exclusive)

### **Tips:**

- ✅ Draw timeline to visualize
- ✅ Sort by start time (or end for greedy)
- ✅ Use max() when merging end times
- ✅ Consider edge cases (empty, single interval)

---

**Next:** [Cyclic Sort →](27-Cyclic-Sort.md)
