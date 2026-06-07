# ⚡ Merge Sort Algorithm - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Merge Sort Algorithm?](#-what-is-merge-sort-algorithm)
2. [Why Merge Sort Algorithm?](#-why-merge-sort-algorithm)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Merge Sort Algorithm?

### **Concept Overview:**
Divide-and-Conquer Recursive Merge Sort.

### **Real-Life Analogy:**
Think of advanced sorting like sorting a massive pile of **unsorted papers** by splitting it into two smaller piles, sorting those piles separately, and then merging the sorted sheets back together in order.

---

## 💡 Why Merge Sort Algorithm?

### **Advantages:**
- Vastly faster sorting on large scale collections
- Merge Sort is perfect for linked lists and stable merges

### **Disadvantages / Challenges:**
- Merge Sort requires extra auxiliary memory O(N)
- Quick Sort can degrade to O(N^2) on bad pivot choices

### **When to Use:**
- For large datasets where fast sorting is mandatory
- When stable order is required (Merge Sort)

---

## 📖 Core Concepts

- **Concept:** Divide array, recursively sort halves, then merge sorted lists.
- **Stability:** Stable sorting algorithm that preserves original relative order.

---

## 💻 C++ Implementation Reference

```cpp
void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;
    int mid = l + (r - l) / 2;
    mergeSort(arr, l, mid);
    mergeSort(arr, mid + 1, r);
    merge(arr, l, mid, r);
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N log N) (All cases) |
| Space Complexity | O(N) (Auxiliary array) |

---

## 💡 Best Practices & Gotchas

- **Ideal for sorting linked lists due to sequential memory access.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Merge two pre-sorted arrays
- [ ] Trace partition index in Quick Sort

### **Medium Problems:**
- [ ] Merge Sort implementation
- [ ] Quick Sort with middle-pivot
- [ ] Count Inversions in an array

### **Hard Problems:**
- [ ] Kth largest element (Quick Select)
- [ ] Sort List in O(N log N) time and O(1) space

---

## ✅ Checklist

- [ ] Handle recursion base cases (size <= 1)
- [ ] Implement merge logic with clean bounds checks
- [ ] Choose pivot heuristically to avoid Quick Sort worst case

---

**Happy Coding! ⚡**
