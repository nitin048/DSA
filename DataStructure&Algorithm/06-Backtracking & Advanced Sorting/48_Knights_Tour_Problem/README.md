# 🧱 Knights Tour Problem - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Knights Tour Problem?](#-what-is-knights-tour-problem)
2. [Why Knights Tour Problem?](#-why-knights-tour-problem)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Knights Tour Problem?

### **Concept Overview:**
Knight's Path visiting every Cell of Chessboard.

### **Real-Life Analogy:**
Think of backtracking in grids like solving a **corn maze**. You walk down a path, and if you hit a dead-end wall, you take steps backwards to the last intersection, mark the bad path, and try the alternate direction.

---

## 💡 Why Knights Tour Problem?

### **Advantages:**
- Finds paths in complex puzzle grids
- Prunes invalid path directions early to save execution steps

### **Disadvantages / Challenges:**
- Worst-case search space remains exponential

### **When to Use:**
- For maze solvers, word search grids, N-Queens, and Sudoku puzzles

---

## 📖 Core Concepts

- **Problem:** Move a knight through all $N 	imes N$ cells without revisiting any.
- Check all 8 potential knight moves and backtrack.

---

## 💻 C++ Implementation Reference

```cpp
bool solveKT(int r, int c, int moveIdx, vector<vector<int>>& board) {
    if (moveIdx == n*n) return true;
    for (int i=0; i<8; i++) {
        int nextR = r + xMoves[i], nextC = c + yMoves[i];
        if (isSafe(nextR, nextC, board)) {
            board[nextR][nextC] = moveIdx;
            if (solveKT(nextR, nextC, moveIdx+1, board)) return true;
            board[nextR][nextC] = -1; // Backtrack
        }
    }
    return false;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(8<sup>N*N</sup>) worst case |
| Space Complexity | O(N<sup>2</sup>) |

---

## 💡 Best Practices & Gotchas

- **Warnsdorff's heuristic optimizes knight move selection to run in linear time.**
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
