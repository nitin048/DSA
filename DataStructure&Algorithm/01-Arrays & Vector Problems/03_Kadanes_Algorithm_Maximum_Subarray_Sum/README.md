# 📊 Kadanes Algorithm Maximum Subarray Sum - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Kadanes Algorithm Maximum Subarray Sum?](#-what-is-kadanes-algorithm-maximum-subarray-sum)
2. [Why Kadanes Algorithm Maximum Subarray Sum?](#-why-kadanes-algorithm-maximum-subarray-sum)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Kadanes Algorithm Maximum Subarray Sum?

### **Concept Overview:**
Maximum Subarray Sum in Linear Time.

### **Real-Life Analogy:**
Think of an array like a **row of lockers** in a school hallway. Each locker has a unique number (index) starting from 0, is of the same size, and lies directly next to the adjacent lockers (contiguous). If you know the locker number, you can open it instantly in O(1) time.

---

## 💡 Why Kadanes Algorithm Maximum Subarray Sum?

### **Advantages:**
- Constant lookup time for direct indexing
- Highly cache-friendly sequential storage
- No memory overhead from pointers

### **Disadvantages / Challenges:**
- Fixed size limitations
- Insertions and deletions at arbitrary positions require linear array shifting O(N)

### **When to Use:**
- When the maximum collection size is known in advance
- When cache-locality performance is critical
- When quick direct indexes calculations are preferred

---

## 📖 Core Concepts

- **Subarray:** Contiguous segment of an array.
- **Greedy local search:** Accumulate positive element values; reset subarray search if sum drops below 0.
- **Single Pass:** Evaluates maximum sum in a single linear scan.

---

## 💻 C++ Implementation Reference

```cpp
int maxSubarraySum(int arr[], int n) {
    int maxSum = INT_MIN, currSum = 0;
    for(int i = 0; i < n; i++) {
        currSum += arr[i];
        maxSum = max(maxSum, currSum);
        if(currSum < 0) currSum = 0;
    }
    return maxSum;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) |
| Space Complexity | O(1) |

---

## 💡 Best Practices & Gotchas

- **Correctly handle all-negative arrays by initializing the maximum sum to `INT_MIN` instead of 0.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Find maximum/minimum element in array
- [ ] Verify if array is sorted
- [ ] Reverse array elements in-place

### **Medium Problems:**
- [ ] Maximum Subarray Sum (Kadane's Algorithm)
- [ ] Find Majority Element (Moore's Voting)
- [ ] Two Sum complement hashes lookups

### **Hard Problems:**
- [ ] Product of Array Except Self without Division
- [ ] Trapping Rainwater index boundaries

---

## ✅ Checklist

- [ ] Learn Row-Major vs contiguous offset calculations
- [ ] Master sliding window and two-pointer loops
- [ ] Ensure array index bounds are validated to prevent overflows

---

**Happy Coding! 📊**
