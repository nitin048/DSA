# 🔄 Cyclic Sort - Quick Reference

**Place elements at their correct index!** 🎯

---

## 📋 What is Cyclic Sort?

### **Definition:**

Cyclic Sort is a technique for sorting arrays containing numbers in a **given range** by placing each number at its **correct index** position in O(n) time.

### **Key Characteristics:**

- Works when numbers are in range [1, n] or [0, n-1]
- Sorts in O(n) time, O(1) space
- Places each element at index = value (or value - 1)
- Each element visited at most twice

### **When to Use:**

- Array contains numbers in **range [1, n]** or [0, n-1]
- Need to find **missing** or **duplicate** numbers
- Need **O(n) time**, **O(1) space**
- Keywords: "missing", "duplicate", "first positive"

---

## 🎯 Core Concept

### **Basic Idea:**

```
For array with numbers 1 to n:
Place number i at index i-1

Example:
[3, 1, 5, 4, 2]
 ↓
[1, 2, 3, 4, 5]
 ↑  ↑  ↑  ↑  ↑
 1  2  3  4  5  (indices 0-4)
```

### **Algorithm:**

```cpp
for (int i = 0; i < n; i++) {
    while (nums[i] is not at correct position) {
        swap nums[i] with element at correct position
    }
}
```

---

## 💡 Cyclic Sort Implementation

### **Basic Cyclic Sort:**

**Problem:** Sort array containing 1 to n

```cpp
void cyclicSort(vector<int>& nums) {
    int i = 0;

    while (i < nums.size()) {
        int correctIndex = nums[i] - 1;  // For range [1, n]

        // If not at correct position
        if (nums[i] != nums[correctIndex]) {
            swap(nums[i], nums[correctIndex]);
        } else {
            i++;
        }
    }
}
// Time: O(n), Space: O(1)
```

**Visualization:**

```
[3, 1, 5, 4, 2]

i=0: nums[0]=3, should be at index 2
     Swap: [5, 1, 3, 4, 2]

i=0: nums[0]=5, should be at index 4
     Swap: [2, 1, 3, 4, 5]

i=0: nums[0]=2, should be at index 1
     Swap: [1, 2, 3, 4, 5]

i=0: nums[0]=1, correct position
     Move to i=1

i=1: nums[1]=2, correct position
     Move to i=2

... all elements in correct position
```

---

## 💡 Common Problems

### **1. Find Missing Number:**

**Problem:** Find missing number in array [0, n]

**Theory:**

- Array has n numbers from range [0, n]
- One number is missing
- Place each number at its index
- Missing number's index will have wrong value

```cpp
int missingNumber(vector<int>& nums) {
    int i = 0;
    int n = nums.size();

    // Cyclic sort
    while (i < n) {
        int correctIndex = nums[i];

        // If in range and not at correct position
        if (nums[i] < n && nums[i] != nums[correctIndex]) {
            swap(nums[i], nums[correctIndex]);
        } else {
            i++;
        }
    }

    // Find missing number
    for (int i = 0; i < n; i++) {
        if (nums[i] != i) {
            return i;
        }
    }

    return n;  // If all present, missing is n
}
// Time: O(n), Space: O(1)
```

**Example:**

```
nums = [3, 0, 1]  (missing 2)

After cyclic sort: [0, 1, 3]
                    ↑  ↑  ↑
Index:              0  1  2

At index 2: expected 2, found 3
Missing number = 2
```

---

### **2. Find All Missing Numbers:**

**Problem:** Find all missing numbers in [1, n]

**Theory:**

- Array has n numbers from range [1, n]
- Some numbers missing, some duplicates
- After cyclic sort, missing numbers' positions have wrong values

```cpp
vector<int> findDisappearedNumbers(vector<int>& nums) {
    int i = 0;

    // Cyclic sort
    while (i < nums.size()) {
        int correctIndex = nums[i] - 1;

        if (nums[i] != nums[correctIndex]) {
            swap(nums[i], nums[correctIndex]);
        } else {
            i++;
        }
    }

    // Find missing numbers
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i + 1) {
            result.push_back(i + 1);
        }
    }

    return result;
}
// Time: O(n), Space: O(1)
```

---

### **3. Find Duplicate Number:**

**Problem:** Find the duplicate number in [1, n]

**Theory:**

- Array has n+1 numbers from range [1, n]
- One number appears twice
- When placing at correct position, if already correct number there, it's duplicate

```cpp
int findDuplicate(vector<int>& nums) {
    int i = 0;

    while (i < nums.size()) {
        int correctIndex = nums[i] - 1;

        if (nums[i] != nums[correctIndex]) {
            swap(nums[i], nums[correctIndex]);
        } else {
            // If not at correct position but can't swap
            if (i != correctIndex) {
                return nums[i];  // Duplicate found
            }
            i++;
        }
    }

    return -1;
}
// Time: O(n), Space: O(1)
```

