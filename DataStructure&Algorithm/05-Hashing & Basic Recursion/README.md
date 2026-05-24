# 🔢 Hashing & Basic Recursion

## 📚 Complete Section Overview

This section contains **6 comprehensive lectures** covering hashing techniques, sum problems, and recursion fundamentals.

---

## 📂 Folder Structure

### **31. Two Sum | Find Duplicate | Find Repeating & Missing Values**

- Two Sum problem (Leetcode 1)
- Hash map approach
- Find duplicate elements
- Find repeating & missing values
- Optimal O(n) solutions

### **32. 3 Sum | Brute, Better & Optimized Approach**

- 3 Sum problem (Leetcode 15)
- Brute force O(n³)
- Better approach O(n²)
- Optimized two-pointer O(n²)
- Avoiding duplicates

### **33. 4 Sum Problem | Optimal Approach**

- 4 Sum problem (Leetcode 18)
- Two pointer technique
- Hash map optimization
- Handling duplicates
- Time complexity optimization

### **34. Subarray Sum Equals K**

- Prefix sum concept
- Hash map approach
- Brute force solution
- Better approach
- Optimal O(n) solution

### **35. Recursion Tutorial - Basics to Advanced | Part 1**

- Recursion fundamentals
- Base case & recursive case
- Call stack visualization
- Recursion tree
- Common patterns

### **36. Recursion Part 2 : Fibonacci, Binary Search, Array Sorted**

- Fibonacci with recursion
- Binary search recursive
- Check if array is sorted
- Recursion optimization
- Time & space analysis

---

## 🎯 Key Concepts Covered

### **Hashing:**

✅ Hash map/Hash table  
✅ Two Sum variations  
✅ 3 Sum & 4 Sum problems  
✅ Prefix sum technique  
✅ Subarray problems  
✅ Frequency counting

### **Recursion:**

✅ Recursion basics  
✅ Base case & recursive case  
✅ Call stack  
✅ Fibonacci sequence  
✅ Binary search (recursive)  
✅ Array validation

---

## 📊 Progress Tracker

- [ ] 31. Two Sum & Hashing Problems
- [ ] 32. 3 Sum Problem
- [ ] 33. 4 Sum Problem
- [ ] 34. Subarray Sum Equals K
- [ ] 35. Recursion Basics to Advanced - Part 1
- [ ] 36. Recursion Part 2 (Fibonacci, Binary Search)

**Progress: 0/6 completed** 🎯

---

## 📝 Practice Problems

### **Hashing Problems:**

- Two Sum (Leetcode 1)
- Find Duplicate
- Find Repeating & Missing
- 3 Sum (Leetcode 15)
- 4 Sum (Leetcode 18)
- Subarray Sum Equals K (Leetcode 560)

### **Recursion Problems:**

- Fibonacci numbers
- Binary search (recursive)
- Check if array sorted
- Factorial
- Power function

---

## 💡 Important Algorithms

### **1. Two Sum (Hash Map):**

```cpp
vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> map;

    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];

        if (map.find(complement) != map.end()) {
            return {map[complement], i};
        }

        map[nums[i]] = i;
    }

    return {};
}
// Time: O(n), Space: O(n)
```

### **2. 3 Sum (Two Pointer):**

```cpp
vector<vector<int>> threeSum(vector<int>& nums) {
    vector<vector<int>> result;
    sort(nums.begin(), nums.end());

    for (int i = 0; i < nums.size() - 2; i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue;

        int left = i + 1, right = nums.size() - 1;

        while (left < right) {
            int sum = nums[i] + nums[left] + nums[right];

            if (sum == 0) {
                result.push_back({nums[i], nums[left], nums[right]});

                while (left < right && nums[left] == nums[left+1]) left++;
                while (left < right && nums[right] == nums[right-1]) right--;

                left++;
                right--;
            }
            else if (sum < 0) left++;
            else right--;
        }
    }

    return result;
}
// Time: O(n²), Space: O(1)
```

### **3. Subarray Sum Equals K (Prefix Sum + Hash Map):**

```cpp
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> prefixSum;
    prefixSum[0] = 1;

    int sum = 0, count = 0;

    for (int num : nums) {
        sum += num;

        if (prefixSum.find(sum - k) != prefixSum.end()) {
            count += prefixSum[sum - k];
        }

        prefixSum[sum]++;
    }

    return count;
}
// Time: O(n), Space: O(n)
```

### **4. Fibonacci (Recursion):**

