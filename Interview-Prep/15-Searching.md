# 🔍 Searching Algorithms - Quick Reference

**Find elements efficiently!** 🎯

---

## 📋 What is Searching?

### **Definition:**

**Searching** is the process of finding a specific element in a collection of data. It's one of the most fundamental operations in computer science.

### **Real-World Analogy:**

- **Dictionary** 📖 - Finding a word (binary search)
- **Phone book** 📞 - Looking up a name (binary search)
- **Library** 📚 - Finding a book by scanning shelves (linear search)
- **Database** 🗄️ - Querying records (indexed search)
- **GPS** 🗺️ - Finding nearest location (spatial search)

### **Types of Searching:**

1. **Linear Search** - Check each element sequentially
2. **Binary Search** - Divide and conquer (requires sorted data)
3. **Jump Search** - Jump ahead by fixed steps
4. **Interpolation Search** - Estimate position based on value
5. **Exponential Search** - Find range then binary search

---

## 🎯 Why Use Different Search Algorithms?

### **Linear Search:**

**When to use:**

- Small datasets (< 100 elements)
- Unsorted data
- Simple implementation needed

**Pros:** ✅ Works on unsorted data, ✅ Simple  
**Cons:** ❌ Slow O(n)

### **Binary Search:**

**When to use:**

- Large sorted datasets
- Need O(log n) performance
- Random access available (arrays)

**Pros:** ✅ Fast O(log n), ✅ Efficient  
**Cons:** ❌ Requires sorted data, ❌ Requires random access

---

## 📊 Search Algorithm Comparison

| Algorithm          | Time (Best) | Time (Avg)   | Time (Worst) | Space | Requires Sorted |
| ------------------ | ----------- | ------------ | ------------ | ----- | --------------- |
| Linear Search      | O(1)        | O(n)         | O(n)         | O(1)  | No              |
| Binary Search      | O(1)        | O(log n)     | O(log n)     | O(1)  | Yes             |
| Jump Search        | O(1)        | O(√n)        | O(√n)        | O(1)  | Yes             |
| Interpolation      | O(1)        | O(log log n) | O(n)         | O(1)  | Yes (uniform)   |
| Exponential Search | O(1)        | O(log n)     | O(log n)     | O(1)  | Yes             |

---

## 🎯 Binary Search - Deep Dive

### **How Binary Search Works:**

```
Search for 7 in [1, 3, 5, 7, 9, 11, 13]:

Step 1: Check middle (7)
[1, 3, 5, 7, 9, 11, 13]
         ↑
    Found! Return index 3

Search for 11:
Step 1: [1, 3, 5, 7, 9, 11, 13]
                 ↑ (7 < 11, search right)

Step 2: [9, 11, 13]
            ↑ (11 == 11, found!)
```

### **Binary Search Variants:**

#### **1. Standard Binary Search:**

Find exact value

#### **2. Lower Bound:**

Find first element ≥ target

#### **3. Upper Bound:**

Find first element > target

#### **4. First Occurrence:**

Find leftmost occurrence of target

#### **5. Last Occurrence:**

Find rightmost occurrence of target

### **Binary Search Template:**

```
Two main templates:

Template 1 (left <= right):
- Use when searching for exact value
- Returns -1 if not found

Template 2 (left < right):
- Use for lower/upper bound
- Always returns valid index
```

---

## 🎯 Common Binary Search Patterns

### **1. Search in Sorted Array:**

Standard binary search

### **2. Search in Rotated Array:**

Modified binary search (check which half is sorted)

### **3. Search in 2D Matrix:**

Treat as 1D array or search row then column

### **4. Search in Range:**

Find minimum/maximum that satisfies condition

### **5. Binary Search on Answer:**

Search for optimal value in answer space

---

## 📊 When to Use Binary Search?

### **✅ Use Binary Search When:**

- Data is **sorted** (or can be sorted)
- Need **O(log n)** performance
- Have **random access** (arrays, not linked lists)
- Searching for **boundary** (first/last occurrence)
- **Answer space** is monotonic (can binary search on answer)

### **❌ Don't Use Binary Search When:**

- Data is **unsorted** and can't be sorted
- Dataset is **very small** (< 10 elements)
- Using **linked list** (no random access)
- Need to find **all occurrences** (linear scan better)

---

## 🎯 Binary Search Edge Cases

### **Common Pitfalls:**

1. **Integer overflow:** Use `mid = left + (right - left) / 2` instead of `mid = (left + right) / 2`
2. **Infinite loop:** Check loop condition carefully
3. **Off-by-one errors:** Be careful with `left <= right` vs `left < right`
4. **Empty array:** Handle edge case
5. **Single element:** Test with array of size 1

### **Testing Checklist:**

- ✅ Empty array
- ✅ Single element
- ✅ Two elements
- ✅ Target at beginning
- ✅ Target at end
- ✅ Target in middle
- ✅ Target not present
- ✅ Duplicate elements

---

## 📋 Binary Search

### **Template:**

```cpp
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }

    return -1;
}
// Time: O(log n), Space: O(1)
```

### **Lower Bound (First >= target):**

```cpp
int lowerBound(vector<int>& arr, int target) {
    int left = 0, right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] < target) left = mid + 1;
        else right = mid;
    }
    return left;
}
```

### **Upper Bound (First > target):**

```cpp
int upperBound(vector<int>& arr, int target) {
    int left = 0, right = arr.size();
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] <= target) left = mid + 1;
        else right = mid;
    }
    return left;
}
```

---

## 💡 Common Problems

### **1. Search in Rotated Sorted Array:**

```cpp
int search(vector<int>& nums, int target) {
    int left = 0, right = nums.size() - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) return mid;

        if (nums[left] <= nums[mid]) {  // Left half sorted
            if (nums[left] <= target && target < nums[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } else {  // Right half sorted
            if (nums[mid] < target && target <= nums[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }

    return -1;
}
```

### **2. Find Minimum in Rotated Sorted Array:**

```cpp
int findMin(vector<int>& nums) {
    int left = 0, right = nums.size() - 1;

    while (left < right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] > nums[right])
            left = mid + 1;
        else
            right = mid;
    }

    return nums[left];
}
```

### **3. Search 2D Matrix:**

```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size(), n = matrix[0].size();
    int left = 0, right = m * n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        int val = matrix[mid / n][mid % n];

        if (val == target) return true;
        else if (val < target) left = mid + 1;
        else right = mid - 1;
    }

    return false;
}
```

---

## 🔥 Binary Search Patterns

1. **Standard** - Find exact value
2. **Lower/Upper bound** - Find first/last occurrence
3. **Rotated array** - Modified binary search
4. **Answer search** - Binary search on answer space

---

**Next:** [Sorting →](16-Sorting.md)
