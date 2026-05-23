# 🔝 Top K Elements - Quick Reference

**Find K largest/smallest elements efficiently!** 🎯

---

## 📋 What is Top K Elements?

### **Definition:**

Top K Elements pattern uses **heaps** (priority queues) to efficiently find the K largest, smallest, or most frequent elements in a dataset.

### **Key Characteristics:**

- Uses **min-heap** or **max-heap**
- Maintains heap of size K
- O(n log k) time complexity
- Better than sorting O(n log n)

### **When to Use:**

- Find **K largest/smallest** elements
- Find **K most frequent** elements
- **Kth** largest/smallest element
- Keywords: "top K", "K largest", "K closest"

---

## 🎯 Heap Basics

### **Min-Heap vs Max-Heap:**

```
Min-Heap (smallest at top):
        1
       / \
      3   2
     / \
    5   4

Max-Heap (largest at top):
        5
       / \
      4   3
     / \
    1   2
```

### **C++ Priority Queue:**

```cpp
// Max-heap (default)
priority_queue<int> maxHeap;

// Min-heap
priority_queue<int, vector<int>, greater<int>> minHeap;

// Custom comparator
auto cmp = [](int a, int b) { return a > b; };
priority_queue<int, vector<int>, decltype(cmp)> pq(cmp);
```

---

## 💡 Basic Problems

### **1. Kth Largest Element:**

**Problem:** Find kth largest element in array

**Theory:**

- Use min-heap of size k
- Keep k largest elements
- Top of heap is kth largest

```cpp
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : nums) {
        minHeap.push(num);

        // Keep only k elements
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    return minHeap.top();
}
// Time: O(n log k), Space: O(k)
```

**Why Min-Heap?**

```
Find 3rd largest in [3, 2, 1, 5, 6, 4]

After processing:
minHeap = [4, 5, 6]  (3 largest)
Top = 4 (3rd largest) ✓
```

---

### **2. K Largest Elements:**

**Problem:** Return k largest elements

**Theory:**

- Same as above but return all heap elements
- Or use max-heap and pop k times

```cpp
vector<int> kLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top());
        minHeap.pop();
    }

    return result;
}
// Time: O(n log k), Space: O(k)
```

---

### **3. K Closest Points to Origin:**

**Problem:** Find k closest points to (0, 0)

**Theory:**

- Use max-heap based on distance
- Keep k closest points
- Farthest of k closest is at top

```cpp
vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
    auto distance = [](vector<int>& p) {
        return p[0] * p[0] + p[1] * p[1];
    };

    auto cmp = [&](vector<int>& a, vector<int>& b) {
        return distance(a) < distance(b);
    };

    priority_queue<vector<int>, vector<vector<int>>, decltype(cmp)> maxHeap(cmp);

    for (auto& point : points) {
        maxHeap.push(point);
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }

    vector<vector<int>> result;
    while (!maxHeap.empty()) {
        result.push_back(maxHeap.top());
        maxHeap.pop();
    }

    return result;
}
// Time: O(n log k), Space: O(k)
```

---

### **4. Top K Frequent Elements:**

**Problem:** Find k most frequent elements

**Theory:**

- Count frequencies using hash map
- Use min-heap of size k based on frequency
- Elements with k highest frequencies remain

```cpp
vector<int> topKFrequent(vector<int>& nums, int k) {
    // Count frequencies
    unordered_map<int, int> freq;
    for (int num : nums) {
        freq[num]++;
    }

    // Min-heap based on frequency
    auto cmp = [](pair<int,int>& a, pair<int,int>& b) {
        return a.second > b.second;
    };
    priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> minHeap(cmp);

    for (auto& [num, count] : freq) {
        minHeap.push({num, count});
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top().first);
        minHeap.pop();
    }

    return result;
}
// Time: O(n log k), Space: O(n)
```

---

### **5. Kth Largest in Stream:**

**Problem:** Design class to find kth largest in stream

**Theory:**

- Maintain min-heap of size k
- Always contains k largest elements
- Top is kth largest

```cpp
class KthLargest {
private:
    priority_queue<int, vector<int>, greater<int>> minHeap;
    int k;

public:
    KthLargest(int k, vector<int>& nums) : k(k) {
        for (int num : nums) {
            add(num);
        }
    }

    int add(int val) {
        minHeap.push(val);

        if (minHeap.size() > k) {
            minHeap.pop();
        }

        return minHeap.top();
    }
};
// Time: O(log k) per add, Space: O(k)
```

---

### **6. K Closest Numbers:**

**Problem:** Find k closest numbers to target

**Theory:**

- Use max-heap based on distance from target
- Keep k closest numbers

```cpp
vector<int> findClosestElements(vector<int>& arr, int k, int x) {
    auto cmp = [&](int a, int b) {
        int diffA = abs(a - x);
        int diffB = abs(b - x);
        return diffA < diffB || (diffA == diffB && a < b);
    };

    priority_queue<int, vector<int>, decltype(cmp)> maxHeap(cmp);

    for (int num : arr) {
        maxHeap.push(num);
        if (maxHeap.size() > k) {
            maxHeap.pop();
        }
    }

    vector<int> result;
    while (!maxHeap.empty()) {
        result.push_back(maxHeap.top());
        maxHeap.pop();
    }

    sort(result.begin(), result.end());
    return result;
}
// Time: O(n log k), Space: O(k)
```

---

### **7. Sort Characters by Frequency:**

**Problem:** Sort characters by frequency

**Theory:**

- Count frequencies
- Use max-heap to get most frequent first
- Build result string

