# 🔍 Pointers & Searching Algorithms

## 📚 Complete Section Overview

This section contains **8 comprehensive lectures** covering pointers fundamentals and advanced binary search techniques.

---

## 📂 Folder Structure

### **09. Pointers in C++ | In Detail**

- Pointer fundamentals
- Pointer arithmetic
- Pointers with arrays
- Pointer to pointer
- Memory management

### **10. Binary Search Algorithm - Iterative and Recursive Method**

- Binary search theory
- Iterative implementation
- Recursive implementation
- Code examples
- Time complexity analysis

### **11. Search in Rotated Sorted Array**

- Understanding rotated arrays
- Modified binary search
- Leetcode 33 solution
- Optimal approach

### **12. Peak Index in Mountain Array**

- Mountain array concept
- Binary search application
- Leetcode 852 solution
- Finding peak element

### **13. Single Element in Sorted Array**

- Problem understanding
- Binary search on answer
- XOR approach
- Optimal solution

### **14. Book Allocation or Allocate Books Problem**

- Binary search on answer space
- Allocation strategy
- Minimization problem
- DSA placement series

### **15. Painter's Partition Problem**

- Partition problem concept
- Binary search application
- Optimal allocation
- DSA placement series

### **16. Aggressive Cows Problem**

- Distance maximization
- Binary search on answer
- Greedy + Binary search
- DSA placement series

---

## 🎯 Key Concepts Covered

✅ Pointer fundamentals & operations  
✅ Binary Search (Iterative & Recursive)  
✅ Modified Binary Search  
✅ Binary Search on Answer Space  
✅ Search in modified arrays  
✅ Allocation problems  
✅ Partition problems  
✅ Optimization techniques

---

## 📝 Practice Problems

### **Easy:**

- Binary Search basics
- Pointers practice

### **Medium:**

- Search in Rotated Sorted Array (Leetcode 33)
- Peak Index in Mountain Array (Leetcode 852)
- Single Element in Sorted Array

### **Hard:**

- Book Allocation Problem
- Painter's Partition Problem
- Aggressive Cows Problem

---

## 📊 Progress Tracker

- [ ] 9.  Pointers in C++ | In Detail
- [ ] 10. Binary Search - Iterative & Recursive
- [ ] 11. Search in Rotated Sorted Array
- [ ] 12. Peak Index in Mountain Array
- [ ] 13. Single Element in Sorted Array
- [ ] 14. Book Allocation Problem
- [ ] 15. Painter's Partition Problem
- [ ] 16. Aggressive Cows Problem

**Progress: 0/8 completed** 🎯

---

## 🎓 Learning Path

### **Phase 1: Fundamentals**

1. Master pointers concepts
2. Understand binary search basics

### **Phase 2: Applications**

3. Practice modified binary search
4. Solve rotated array problems

### **Phase 3: Advanced**

5. Binary search on answer space
6. Allocation and partition problems

---

## 💡 Key Algorithms

### **Binary Search Template:**

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
```

### **Binary Search on Answer:**

```cpp
bool isPossible(int mid) {
    // Check if mid is a valid answer
}

int binarySearchOnAnswer(int low, int high) {
    int result = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (isPossible(mid)) {
            result = mid;
            // Adjust search space
        }
    }

    return result;
}
```

---

## 🚀 How to Use

1. **Start with Pointers** - Build strong foundation
2. **Master Binary Search** - Both iterative and recursive
3. **Practice Modified BS** - Rotated arrays, peak finding
4. **Advanced Problems** - Allocation and partition
5. **Analyze Complexity** - Always check time & space

---

## 📈 Complexity Analysis

| Algorithm     | Time Complexity | Space Complexity                   |
| ------------- | --------------- | ---------------------------------- |
| Binary Search | O(log n)        | O(1) iterative, O(log n) recursive |
| Modified BS   | O(log n)        | O(1)                               |
| BS on Answer  | O(n log m)      | O(1)                               |

---

**Happy Learning! 🎉✨**
