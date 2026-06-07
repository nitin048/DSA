# 🕸️ Bellman Ford Algorithm Single Source Shortest Path DP - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Bellman Ford Algorithm Single Source Shortest Path DP?](#-what-is-bellman-ford-algorithm-single-source-shortest-path-dp)
2. [Why Bellman Ford Algorithm Single Source Shortest Path DP?](#-why-bellman-ford-algorithm-single-source-shortest-path-dp)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Bellman Ford Algorithm Single Source Shortest Path DP?

### **Concept Overview:**
Shortest Path with Negative Weights (Bellman-Ford).

### **Real-Life Analogy:**
Think of a graph like a **social network map**. People are points (Vertices), and friendships are the lines (Edges) connecting them. Some friendships are one-way (Directed), and some connections are closer than others (Weighted).

---

## 💡 Why Bellman Ford Algorithm Single Source Shortest Path DP?

### **Advantages:**
- Universal modeling tool for network routes, dependencies, and connections
- BFS finds shortest paths in unweighted setups

### **Disadvantages / Challenges:**
- Adjacency matrix consumes O(V^2) space; adjacency list lookups are slower

### **When to Use:**
- For flight routes planning, GPS mapping, task scheduling (topological), and network latency analysis

---

## 📖 Core Concepts

- **Bellman-Ford:** Relax all edges $V-1$ times.
- Detect negative cycles by running a final relaxation step.

---

## 💻 C++ Implementation Reference

```cpp
vector<int> bellmanFord(int V, vector<vector<int>>& edges, int src) {
    vector<int> dist(V, 1e9); dist[src] = 0;
    for (int i = 1; i <= V - 1; i++) {
        for (auto edge : edges) {
            int u = edge[0], v = edge[1], w = edge[2];
            if (dist[u] != 1e9 && dist[u] + w < dist[v]) dist[v] = dist[u] + w;
        }
    }
    return dist;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(V * E) |
| Space Complexity | O(V) |

---

## 💡 Best Practices & Gotchas

- **Bellman-Ford relaxes edges $V-1$ times because a simple path can have at most $V-1$ edges.**
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
