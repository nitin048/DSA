# 🔍 Peak Index in Mountain Array - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Peak Index in Mountain Array?](#-what-is-peak-index-in-mountain-array)
2. [Why Peak Index in Mountain Array?](#-why-peak-index-in-mountain-array)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Peak Index in Mountain Array?

### **Concept Overview:**
Finding the Peak Element in a Mountain Array.

### **Real-Life Analogy:**
Think of Binary Search like looking up a word in a printed **paper dictionary**. You don't read page by page from the beginning. You open the exact middle page, compare your target word alphabet, and discard the entire left or right half instantly.

---

## 💡 Why Peak Index in Mountain Array?

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

- **Mountain Array:** Elements strictly increase then strictly decrease.
- **Peak:** The largest element where `arr[i] > arr[i-1]` and `arr[i] > arr[i+1]`.
- Use binary search comparing `arr[mid]` and `arr[mid+1]`.

---

## 💻 C++ Implementation Reference

```cpp
int peakIndex(vector<int>& arr) {
    int s = 0, e = arr.size() - 1;
    while (s < e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] < arr[mid+1]) s = mid + 1;
        else e = mid;
    }
    return s; // Peak index
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

- **Condition `s < e` avoids out-of-bounds check since mid+1 is always valid.**
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