```cpp
int fibonacci(int n) {
    // Base cases
    if (n == 0) return 0;
    if (n == 1) return 1;

    // Recursive case
    return fibonacci(n - 1) + fibonacci(n - 2);
}
// Time: O(2^n), Space: O(n) - call stack
```

### **5. Binary Search (Recursive):**

```cpp
int binarySearch(vector<int>& arr, int target, int left, int right) {
    // Base case
    if (left > right) return -1;

    int mid = left + (right - left) / 2;

    if (arr[mid] == target) return mid;
    else if (arr[mid] > target)
        return binarySearch(arr, target, left, mid - 1);
    else
        return binarySearch(arr, target, mid + 1, right);
}
// Time: O(log n), Space: O(log n) - call stack
```

### **6. Check if Array Sorted (Recursion):**

```cpp
bool isSorted(vector<int>& arr, int index = 0) {
    // Base case
    if (index == arr.size() - 1) return true;

    // Check current and recursive case
    return (arr[index] <= arr[index + 1]) && isSorted(arr, index + 1);
}
// Time: O(n), Space: O(n) - call stack
```

---

## 🎓 Learning Path

### **Phase 1: Hashing Fundamentals (Lectures 31-34)**

1. Master Two Sum with hash map
2. Understand 3 Sum with two pointers
3. Solve 4 Sum problem
4. Learn prefix sum technique
5. Practice subarray problems

### **Phase 2: Recursion Basics (Lectures 35-36)**

6. Understand recursion fundamentals
7. Learn base case & recursive case
8. Visualize call stack
9. Practice Fibonacci
10. Implement recursive binary search

---

## 📈 Complexity Analysis

### **Hashing Problems:**

| Problem      | Brute Force | Optimized | Space |
| ------------ | ----------- | --------- | ----- |
| Two Sum      | O(n²)       | O(n)      | O(n)  |
| 3 Sum        | O(n³)       | O(n²)     | O(1)  |
| 4 Sum        | O(n⁴)       | O(n³)     | O(1)  |
| Subarray Sum | O(n²)       | O(n)      | O(n)  |

### **Recursion Problems:**

| Problem       | Time     | Space (Stack) |
| ------------- | -------- | ------------- |
| Fibonacci     | O(2^n)   | O(n)          |
| Binary Search | O(log n) | O(log n)      |
| Array Sorted  | O(n)     | O(n)          |

---

## 🔥 Pro Tips

### **Hashing:**

- Use `unordered_map` for O(1) average lookup
- Handle duplicates carefully in sum problems
- Prefix sum is powerful for subarray problems
- Sort array for two-pointer technique
- Skip duplicates to avoid repeated triplets

### **Recursion:**

- Always define base case first
- Visualize recursion tree
- Understand call stack
- Consider iterative alternative for optimization
- Use memoization for overlapping subproblems

---

## 🚀 Quick Reference

### **Hash Map Operations:**

```cpp
unordered_map<int, int> map;

// Insert
map[key] = value;

// Find
if (map.find(key) != map.end()) { }

// Count
if (map.count(key)) { }

// Erase
map.erase(key);

// Iterate
for (auto& [key, value] : map) { }
```

### **Recursion Template:**

```cpp
returnType recursiveFunction(parameters) {
    // Base case(s)
    if (baseCondition) {
        return baseValue;
    }

    // Recursive case
    // Do some work
    returnType result = recursiveFunction(modifiedParameters);

    // Process result if needed
    return result;
}
```

---

## 💡 Common Patterns

### **Two Pointer Pattern:**

```cpp
sort(arr.begin(), arr.end());
int left = 0, right = arr.size() - 1;

while (left < right) {
    int sum = arr[left] + arr[right];

    if (sum == target) {
        // Found
        left++;
        right--;
    }
    else if (sum < target) left++;
    else right--;
}
```

### **Prefix Sum Pattern:**

```cpp
unordered_map<int, int> prefixSum;
prefixSum[0] = 1;
int sum = 0;

for (int num : arr) {
    sum += num;

    if (prefixSum.count(sum - k)) {
        // Found subarray
    }

    prefixSum[sum]++;
}
```

---

## 🎯 Interview Tips

### **For Hashing Problems:**

1. Think about hash map first for O(n) solution
2. Consider sorting for two-pointer approach
3. Handle edge cases (empty array, duplicates)
4. Explain time & space complexity
5. Discuss trade-offs

### **For Recursion Problems:**

1. Draw recursion tree
2. Identify base case clearly
3. Explain call stack
4. Discuss time complexity (often exponential)
5. Mention iterative alternative if exists

---

**Happy Learning! 🎉✨**
