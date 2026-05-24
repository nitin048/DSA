# 📊 Arrays - Quick Reference

**Most common in interviews!** 🎯

---

## 📋 What is an Array?

### **Definition:**

An array is a **contiguous block of memory** that stores a **fixed-size sequential collection** of elements of the **same type**. Arrays provide **O(1) random access** to elements using indices.

### **Key Characteristics:**

- **Fixed size** - Size determined at creation
- **Contiguous memory** - Elements stored next to each other
- **Same type** - All elements must be same data type
- **Zero-indexed** - First element at index 0
- **Random access** - O(1) access to any element

### **Memory Layout:**

```
Array: [10, 20, 30, 40, 50]

Memory:
┌─────┬─────┬─────┬─────┬─────┐
│ 10  │ 20  │ 30  │ 40  │ 50  │
└─────┴─────┴─────┴─────┴─────┘
0x100 0x104 0x108 0x10C 0x110

Index:  0     1     2     3     4
```

### **Why Use Arrays?**

- ✅ **Fast access** - O(1) by index
- ✅ **Cache-friendly** - Contiguous memory
- ✅ **Simple** - Easy to understand and use
- ✅ **Memory efficient** - No extra overhead
- ✅ **Foundation** - Basis for other data structures

---

## 📋 Array Basics

### **Declaration:**

```cpp
// Fixed size
int arr[5];                          // Uninitialized
int arr[5] = {1, 2, 3, 4, 5};       // Initialized
int arr[] = {1, 2, 3, 4, 5};        // Size inferred

// Dynamic (vector)
vector<int> v;                       // Empty
vector<int> v(5);                    // Size 5, default values
vector<int> v(5, 10);                // Size 5, all 10
vector<int> v = {1, 2, 3};          // Initialized
```

### **Access:**

```cpp
arr[0];      // O(1) - Direct access
v[0];        // O(1) - Direct access
v.at(0);     // O(1) - With bounds checking

// How it works:
// address = base_address + (index * element_size)
// arr[2] = 0x100 + (2 * 4) = 0x108
```

### **Array vs Vector:**

| Feature      | Array           | Vector          |
| ------------ | --------------- | --------------- |
| Size         | Fixed           | Dynamic         |
| Memory       | Stack           | Heap            |
| Resize       | No              | Yes             |
| Bounds check | No              | at() method     |
| Performance  | Slightly faster | Slightly slower |
| Use case     | Size known      | Size unknown    |

---

## 🎯 Array Operations Complexity

### **Time Complexity:**

| Operation        | Array | Vector         |
| ---------------- | ----- | -------------- |
| Access by index  | O(1)  | O(1)           |
| Search           | O(n)  | O(n)           |
| Insert at end    | -     | O(1) amortized |
| Insert at middle | O(n)  | O(n)           |
| Delete           | O(n)  | O(n)           |
| Resize           | -     | O(n)           |

### **Space Complexity:**

- **Array:** O(n) - exactly n elements
- **Vector:** O(n) - may have extra capacity

---

## 🔥 Common Operations

### **Vector Operations:**

```cpp
v.push_back(x);      // O(1) amortized
v.pop_back();        // O(1)
v.size();            // O(1)
v.empty();           // O(1)
v.clear();           // O(n)
v.front();           // O(1)
v.back();            // O(1)
v.insert(it, x);     // O(n)
v.erase(it);         // O(n)
```

### **2D Arrays:**

```cpp
// Fixed
int arr[3][4];

// Dynamic
vector<vector<int>> matrix(3, vector<int>(4));
vector<vector<int>> matrix = {
    {1, 2, 3},
    {4, 5, 6}
};

// Access
matrix[i][j];
```

---

## 🎯 Common Patterns

### **1. Two Pointers**

```cpp
// Find pair with sum
vector<int> twoSum(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;

    while (left < right) {
        int sum = arr[left] + arr[right];
        if (sum == target)
            return {left, right};
        else if (sum < target)
            left++;
        else
            right--;
    }
    return {-1, -1};
}
// Time: O(n), Space: O(1)
```

### **2. Sliding Window**

```cpp
// Max sum of k consecutive elements
int maxSum(vector<int>& arr, int k) {
    int sum = 0, maxSum = 0;

    // First window
    for (int i = 0; i < k; i++)
        sum += arr[i];
    maxSum = sum;

    // Slide window
    for (int i = k; i < arr.size(); i++) {
        sum += arr[i] - arr[i-k];
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
// Time: O(n), Space: O(1)
```

### **3. Prefix Sum**

```cpp
// Range sum queries
vector<int> prefixSum(vector<int>& arr) {
    vector<int> prefix(arr.size());
    prefix[0] = arr[0];

    for (int i = 1; i < arr.size(); i++)
        prefix[i] = prefix[i-1] + arr[i];

    return prefix;
}

// Sum from index i to j
int rangeSum(vector<int>& prefix, int i, int j) {
    if (i == 0) return prefix[j];
    return prefix[j] - prefix[i-1];
}
// Time: O(1) per query after O(n) preprocessing
```

### **4. Kadane's Algorithm (Max Subarray)**

```cpp
int maxSubArray(vector<int>& arr) {
    int maxSum = arr[0];
    int currentSum = arr[0];

    for (int i = 1; i < arr.size(); i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}
// Time: O(n), Space: O(1)
```

### **5. Dutch National Flag (3-way partition)**

```cpp
// Sort 0s, 1s, 2s
void sortColors(vector<int>& arr) {
    int low = 0, mid = 0, high = arr.size() - 1;

    while (mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}
// Time: O(n), Space: O(1)
```

