# 🕸️ Detect Cycle in Undirected Graph using BFS - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Detect Cycle in Undirected Graph using BFS?](#-what-is-detect-cycle-in-undirected-graph-using-bfs)
2. [Why Detect Cycle in Undirected Graph using BFS?](#-why-detect-cycle-in-undirected-graph-using-bfs)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Detect Cycle in Undirected Graph using BFS?

### **Concept Overview:**
Checking Cycles in Undirected Graphs using BFS.

### **Real-Life Analogy:**
Think of a graph like a **social network map**. People are points (Vertices), and friendships are the lines (Edges) connecting them. Some friendships are one-way (Directed), and some connections are closer than others (Weighted).

---

## 💡 Why Detect Cycle in Undirected Graph using BFS?

### **Advantages:**
- Universal modeling tool for network routes, dependencies, and connections
- BFS finds shortest paths in unweighted setups

### **Disadvantages / Challenges:**
- Adjacency matrix consumes O(V^2) space; adjacency list lookups are slower

### **When to Use:**
- For flight routes planning, GPS mapping, task scheduling (topological), and network latency analysis

---

## 📖 Core Concepts

- **Concept:** Store nodes in a queue alongside their parent links.
- Cycle exists if a visited node is reached via a different parent.

---

## 💻 C++ Implementation Reference

```cpp
// Queue stores pair<int, int> (node, parent).
// Cycle exists if we visit a neighbor that is already visited and is not the parent.
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(V + E) |
| Space Complexity | O(V) |

---

## 💡 Best Practices & Gotchas

- **Ensure correct tracking of parent indices to avoid false positives.**
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
