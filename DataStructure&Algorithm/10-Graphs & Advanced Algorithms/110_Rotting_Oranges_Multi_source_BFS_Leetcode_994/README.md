# 🕸️ Rotting Oranges Multi source BFS Leetcode 994 - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Rotting Oranges Multi source BFS Leetcode 994?](#-what-is-rotting-oranges-multi-source-bfs-leetcode-994)
2. [Why Rotting Oranges Multi source BFS Leetcode 994?](#-why-rotting-oranges-multi-source-bfs-leetcode-994)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Rotting Oranges Multi source BFS Leetcode 994?

### **Concept Overview:**
Simulating Rotting grids using Multi-source BFS.

### **Real-Life Analogy:**
Think of a graph like a **social network map**. People are points (Vertices), and friendships are the lines (Edges) connecting them. Some friendships are one-way (Directed), and some connections are closer than others (Weighted).

---

## 💡 Why Rotting Oranges Multi source BFS Leetcode 994?

### **Advantages:**
- Universal modeling tool for network routes, dependencies, and connections
- BFS finds shortest paths in unweighted setups

### **Disadvantages / Challenges:**
- Adjacency matrix consumes O(V^2) space; adjacency list lookups are slower

### **When to Use:**
- For flight routes planning, GPS mapping, task scheduling (topological), and network latency analysis

---

## 📖 Core Concepts

- **Problem:** Calculate time taken to rot all oranges.
- Push all initially rotten coordinates to a queue, then run BFS.

---

## 💻 C++ Implementation Reference

```cpp
// BFS queue stores pair<pair<int, int>, int> (coords, time).
// Process neighbors, decrementing fresh count and updating max time.
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(R * C) |
| Space Complexity | O(R * C) |

---

## 💡 Best Practices & Gotchas

- **Fails if fresh oranges remain isolated from the grid components.**
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
