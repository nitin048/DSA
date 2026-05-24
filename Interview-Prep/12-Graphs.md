# 🕸️ Graphs - Quick Reference

**Network problems!** 🎯

---

## 📋 What is a Graph?

### **Definition:**

A **graph** is a **non-linear data structure** consisting of:

- **Vertices (V)** - Nodes or points
- **Edges (E)** - Connections between vertices

Graphs represent relationships and networks between entities.

### **Real-World Analogy:**

- **Social networks** 👥 - People (vertices), friendships (edges)
- **Maps** 🗺️ - Cities (vertices), roads (edges)
- **Internet** 🌐 - Computers (vertices), connections (edges)
- **Flight routes** ✈️ - Airports (vertices), flights (edges)
- **Dependencies** 📦 - Packages (vertices), dependencies (edges)

### **Graph Visualization:**

```
Undirected Graph:
    1 --- 2
    |     |
    |     |
    3 --- 4

Directed Graph (Digraph):
    1 → 2
    ↑   ↓
    3 ← 4

Weighted Graph:
    1 --5-- 2
    |       |
    3       7
    |       |
    3 --2-- 4
```

---

## 🎯 Graph Types

### **1. Directed vs Undirected:**

**Undirected:**

- Edges have no direction
- If A→B exists, then B→A exists
- Example: Facebook friends

**Directed:**

- Edges have direction
- A→B doesn't mean B→A
- Example: Twitter followers

### **2. Weighted vs Unweighted:**

**Weighted:**

- Edges have values (cost, distance, time)
- Example: Road networks with distances

**Unweighted:**

- All edges are equal
- Example: Social connections

### **3. Cyclic vs Acyclic:**

**Cyclic:**

- Contains at least one cycle
- Can return to starting vertex

**Acyclic:**

- No cycles
- DAG (Directed Acyclic Graph)

### **4. Connected vs Disconnected:**

**Connected:**

- Path exists between every pair of vertices

**Disconnected:**

- Some vertices are unreachable

---

## 📊 Graph Terminology

| Term              | Definition                                  |
| ----------------- | ------------------------------------------- |
| **Vertex/Node**   | A point in the graph                        |
| **Edge**          | Connection between two vertices             |
| **Adjacent**      | Two vertices connected by an edge           |
| **Degree**        | Number of edges connected to a vertex       |
| **In-degree**     | Number of incoming edges (directed)         |
| **Out-degree**    | Number of outgoing edges (directed)         |
| **Path**          | Sequence of vertices connected by edges     |
| **Cycle**         | Path that starts and ends at same vertex    |
| **Connected**     | Path exists between all vertex pairs        |
| **Component**     | Maximal connected subgraph                  |
| **Spanning Tree** | Subgraph connecting all vertices (no cycle) |

---

## 🎯 Why Use Graphs?

### **Advantages:**

✅ **Model relationships** - Natural for networks  
✅ **Flexible structure** - Any connection pattern  
✅ **Powerful algorithms** - Shortest path, connectivity  
✅ **Real-world problems** - Maps, social networks, dependencies

### **Disadvantages:**

❌ **Complex implementation** - More code than linear structures  
❌ **Space complexity** - Can be O(V²) for dense graphs  
❌ **Difficult to visualize** - Large graphs are hard to understand

### **When to Use:**

- **Network problems** - Social networks, computer networks
- **Path finding** - GPS, routing, navigation
- **Dependencies** - Task scheduling, package management
- **Connectivity** - Circuit design, network reliability
- **Optimization** - Minimum spanning tree, max flow

---

## 📋 Graph Representation

### **1. Adjacency List:**

```cpp
// Unweighted graph
vector<vector<int>> adj(n);  // n vertices
adj[u].push_back(v);         // Add edge u -> v

// Weighted graph
vector<vector<pair<int, int>>> adj(n);  // {vertex, weight}
adj[u].push_back({v, weight});

Example:
Graph:  0 → 1
        ↓   ↓
        2 → 3

adj[0] = {1, 2}
adj[1] = {3}
adj[2] = {3}
adj[3] = {}
```

**Pros:** Space O(V + E), efficient for sparse graphs  
**Cons:** Checking if edge exists is O(V)

### **2. Adjacency Matrix:**

```cpp
vector<vector<int>> matrix(n, vector<int>(n, 0));
matrix[u][v] = 1;  // Add edge (or weight)

Example:
    0  1  2  3
0 [ 0  1  1  0 ]
1 [ 0  0  0  1 ]
2 [ 0  0  0  1 ]
3 [ 0  0  0  0 ]
```

**Pros:** O(1) edge lookup, simple implementation  
**Cons:** Space O(V²), inefficient for sparse graphs