**Alternative (Floyd's Cycle Detection):**

```cpp
int findDuplicate(vector<int>& nums) {
    // Treat as linked list: nums[i] points to nums[nums[i]]
    int slow = nums[0];
    int fast = nums[0];

    // Find cycle
    do {
        slow = nums[slow];
        fast = nums[nums[fast]];
    } while (slow != fast);

    // Find cycle start (duplicate)
    slow = nums[0];
    while (slow != fast) {
        slow = nums[slow];
        fast = nums[fast];
    }

    return slow;
}
```

---

### **4. Find All Duplicates:**

**Problem:** Find all duplicates in [1, n]

**Theory:**

- Array has n numbers from range [1, n]
- Some numbers appear twice
- After cyclic sort, duplicates won't be at correct position

```cpp
vector<int> findDuplicates(vector<int>& nums) {
    int i = 0;

    // Cyclic sort
    while (i < nums.size()) {
        int correctIndex = nums[i] - 1;

        if (nums[i] != nums[correctIndex]) {
            swap(nums[i], nums[correctIndex]);
        } else {
            i++;
        }
    }

    // Find duplicates
    vector<int> result;
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i + 1) {
            result.push_back(nums[i]);
        }
    }

    return result;
}
// Time: O(n), Space: O(1)
```

---

### **5. First Missing Positive:**

**Problem:** Find smallest missing positive integer

**Theory:**

- Only care about numbers in range [1, n]
- Place each valid number at correct position
- First position with wrong value is answer

```cpp
int firstMissingPositive(vector<int>& nums) {
    int i = 0;
    int n = nums.size();

    // Cyclic sort (only for positive numbers in range)
    while (i < n) {
        int correctIndex = nums[i] - 1;

        // If valid number and not at correct position
        if (nums[i] > 0 && nums[i] <= n &&
            nums[i] != nums[correctIndex]) {
            swap(nums[i], nums[correctIndex]);
        } else {
            i++;
        }
    }

    // Find first missing positive
    for (int i = 0; i < n; i++) {
        if (nums[i] != i + 1) {
            return i + 1;
        }
    }

    return n + 1;  // All present, return n+1
}
// Time: O(n), Space: O(1)
```

**Example:**

```
nums = [3, 4, -1, 1]

After cyclic sort: [1, -1, 3, 4]
                    ↑   ↑  ↑  ↑
Expected:           1   2  3  4

At index 1: expected 2, found -1
First missing positive = 2
```

---

### **6. Find Corrupt Pair:**

**Problem:** Find duplicate and missing number

**Theory:**

- Array should have [1, n] but one number duplicated, one missing
- After cyclic sort, wrong position has duplicate
- Expected value at that position is missing

```cpp
vector<int> findErrorNums(vector<int>& nums) {
    int i = 0;

    // Cyclic sort
    while (i < nums.size()) {
        int correctIndex = nums[i] - 1;

        if (nums[i] != nums[correctIndex]) {
            swap(nums[i], nums[correctIndex]);
        } else {
            i++;
        }
    }

    // Find duplicate and missing
    for (int i = 0; i < nums.size(); i++) {
        if (nums[i] != i + 1) {
            return {nums[i], i + 1};  // {duplicate, missing}
        }
    }

    return {-1, -1};
}
// Time: O(n), Space: O(1)
```

---

## 🔥 Cyclic Sort Template

### **Basic Template:**

```cpp
void cyclicSort(vector<int>& nums) {
    int i = 0;

    while (i < nums.size()) {
        int correctIndex = nums[i] - 1;  // Or nums[i] for [0, n-1]

        // Check if valid and not at correct position
        if (isValid(nums[i]) && nums[i] != nums[correctIndex]) {
            swap(nums[i], nums[correctIndex]);
        } else {
            i++;
        }
    }
}
```

### **Find Missing/Duplicate:**

```cpp
// After cyclic sort
for (int i = 0; i < nums.size(); i++) {
    if (nums[i] != i + 1) {  // Or i for [0, n-1]
        // Found anomaly at index i
        // Expected: i + 1
        // Found: nums[i]
    }
}
```

---

## 🎯 How to Identify Cyclic Sort

### **Use Cyclic Sort When:**

✅ Array contains numbers in **range [1, n]** or [0, n-1]
✅ Need to find **missing** numbers
✅ Need to find **duplicate** numbers
✅ Need **O(n) time**, **O(1) space**
✅ Keywords: "missing", "duplicate", "first positive"

### **Don't Use When:**

❌ Numbers not in specific range
❌ Range is too large (sparse array)
❌ Can't modify input array
❌ Need stable sort

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **O(n)** - Each element swapped at most once
- Each element visited at most twice

### **Space Complexity:**

- **O(1)** - In-place sorting

### **Why O(n)?**

```
Each number is swapped to its correct position at most once.
After swap, that position is correct forever.
Total swaps ≤ n
Total iterations ≤ 2n (each element visited at most twice)
Therefore: O(n)
```

---

## 🔥 Must Remember

### **Key Concepts:**

1. **Correct index** = value - 1 (for [1, n])
2. **Swap** until element at correct position
3. **Don't increment** i after swap
4. **Check validity** before swapping

### **Common Mistakes:**

- ❌ Incrementing i after swap
- ❌ Not checking if number is in valid range
- ❌ Wrong correct index calculation
- ❌ Infinite loop (not checking if already at correct position)

### **Tips:**

- ✅ Use while loop, not for loop
- ✅ Check bounds before swapping
- ✅ Handle duplicates carefully
- ✅ Test with edge cases (all same, all missing)

---

## 🎓 Variations

### **Range [1, n]:**

```cpp
correctIndex = nums[i] - 1
```

### **Range [0, n-1]:**

```cpp
correctIndex = nums[i]
```

### **With Duplicates:**

```cpp
if (nums[i] != nums[correctIndex]) {
    swap(nums[i], nums[correctIndex]);
}
```

### **With Invalid Numbers:**

```cpp
if (nums[i] > 0 && nums[i] <= n &&
    nums[i] != nums[correctIndex]) {
    swap(nums[i], nums[correctIndex]);
}
```

---

**Next:** [In-Place Reversal →](28-In-Place-Reversal.md)
