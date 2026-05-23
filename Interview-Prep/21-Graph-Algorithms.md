# 🕸️ Graph Algorithms - Quick Reference

**Advanced graph techniques!** 🎯

---

## 📋 Graph Algorithms Overview

### **Common Algorithms:**

1. **BFS** - Shortest path (unweighted)
2. **DFS** - Cycle detection, topological sort
3. **Dijkstra** - Shortest path (weighted, non-negative)
4. **Bellman-Ford** - Shortest path (negative weights)
5. **Floyd-Warshall** - All pairs shortest path
6. **Kruskal/Prim** - Minimum spanning tree
7. **Union-Find** - Connected components

---

## 💡 Dijkstra's Algorithm

### **Theory:**

- Finds shortest path from source to all vertices
- Uses priority queue (min heap)
- Greedy approach: always pick closest unvisited vertex
- **Doesn't work with negative weights**

### **Time:** O((V + E) log V)

```cpp
vector<int> dijkstra(vector<vector<pair<int,int>>>& adj, int start) {
    int n = adj.size();
    vector<int> dist(n, INT_MAX);
    priority_queue<pair<int,int>, vector<pair<int,int>>, greater<>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;  // Already processed

        for (auto [v, w] : adj[u]) {
            if (dist[u] + w < dist[v]) {
                dist[v] = dist[u] + w;
                pq.push({dist[v], v});
            }
        }
    }

    return dist;
}
```

---

## 💡 Topological Sort

### **Theory:**

- Linear ordering of vertices in DAG
- Vertex u comes before v if edge u→v exists
- Uses DFS with finish time ordering
- **Only works on DAGs** (no cycles)

### **Applications:**

- Task scheduling
- Course prerequisites
- Build systems

```cpp
vector<int> topologicalSort(vector<vector<int>>& adj) {
    int n = adj.size();
    vector<int> result;
    vector<bool> visited(n, false);

    function<void(int)> dfs = [&](int node) {
        visited[node] = true;
        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                dfs(neighbor);
            }
        }
        result.push_back(node);  // Add after visiting all neighbors
    };

    for (int i = 0; i < n; i++) {
        if (!visited[i]) {
            dfs(i);
        }
    }

    reverse(result.begin(), result.end());
    return result;
}
```

---

## 💡 Union-Find (Disjoint Set)

### **Theory:**

- Tracks connected components
- Two operations: **Find** and **Union**
- **Path compression** - Flatten tree during find
- **Union by rank** - Attach smaller tree to larger

### **Applications:**

- Kruskal's MST
- Cycle detection
- Network connectivity

```cpp
class UnionFind {
    vector<int> parent, rank;

public:
    UnionFind(int n) : parent(n), rank(n, 0) {
        iota(parent.begin(), parent.end(), 0);
    }

    int find(int x) {
        if (parent[x] != x) {
            parent[x] = find(parent[x]);  // Path compression
        }
        return parent[x];
    }

    bool unite(int x, int y) {
        int px = find(x), py = find(y);
        if (px == py) return false;  // Already connected

        // Union by rank
        if (rank[px] < rank[py]) swap(px, py);
        parent[py] = px;
        if (rank[px] == rank[py]) rank[px]++;

        return true;
    }

    bool connected(int x, int y) {
        return find(x) == find(y);
    }
};
```

---

## 💡 Minimum Spanning Tree

### **Kruskal's Algorithm:**

**Theory:**

- Sort edges by weight
- Add edge if doesn't create cycle
- Use Union-Find for cycle detection

```cpp
int kruskal(int n, vector<vector<int>>& edges) {
    // edges[i] = {weight, u, v}
    sort(edges.begin(), edges.end());

    UnionFind uf(n);
    int totalCost = 0;
    int edgesUsed = 0;

    for (auto& edge : edges) {
        int w = edge[0], u = edge[1], v = edge[2];

        if (uf.unite(u, v)) {
            totalCost += w;
            edgesUsed++;
            if (edgesUsed == n - 1) break;  // MST complete
        }
    }

    return totalCost;
}
```

---

## 🔥 Must Remember

### **Algorithm Selection:**

| Need                                   | Use               |
| -------------------------------------- | ----------------- |
| Shortest path (unweighted)             | BFS               |
| Shortest path (weighted, non-negative) | Dijkstra          |
| Shortest path (negative weights)       | Bellman-Ford      |
| All pairs shortest path                | Floyd-Warshall    |
| Minimum spanning tree                  | Kruskal/Prim      |
| Cycle detection                        | DFS or Union-Find |
| Topological sort                       | DFS               |
| Connected components                   | Union-Find or DFS |

---

**Next:** [Bit Manipulation →](22-Bit-Manipulation.md)
