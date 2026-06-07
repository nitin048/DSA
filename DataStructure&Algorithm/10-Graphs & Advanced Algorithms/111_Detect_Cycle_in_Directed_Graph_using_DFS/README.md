# 🕸️ Detect Cycle in Directed Graph using DFS - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Detect Cycle in Directed Graph using DFS?](#-what-is-detect-cycle-in-directed-graph-using-dfs)
2. [Why Detect Cycle in Directed Graph using DFS?](#-why-detect-cycle-in-directed-graph-using-dfs)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Detect Cycle in Directed Graph using DFS?

### **Concept Overview:**
Checking Cycles in Directed Graphs using DFS Tracker.

### **Real-Life Analogy:**
Think of a graph like a **social network map**. People are points (Vertices), and friendships are the lines (Edges) connecting them. Some friendships are one-way (Directed), and some connections are closer than others (Weighted).

---

## 💡 Why Detect Cycle in Directed Graph using DFS?

### **Advantages:**
- Universal modeling tool for network routes, dependencies, and connections
- BFS finds shortest paths in unweighted setups

### **Disadvantages / Challenges:**
- Adjacency matrix consumes O(V^2) space; adjacency list lookups are slower

### **When to Use:**
- For flight routes planning, GPS mapping, task scheduling (topological), and network latency analysis

---

## 📖 Core Concepts

- **Problem:** Cycle checks in directed graphs.
- **DFS Path Tracker:** Maintain a visited array and a recursion path tracker array.

---

## 💻 C++ Implementation Reference

```cpp
bool hasCycleDir(int u, vector<vector<int>>& adj, vector<bool>& vis, vector<bool>& pathVis) {
    vis[u] = pathVis[u] = true;
    for (int v : adj[u]) {
        if (!vis[v]) {
            if (hasCycleDir(v, adj, vis, pathVis)) return true;
        } else if (pathVis[v]) return true; // Cycle found
    }
    pathVis[u] = false; // backtrack
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

- **Reset path tracker values (`pathVis[u] = false`) after recursive path returns.**
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
