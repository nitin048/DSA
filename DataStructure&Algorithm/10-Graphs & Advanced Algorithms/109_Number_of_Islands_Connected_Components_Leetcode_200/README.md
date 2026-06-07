# 🕸️ Number of Islands Connected Components Leetcode 200 - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Number of Islands Connected Components Leetcode 200?](#-what-is-number-of-islands-connected-components-leetcode-200)
2. [Why Number of Islands Connected Components Leetcode 200?](#-why-number-of-islands-connected-components-leetcode-200)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Number of Islands Connected Components Leetcode 200?

### **Concept Overview:**
Grid Component Boundary Traversals (Number of Islands).

### **Real-Life Analogy:**
Think of a graph like a **social network map**. People are points (Vertices), and friendships are the lines (Edges) connecting them. Some friendships are one-way (Directed), and some connections are closer than others (Weighted).

---

## 💡 Why Number of Islands Connected Components Leetcode 200?

### **Advantages:**
- Universal modeling tool for network routes, dependencies, and connections
- BFS finds shortest paths in unweighted setups

### **Disadvantages / Challenges:**
- Adjacency matrix consumes O(V^2) space; adjacency list lookups are slower

### **When to Use:**
- For flight routes planning, GPS mapping, task scheduling (topological), and network latency analysis

---

## 📖 Core Concepts

- **Problem:** Return count of connected 1s.
- Run DFS/BFS when finding a 1, sinking adjacent land elements.

---

## 💻 C++ Implementation Reference

```cpp
void sinkIsland(int r, int c, vector<vector<char>>& grid) {
    if (r<0||c<0||r>=grid.size()||c>=grid[0].size()||grid[r][c]=='0') return;
    grid[r][c] = '0'; // Sink land
    sinkIsland(r+1, c, grid); sinkIsland(r-1, c, grid);
    sinkIsland(r, c+1, grid); sinkIsland(r, c-1, grid);
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(R * C) |
| Space Complexity | O(R * C) stack |

---

## 💡 Best Practices & Gotchas

- **Sinking elements in-place eliminates the need to allocate extra visited matrices.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Implement adjacency list
- [ ] BFS traversal
- [ ] DFS traversal

### **Medium Problems:**
- [ ] Cycle detection in Undirected/Directed graphs
- [ ] Topological Sort (Kahn's Algorithm)
- [ ] Dijkstra's Shortest Path

### **Hard Problems:**
- [ ] Tarjan's Bridge Finder
- [ ] Articulation Points detection
- [ ] Bellman-Ford with negative edge checks

---

## ✅ Checklist

- [ ] Mark vertices as visited to prevent infinite loops in cycles
- [ ] Use priority queues for Dijkstra to achieve O(E log V)
- [ ] Distinguish between cyclic vs DAG structures

---

**Happy Coding! 🕸️**
