# 🕸️ Disjoint Set Union With Rank Size Path Compression - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Disjoint Set Union With Rank Size Path Compression?](#-what-is-disjoint-set-union-with-rank-size-path-compression)
2. [Why Disjoint Set Union With Rank Size Path Compression?](#-why-disjoint-set-union-with-rank-size-path-compression)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Disjoint Set Union With Rank Size Path Compression?

### **Concept Overview:**
Union-Find with Rank/Size & Path Compression.

### **Real-Life Analogy:**
Think of a graph like a **social network map**. People are points (Vertices), and friendships are the lines (Edges) connecting them. Some friendships are one-way (Directed), and some connections are closer than others (Weighted).

---

## 💡 Why Disjoint Set Union With Rank Size Path Compression?

### **Advantages:**
- Universal modeling tool for network routes, dependencies, and connections
- BFS finds shortest paths in unweighted setups

### **Disadvantages / Challenges:**
- Adjacency matrix consumes O(V^2) space; adjacency list lookups are slower

### **When to Use:**
- For flight routes planning, GPS mapping, task scheduling (topological), and network latency analysis

---

## 📖 Core Concepts

- **DSU:** Group disjoint sets. Operations: `find` (with path compression) and `union` (by rank/size).

---

## 💻 C++ Implementation Reference

```cpp
int findParent(int i, vector<int>& parent) {
    if (parent[i] == i) return i;
    return parent[i] = findParent(parent[i], parent);
}
void unionSets(int i, int j, vector<int>& parent, vector<int>& rank) {
    int r1 = findParent(i, parent), r2 = findParent(j, parent);
    if (r1 != r2) {
        if (rank[r1] < rank[r2]) parent[r1] = r2;
        else { parent[r2] = r1; if (rank[r1] == rank[r2]) rank[r1]++; }
    }
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Find / Union | O(&alpha;(N)) (Inverse Ackermann) |

---

## 💡 Best Practices & Gotchas

- **Path compression flattens the tree height to near-constant levels.**
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
