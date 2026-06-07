# 🧱 Rat in Maze Backtracking - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Rat in Maze Backtracking?](#-what-is-rat-in-maze-backtracking)
2. [Why Rat in Maze Backtracking?](#-why-rat-in-maze-backtracking)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Rat in Maze Backtracking?

### **Concept Overview:**
Finding All Path Solutions in Grid Maze.

### **Real-Life Analogy:**
Think of backtracking in grids like solving a **corn maze**. You walk down a path, and if you hit a dead-end wall, you take steps backwards to the last intersection, mark the bad path, and try the alternate direction.

---

## 💡 Why Rat in Maze Backtracking?

### **Advantages:**
- Finds paths in complex puzzle grids
- Prunes invalid path directions early to save execution steps

### **Disadvantages / Challenges:**
- Worst-case search space remains exponential

### **When to Use:**
- For maze solvers, word search grids, N-Queens, and Sudoku puzzles

---

## 📖 Core Concepts

- **Problem:** Navigate from top-left (0,0) to bottom-right (N-1,N-1).
- Avoid revisiting cells by marking them as visited and unmarking them during backtrack steps.

---

## 💻 C++ Implementation Reference

```cpp
void solveMaze(int r, int c, vector<vector<int>>& maze, string path, vector<string>& ans) {
    if (r == n-1 && c == n-1) { ans.push_back(path); return; }
    maze[r][c] = 0; // Mark visited
    if (isSafe(r+1, c)) solveMaze(r+1, c, maze, path + 'D', ans);
    if (isSafe(r, c-1)) solveMaze(r, c-1, maze, path + 'L', ans);
    maze[r][c] = 1; // Backtrack
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(3<sup>N<sup>2</sup></sup>) |
| Space Complexity | O(N<sup>2</sup>) |

---

## 💡 Best Practices & Gotchas

- **Ensure checking boundaries before accessing maze coordinates.**
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