```cpp
string frequencySort(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    // Max-heap based on frequency
    priority_queue<pair<int, char>> maxHeap;
    for (auto& [ch, count] : freq) {
        maxHeap.push({count, ch});
    }

    string result;
    while (!maxHeap.empty()) {
        auto [count, ch] = maxHeap.top();
        maxHeap.pop();
        result.append(count, ch);
    }

    return result;
}
// Time: O(n log k), Space: O(n)
```

---

### **8. Reorganize String:**

**Problem:** Rearrange so no two adjacent characters are same

**Theory:**

- Use max-heap based on frequency
- Always pick most frequent available character
- Track previously used character

```cpp
string reorganizeString(string s) {
    unordered_map<char, int> freq;
    for (char c : s) {
        freq[c]++;
    }

    priority_queue<pair<int, char>> maxHeap;
    for (auto& [ch, count] : freq) {
        maxHeap.push({count, ch});
    }

    string result;
    pair<int, char> prev = {-1, '#'};

    while (!maxHeap.empty()) {
        auto [count, ch] = maxHeap.top();
        maxHeap.pop();

        result += ch;

        // Add previous back if still has count
        if (prev.first > 0) {
            maxHeap.push(prev);
        }

        // Update previous
        prev = {count - 1, ch};
    }

    return result.length() == s.length() ? result : "";
}
// Time: O(n log k), Space: O(k)
```

---

## 🔥 Heap Selection Strategy

### **When to Use Min-Heap:**

✅ Find **K largest** elements
✅ Keep largest K, remove smallest

**Why?** Top of min-heap is smallest of K largest

### **When to Use Max-Heap:**

✅ Find **K smallest** elements
✅ Keep smallest K, remove largest

**Why?** Top of max-heap is largest of K smallest

### **Memory:**

```
Min-Heap for K largest:
[7, 8, 9, 10]  ← Keep 4 largest
 ↑
 7 is 4th largest (smallest of 4 largest)

Max-Heap for K smallest:
[4, 3, 2, 1]  ← Keep 4 smallest
 ↑
 4 is 4th smallest (largest of 4 smallest)
```

---

## 🔥 Top K Template

### **K Largest Elements:**

```cpp
vector<int> kLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;

    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k) {
            minHeap.pop();  // Remove smallest
        }
    }

    return getElements(minHeap);
}
```

### **K Smallest Elements:**

```cpp
vector<int> kSmallest(vector<int>& nums, int k) {
    priority_queue<int> maxHeap;

    for (int num : nums) {
        maxHeap.push(num);
        if (maxHeap.size() > k) {
            maxHeap.pop();  // Remove largest
        }
    }

    return getElements(maxHeap);
}
```

### **K Most Frequent:**

```cpp
vector<int> kFrequent(vector<int>& nums, int k) {
    // Count frequencies
    unordered_map<int, int> freq;
    for (int num : nums) freq[num]++;

    // Min-heap based on frequency
    auto cmp = [](pair<int,int>& a, pair<int,int>& b) {
        return a.second > b.second;
    };
    priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> minHeap(cmp);

    for (auto& p : freq) {
        minHeap.push(p);
        if (minHeap.size() > k) {
            minHeap.pop();
        }
    }

    return getElements(minHeap);
}
```

---

## 🎯 How to Identify Top K

### **Use Top K Pattern When:**

✅ Find **K largest/smallest** elements
✅ Find **K most/least frequent**
✅ Find **Kth** element
✅ Keywords: "top K", "K largest", "K closest"
✅ Need better than O(n log n) sorting

### **Don't Use When:**

❌ Need all elements sorted
❌ K is very large (close to n)
❌ Need median (use two heaps)

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Building heap:** O(n log k)
- **Each insertion:** O(log k)
- **Total:** O(n log k)

### **Space Complexity:**

- **Heap size:** O(k)
- **With frequency map:** O(n)

### **Comparison:**

| Approach    | Time       | Space |
| ----------- | ---------- | ----- |
| Sorting     | O(n log n) | O(1)  |
| Heap        | O(n log k) | O(k)  |
| QuickSelect | O(n) avg   | O(1)  |

---

## 🔥 Must Remember

### **Key Concepts:**

1. **Min-heap** for K largest
2. **Max-heap** for K smallest
3. **Maintain size K** in heap
4. **Top of heap** is Kth element

### **Common Mistakes:**

- ❌ Using wrong heap type
- ❌ Not maintaining heap size
- ❌ Comparing wrong values
- ❌ Forgetting to handle ties

### **Tips:**

- ✅ Think about what to keep in heap
- ✅ Use custom comparator for complex types
- ✅ Consider QuickSelect for better average case
- ✅ Test with small examples

---

## 🎓 Advanced Techniques

### **Bucket Sort for Frequency:**

```cpp
// O(n) time for top k frequent
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int num : nums) freq[num]++;

    vector<vector<int>> buckets(nums.size() + 1);
    for (auto& [num, count] : freq) {
        buckets[count].push_back(num);
    }

    vector<int> result;
    for (int i = buckets.size() - 1; i >= 0 && result.size() < k; i--) {
        for (int num : buckets[i]) {
            result.push_back(num);
            if (result.size() == k) break;
        }
    }

    return result;
}
```

### **QuickSelect:**

```cpp
// O(n) average time for kth largest
int findKthLargest(vector<int>& nums, int k) {
    nth_element(nums.begin(), nums.begin() + k - 1, nums.end(), greater<int>());
    return nums[k - 1];
}
```

---

**Next:** [Modified Binary Search →](32-Modified-Binary-Search.md)
