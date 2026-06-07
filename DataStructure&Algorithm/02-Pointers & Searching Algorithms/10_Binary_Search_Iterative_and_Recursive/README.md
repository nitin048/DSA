# 🔍 Binary Search Iterative and Recursive - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Binary Search Iterative and Recursive?](#-what-is-binary-search-iterative-and-recursive)
2. [Why Binary Search Iterative and Recursive?](#-why-binary-search-iterative-and-recursive)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Binary Search Iterative and Recursive?

### **Concept Overview:**
Iterative and Recursive Binary Search on Sorted Arrays.

### **Real-Life Analogy:**
Think of Binary Search like looking up a word in a printed **paper dictionary**. You don't read page by page from the beginning. You open the exact middle page, compare your target word alphabet, and discard the entire left or right half instantly.

---

## 💡 Why Binary Search Iterative and Recursive?

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

- **Prerequisite:** Array must be sorted in ascending/descending order.
- **Divide & Conquer:** Repeatedly divides search space in half.
- **Three Pointers:** Tracks `start`, `end`, and `mid`.

---

## 💻 C++ Implementation Reference

```cpp
int binarySearch(int arr[], int size, int target) {
    int s = 0, e = size - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) s = mid + 1;
        else e = mid - 1;
    }
    return -1;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(log N) |
| Space Complexity | O(1) iterative |

---

## 💡 Best Practices & Gotchas

- **Compute mid as `start + (end-start)/2` to prevent integer overflow.**
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
