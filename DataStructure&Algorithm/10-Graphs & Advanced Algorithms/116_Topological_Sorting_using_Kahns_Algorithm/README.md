# 🕸️ Topological Sorting using Kahns Algorithm - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Topological Sorting using Kahns Algorithm?](#-what-is-topological-sorting-using-kahns-algorithm)
2. [Why Topological Sorting using Kahns Algorithm?](#-why-topological-sorting-using-kahns-algorithm)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Topological Sorting using Kahns Algorithm?

### **Concept Overview:**
Topological Sorting using BFS In-degree Counts (Kahn's).

### **Real-Life Analogy:**
Think of a graph like a **social network map**. People are points (Vertices), and friendships are the lines (Edges) connecting them. Some friendships are one-way (Directed), and some connections are closer than others (Weighted).

---

## 💡 Why Topological Sorting using Kahns Algorithm?

### **Advantages:**
- Universal modeling tool for network routes, dependencies, and connections
- BFS finds shortest paths in unweighted setups

### **Disadvantages / Challenges:**
- Adjacency matrix consumes O(V^2) space; adjacency list lookups are slower

### **When to Use:**
- For flight routes planning, GPS mapping, task scheduling (topological), and network latency analysis

---

## 📖 Core Concepts

- **Kahn's:** Compute in-degrees. Push in-degree == 0 nodes to queue; decrement neighbor values on pop.

---

## 💻 C++ Implementation Reference

```cpp
vector<int> topoBFS(int V, vector<vector<int>>& adj) {
    vector<int> inDegree(V, 0), order;
    for (int u = 0; u < V; u++) for (int v : adj[u]) inDegree[v]++;
    queue<int> q;
    for (int i = 0; i < V; i++) if (inDegree[i] == 0) q.push(i);
    while (!q.empty()) {
        int u = q.front(); q.pop(); order.push_back(u);
        for (int v : adj[u]) if (--inDegree[v] == 0) q.push(v);
    }
    return order;
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

- **If output size is less than V, the graph has a cycle.**
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
