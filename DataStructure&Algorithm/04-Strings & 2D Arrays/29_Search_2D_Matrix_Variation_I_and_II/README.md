# 📊 Search 2D Matrix Variation I and II - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Search 2D Matrix Variation I and II?](#-what-is-search-2d-matrix-variation-i-and-ii)
2. [Why Search 2D Matrix Variation I and II?](#-why-search-2d-matrix-variation-i-and-ii)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Search 2D Matrix Variation I and II?

### **Concept Overview:**
Search in Fully Sorted and Row/Col Sorted Matrices.

### **Real-Life Analogy:**
Think of a 2D matrix like a **city street map** grid. To locate a shop, you need two coordinates: the street index (row) and the avenue index (column). Underneath the ground, all grid elements are laid out in a single straight pipe.

---

## 💡 Why Search 2D Matrix Variation I and II?

### **Advantages:**
- Enables modeling tabular formats and coordinate systems
- Fast element lookup via row and col offsets

### **Disadvantages / Challenges:**
- Row scans are cache-friendly; column-based index sweeps trigger memory latency

### **When to Use:**
- For image pixel grids, board games (chess/sudoku), and linear algebra

---

## 📖 Core Concepts

- **Type I:** Sorted as a single flat list. Perform flat 1D binary search: `arr[mid/cols][mid%cols]`.
- **Type II:** Sorted independently by row & col. Search from top-right corner.

---

## 💻 C++ Implementation Reference

```cpp
bool searchMatrixII(vector<vector<int>>& mat, int target) {
    int r = 0, c = mat[0].size() - 1;
    while (r < mat.size() && c >= 0) {
        if (mat[r][c] == target) return true;
        if (mat[r][c] > target) c--;
        else r++;
    }
    return false;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Search Matrix I | O(log(R * C)) |
| Search Matrix II | O(R + C) |

---

## 💡 Best Practices & Gotchas

- **Matrix II can also start search from bottom-left corner.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Matrix traversal and elements summation
- [ ] Transpose of a matrix

### **Medium Problems:**
- [ ] Search in a row-col sorted 2D matrix
- [ ] Spiral order matrix print
- [ ] Rotate image by 90 degrees

### **Hard Problems:**
- [ ] Maximal rectangle of 1s in binary matrix

---

## ✅ Checklist

- [ ] Understand Row-Major mapping formula: index = row * cols + col
- [ ] Use correct boundaries loops for spiral traversals
- [ ] Avoid memory out-of-bound errors in column offsets

---

**Happy Coding! 📊**
