# 🔍 Single Element in Sorted Array - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Single Element in Sorted Array?](#-what-is-single-element-in-sorted-array)
2. [Why Single Element in Sorted Array?](#-why-single-element-in-sorted-array)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Single Element in Sorted Array?

### **Concept Overview:**
Finding the Non-Duplicate Element in a Sorted Array.

### **Real-Life Analogy:**
Think of Binary Search like looking up a word in a printed **paper dictionary**. You don't read page by page from the beginning. You open the exact middle page, compare your target word alphabet, and discard the entire left or right half instantly.

---

## 💡 Why Single Element in Sorted Array?

### **Advantages:**
- Extremely fast search speed for large inputs
- O(1) constant auxiliary space usage
- Adaptable to various bound-checks patterns

### **Disadvantages / Challenges:**
- Requires the overhead of keeping arrays sorted
- Only supports linear random-access structures (no linked lists)

### **When to Use:**
- When searching sorted linear arrays
- To look up search space boundaries
- For database index lookups

---

## 📖 Core Concepts

- **Problem:** Every element appears twice except one. Find it in logarithmic time.
- **Odd-Even Indexing:** Duplicates appear at indices (even, odd) before the single element, and (odd, even) after it.

---

## 💻 C++ Implementation Reference

```cpp
int singleNonDuplicate(vector<int>& nums) {
    int s = 0, e = nums.size() - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (mid % 2 == 1) mid--; // Make mid even
        if (nums[mid] == nums[mid + 1]) s = mid + 2;
        else e = mid;
    }
    return nums[s];
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(log N) |
| Space Complexity | O(1) |

---

## 💡 Best Practices & Gotchas

- **Alternatively solved with XOR in O(N) time, but Binary Search achieves O(log N).**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Standard Binary Search lookup
- [ ] Find first or last index of duplicate keys

### **Medium Problems:**
- [ ] Search in rotated sorted array
- [ ] Search in 2D sorted matrix
- [ ] Find peak element in mountain array

### **Hard Problems:**
- [ ] Median of two sorted arrays
- [ ] Search range queries in duplicate-heavy indexes

---

## ✅ Checklist

- [ ] Compute mid with start + (end-start)/2 to avoid integer overflow
- [ ] Master boundary updates (low = mid + 1 vs high = mid - 1)
- [ ] Implement bounds checks (lower_bound, upper_bound)

---

**Happy Coding! 🔍**
