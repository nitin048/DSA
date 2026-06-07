# 🕸️ Detect Cycle in Undirected Graph using DFS - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Detect Cycle in Undirected Graph using DFS?](#-what-is-detect-cycle-in-undirected-graph-using-dfs)
2. [Why Detect Cycle in Undirected Graph using DFS?](#-why-detect-cycle-in-undirected-graph-using-dfs)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Detect Cycle in Undirected Graph using DFS?

### **Concept Overview:**
Checking Cycles in Undirected Graphs using DFS.

### **Real-Life Analogy:**
Think of a graph like a **social network map**. People are points (Vertices), and friendships are the lines (Edges) connecting them. Some friendships are one-way (Directed), and some connections are closer than others (Weighted).

---

## 💡 Why Detect Cycle in Undirected Graph using DFS?

### **Advantages:**
- Universal modeling tool for network routes, dependencies, and connections
- BFS finds shortest paths in unweighted setups

### **Disadvantages / Challenges:**
- Adjacency matrix consumes O(V^2) space; adjacency list lookups are slower

### **When to Use:**
- For flight routes planning, GPS mapping, task scheduling (topological), and network latency analysis

---

## 📖 Core Concepts

- **Concept:** Cycle exists if we visit a neighbor node that is already visited and is not the parent node.

---

## 💻 C++ Implementation Reference

```cpp
bool hasCycleDFS(int u, int parent, vector<vector<int>>& adj, vector<bool>& visited) {
    visited[u] = true;
    for (int v : adj[u]) {
        if (!visited[v]) {
            if (hasCycleDFS(v, u, adj, visited)) return true;
        } else if (v != parent) return true;
    }
    return false;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(V + E) |
| Space Complexity | O(V) |

---

## 💡 Best Practices & Gotchas

- **Pass parent node parameters dynamically during recursive calls.**
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
