# 🔍 Recursion Part2 Fibonacci Binary Search - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Recursion Part2 Fibonacci Binary Search?](#-what-is-recursion-part2-fibonacci-binary-search)
2. [Why Recursion Part2 Fibonacci Binary Search?](#-why-recursion-part2-fibonacci-binary-search)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Recursion Part2 Fibonacci Binary Search?

### **Concept Overview:**
Fibonacci Calculations and Recursive Binary Search.

### **Real-Life Analogy:**
Think of Binary Search like looking up a word in a printed **paper dictionary**. You don't read page by page from the beginning. You open the exact middle page, compare your target word alphabet, and discard the entire left or right half instantly.

---

## 💡 Why Recursion Part2 Fibonacci Binary Search?

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

- **Recurrence:** Defining function outputs based on smaller inputs.
- **Tree:** Recursion splits form tree structures (e.g. Fibonacci: 2 branches).

---

## 💻 C++ Implementation Reference

```cpp
int recBS(int arr[], int s, int e, int target) {
    if (s > e) return -1;
    int mid = s + (e - s) / 2;
    if (arr[mid] == target) return mid;
    if (arr[mid] < target) return recBS(arr, mid + 1, e, target);
    return recBS(arr, s, mid - 1, target);
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Recursive BS | O(log N) time, O(log N) stack |
| Fibonacci Recursive | O(2<sup>N</sup>) time |

---

## 💡 Best Practices & Gotchas

- **Use memoization to optimize recursive Fibonacci to O(N) time.**
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
