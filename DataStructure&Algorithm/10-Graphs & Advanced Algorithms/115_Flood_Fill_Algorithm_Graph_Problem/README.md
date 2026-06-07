# 🕸️ Flood Fill Algorithm Graph Problem - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Flood Fill Algorithm Graph Problem?](#-what-is-flood-fill-algorithm-graph-problem)
2. [Why Flood Fill Algorithm Graph Problem?](#-why-flood-fill-algorithm-graph-problem)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Flood Fill Algorithm Graph Problem?

### **Concept Overview:**
Recoloring Connected Pixels in Grid (Flood Fill).

### **Real-Life Analogy:**
Think of a graph like a **social network map**. People are points (Vertices), and friendships are the lines (Edges) connecting them. Some friendships are one-way (Directed), and some connections are closer than others (Weighted).

---

## 💡 Why Flood Fill Algorithm Graph Problem?

### **Advantages:**
- Universal modeling tool for network routes, dependencies, and connections
- BFS finds shortest paths in unweighted setups

### **Disadvantages / Challenges:**
- Adjacency matrix consumes O(V^2) space; adjacency list lookups are slower

### **When to Use:**
- For flight routes planning, GPS mapping, task scheduling (topological), and network latency analysis

---

## 📖 Core Concepts

- **Problem:** Recolour connected pixels matching an initial colour.
- Run DFS/BFS starting at target pixel, updating matching neighbors.

---

## 💻 C++ Implementation Reference

```cpp
void dfsFill(int r, int c, vector<vector<int>>& img, int oldColor, int newColor) {
    if (r<0||c<0||r>=img.size()||c>=img[0].size()||img[r][c]!=oldColor) return;
    img[r][c] = newColor;
    dfsFill(r+1, c, img, oldColor, newColor); dfsFill(r-1, c, img, oldColor, newColor);
    dfsFill(r, c+1, img, oldColor, newColor); dfsFill(r, c-1, img, oldColor, newColor);
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

- **Avoid infinite loops by checking that the new color differs from the old color.**
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
