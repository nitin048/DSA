# 🕸️ Graphs - Quick Reference

**Network problems!** 🎯

---

## 📋 Graph Representation

### **Adjacency List:**

```cpp
vector<vector<int>> adj(n);  // n vertices
adj[u].push_back(v);         // Add edge u -> v
```

### **Adjacency Matrix:**

```cpp
vector<vector<int>> matrix(n, vector<int>(n, 0));
matrix[u][v] = 1;  // Add edge
```

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