### **3. Edge List:**

```cpp
vector<pair<int, int>> edges;  // {u, v}
edges.push_back({u, v});

// Weighted
vector<tuple<int, int, int>> edges;  // {u, v, weight}
```

**Pros:** Simple, good for some algorithms (Kruskal's)  
**Cons:** Slow to find neighbors

---

## 📊 Complexity Comparison

| Operation         | Adjacency List | Adjacency Matrix |
| ----------------- | -------------- | ---------------- |
| Space             | O(V + E)       | O(V²)            |
| Add edge          | O(1)           | O(1)             |
| Remove edge       | O(V)           | O(1)             |
| Check edge exists | O(V)           | O(1)             |
| Find neighbors    | O(degree)      | O(V)             |

**Use Adjacency List when:** Sparse graph (E << V²)  
**Use Adjacency Matrix when:** Dense graph (E ≈ V²) or need fast edge lookup

---

## 🎯 Graph Traversals

### **1. BFS (Breadth-First Search):**

```cpp
void bfs(vector<vector<int>>& adj, int start) {
    vector<bool> visited(adj.size(), false);
    queue<int> q;

    q.push(start);
    visited[start] = true;

    while (!q.empty()) {
        int node = q.front();
        q.pop();
        cout << node << " ";

        for (int neighbor : adj[node]) {
            if (!visited[neighbor]) {
                visited[neighbor] = true;
                q.push(neighbor);
            }
        }
    }
}
// Time: O(V + E), Space: O(V)
```

### **2. DFS (Depth-First Search):**

```cpp
void dfs(vector<vector<int>>& adj, int node, vector<bool>& visited) {
    visited[node] = true;
    cout << node << " ";

    for (int neighbor : adj[node]) {
        if (!visited[neighbor]) {
            dfs(adj, neighbor, visited);
        }
    }
}
// Time: O(V + E), Space: O(V)
```

---

## 💡 Common Problems

### **1. Number of Islands:**

```cpp
int numIslands(vector<vector<char>>& grid) {
    int count = 0;

    function<void(int, int)> dfs = [&](int i, int j) {
        if (i < 0 || i >= grid.size() || j < 0 || j >= grid[0].size() ||
            grid[i][j] == '0') return;
        grid[i][j] = '0';
        dfs(i+1, j); dfs(i-1, j); dfs(i, j+1); dfs(i, j-1);
    };

    for (int i = 0; i < grid.size(); i++) {
        for (int j = 0; j < grid[0].size(); j++) {
            if (grid[i][j] == '1') {
                count++;
                dfs(i, j);
            }
        }
    }
    return count;
}
```

### **2. Clone Graph:**

```cpp
Node* cloneGraph(Node* node) {
    if (!node) return nullptr;
    unordered_map<Node*, Node*> map;

    function<Node*(Node*)> dfs = [&](Node* n) {
        if (map.count(n)) return map[n];
        Node* clone = new Node(n->val);
        map[n] = clone;
        for (Node* neighbor : n->neighbors) {
            clone->neighbors.push_back(dfs(neighbor));
        }
        return clone;
    };

    return dfs(node);
}
```

### **3. Course Schedule (Cycle Detection):**

```cpp
bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
    vector<vector<int>> adj(numCourses);
    for (auto& p : prerequisites) {
        adj[p[1]].push_back(p[0]);
    }

    vector<int> state(numCourses, 0);  // 0: unvisited, 1: visiting, 2: visited

    function<bool(int)> hasCycle = [&](int node) {
        if (state[node] == 1) return true;   // Cycle found
        if (state[node] == 2) return false;  // Already visited

        state[node] = 1;
        for (int neighbor : adj[node]) {
            if (hasCycle(neighbor)) return true;
        }
        state[node] = 2;
        return false;
    };

    for (int i = 0; i < numCourses; i++) {
        if (hasCycle(i)) return false;
    }
    return true;
}
```

### **4. Shortest Path (Dijkstra):**

```cpp
vector<int> dijkstra(vector<vector<pair<int, int>>>& adj, int start) {
    int n = adj.size();
    vector<int> dist(n, INT_MAX);
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;

    dist[start] = 0;
    pq.push({0, start});

    while (!pq.empty()) {
        auto [d, u] = pq.top();
        pq.pop();

        if (d > dist[u]) continue;

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

## 🔥 Common Algorithms

1. **BFS** - Shortest path (unweighted)
2. **DFS** - Cycle detection, topological sort
3. **Dijkstra** - Shortest path (weighted)
4. **Union-Find** - Connected components
5. **Topological Sort** - Task scheduling

---

**Next:** [Hash Tables →](13-Hash-Tables.md)
