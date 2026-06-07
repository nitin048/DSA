# 🧱 N Queens Problem Backtracking - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is N Queens Problem Backtracking?](#-what-is-n-queens-problem-backtracking)
2. [Why N Queens Problem Backtracking?](#-why-n-queens-problem-backtracking)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is N Queens Problem Backtracking?

### **Concept Overview:**
Placing N Queens safely on Chessboard.

### **Real-Life Analogy:**
Think of backtracking in grids like solving a **corn maze**. You walk down a path, and if you hit a dead-end wall, you take steps backwards to the last intersection, mark the bad path, and try the alternate direction.

---

## 💡 Why N Queens Problem Backtracking?

### **Advantages:**
- Finds paths in complex puzzle grids
- Prunes invalid path directions early to save execution steps

### **Disadvantages / Challenges:**
- Worst-case search space remains exponential

### **When to Use:**
- For maze solvers, word search grids, N-Queens, and Sudoku puzzles

---

## 📖 Core Concepts

- **Problem:** Place N queens such that no two queens attack each other.
- Validate row, column, and diagonal constraints.

---

## 💻 C++ Implementation Reference

```cpp
bool isSafe(vector<string>& board, int r, int c, int n) {
    for (int i=0; i<r; i++) if (board[i][c]=='Q') return false;
    for (int i=r, j=c; i>=0 && j>=0; i--, j--) if (board[i][j]=='Q') return false;
    for (int i=r, j=c; i>=0 && j<n; i--, j++) if (board[i][j]=='Q') return false;
    return true;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N!) |
| Space Complexity | O(N<sup>2</sup>) (Board state) |

---

## 💡 Best Practices & Gotchas

- **Prune branch decisions early to reduce evaluation times.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Count paths in a grid with no blocks
- [ ] Flood Fill grid paint

### **Medium Problems:**
- [ ] Rat in a Maze
- [ ] Word Search on grid
- [ ] Path with Maximum Gold

### **Hard Problems:**
- [ ] N-Queens puzzle solver
- [ ] Sudoku solver board

---

## ✅ Checklist

- [ ] Verify grid boundary conditions (out of bounds row/col checks)
- [ ] Mark tiles as visited before recursing, and unmark on backtrack
- [ ] Check diagonal constraints for board puzzles

---

**Happy Coding! 🧱**