---

## 💡 Common Problems

### **1. Two Sum**

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (map.count(complement))
            return {map[complement], i};
        map[nums[i]] = i;
    }
    return {};
}
// Time: O(n), Space: O(n)
```

### **2. Best Time to Buy/Sell Stock**

```cpp
int maxProfit(vector<int>& prices) {
    int minPrice = INT_MAX;
    int maxProfit = 0;

    for (int price : prices) {
        minPrice = min(minPrice, price);
        maxProfit = max(maxProfit, price - minPrice);
    }
    return maxProfit;
}
// Time: O(n), Space: O(1)
```

### **3. Contains Duplicate**

```cpp
bool containsDuplicate(vector<int>& nums) {
    unordered_set<int> seen;
    for (int num : nums) {
        if (seen.count(num)) return true;
        seen.insert(num);
    }
    return false;
}
// Time: O(n), Space: O(n)
```

### **4. Product Except Self**

```cpp
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> result(n, 1);

    // Left products
    int left = 1;
    for (int i = 0; i < n; i++) {
        result[i] = left;
        left *= nums[i];
    }

    // Right products
    int right = 1;
    for (int i = n-1; i >= 0; i--) {
        result[i] *= right;
        right *= nums[i];
    }

    return result;
}
// Time: O(n), Space: O(1) excluding output
```

### **5. Rotate Array**

```cpp
void rotate(vector<int>& nums, int k) {
    k %= nums.size();
    reverse(nums.begin(), nums.end());
    reverse(nums.begin(), nums.begin() + k);
    reverse(nums.begin() + k, nums.end());
}
// Time: O(n), Space: O(1)
```

---

## 🎯 Interview Tips

### **Common Questions:**

1. **Two Sum variations** - Use hash map
2. **Subarray problems** - Sliding window or prefix sum
3. **Sorting required?** - Consider if you can avoid it
4. **In-place?** - Two pointers or swapping
5. **Multiple passes?** - Try to do in one pass

### **Optimization Techniques:**

- **Hash map** - O(n) instead of O(n²)
- **Two pointers** - O(n) instead of O(n²)
- **Sliding window** - O(n) instead of O(n\*k)
- **Prefix sum** - O(1) queries after O(n) preprocessing

---

## 🔥 Must Remember

### **Time Complexities:**

- Access: O(1)
- Search: O(n)
- Insert (end): O(1) amortized
- Insert (middle): O(n)
- Delete: O(n)

### **Common Tricks:**

```cpp
// Reverse
reverse(arr.begin(), arr.end());

// Sort
sort(arr.begin(), arr.end());

// Find
auto it = find(arr.begin(), arr.end(), value);

// Count
int cnt = count(arr.begin(), arr.end(), value);

// Max/Min element
int maxVal = *max_element(arr.begin(), arr.end());
int minVal = *min_element(arr.begin(), arr.end());

// Sum
int sum = accumulate(arr.begin(), arr.end(), 0);
```

---

## 🎯 Array Problem-Solving Patterns

### **Pattern Recognition:**

| Problem Type          | Pattern                     | Example             |
| --------------------- | --------------------------- | ------------------- |
| Find pair with sum    | Two Pointers / Hash Map     | Two Sum             |
| Subarray problems     | Sliding Window / Prefix Sum | Max Subarray        |
| In-place modification | Two Pointers                | Remove Duplicates   |
| Sorting required      | Sort first                  | 3Sum                |
| Multiple passes       | Iterate multiple times      | Product Except Self |

---

## 📊 Complexity Cheat Sheet

### **Time Complexities:**

- **Access:** O(1)
- **Search:** O(n) unsorted, O(log n) sorted
- **Insert (end):** O(1) amortized (vector)
- **Insert (middle):** O(n)
- **Delete:** O(n)
- **Sort:** O(n log n)

### **Common Tricks:**

```cpp
// Reverse
reverse(arr.begin(), arr.end());

// Sort
sort(arr.begin(), arr.end());

// Find
auto it = find(arr.begin(), arr.end(), value);

// Count
int cnt = count(arr.begin(), arr.end(), value);

// Max/Min element
int maxVal = *max_element(arr.begin(), arr.end());
int minVal = *min_element(arr.begin(), arr.end());

// Sum
int sum = accumulate(arr.begin(), arr.end(), 0);

// Remove duplicates (sorted array)
sort(arr.begin(), arr.end());
arr.erase(unique(arr.begin(), arr.end()), arr.end());
```

---

## 🔥 Must Remember

### **Key Concepts:**

1. **Arrays are 0-indexed** in C++
2. **Contiguous memory** - cache-friendly
3. **Fixed size** for static arrays
4. **Vector** for dynamic arrays
5. **Two pointers** for O(n) solutions

### **Common Mistakes:**

- ❌ Array index out of bounds
- ❌ Not initializing array elements
- ❌ Forgetting array size is fixed
- ❌ Using wrong loop bounds (off-by-one)
- ❌ Not considering negative numbers

### **Optimization Techniques:**

- ✅ **Hash map** - O(n) instead of O(n²)
- ✅ **Two pointers** - O(n) instead of O(n²)
- ✅ **Sliding window** - O(n) instead of O(n×k)
- ✅ **Prefix sum** - O(1) queries after O(n) preprocessing
- ✅ **Sort first** - Enables binary search and two pointers

---

**Next:** [Strings →](07-Strings.md)
