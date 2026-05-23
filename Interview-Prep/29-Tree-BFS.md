# 🌳 Tree BFS (Breadth-First Search) - Quick Reference

**Level by level traversal!** 🎯

---

## 📋 What is Tree BFS?

### **Definition:**

Tree BFS (Breadth-First Search) is a technique for traversing a tree **level by level**, visiting all nodes at the current level before moving to the next level.

### **Key Characteristics:**

- Uses **queue** data structure
- Visits nodes level by level (left to right)
- Also called **Level Order Traversal**
- Finds shortest path in unweighted tree

### **When to Use:**

- Need **level-by-level** traversal
- Find **level** of a node
- **Shortest path** in tree
- Keywords: "level", "breadth", "layer"

---

## 🎯 Core Concept

### **BFS Process:**

```
Tree:
        1
       / \
      2   3
     / \   \
    4   5   6

BFS Order: 1, 2, 3, 4, 5, 6

Level 0: [1]
Level 1: [2, 3]
Level 2: [4, 5, 6]
```

### **Queue Operations:**

```
Queue: [1]
Process 1, add children: [2, 3]
Process 2, add children: [3, 4, 5]
Process 3, add children: [4, 5, 6]
Process 4: [5, 6]
Process 5: [6]
Process 6: []
```

---

## 💡 Basic BFS

### **1. Level Order Traversal:**

**Problem:** Return level order traversal

**Theory:**

- Use queue to track nodes
- Process all nodes at current level
- Add children to queue for next level

```cpp
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel;

        // Process all nodes at current level
        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            currentLevel.push_back(node->val);

            // Add children for next level
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.push_back(currentLevel);
    }

    return result;
}
// Time: O(n), Space: O(n)
```

**Visualization:**

```
Tree:     1
         / \
        2   3
       / \
      4   5

Queue operations:
[1]           → Process 1, add 2,3
[2,3]         → Process 2, add 4,5
[3,4,5]       → Process 3
[4,5]         → Process 4
[5]           → Process 5
[]

Result: [[1], [2,3], [4,5]]
```

---

### **2. Binary Tree Right Side View:**

**Problem:** Return values visible from right side

**Theory:**

- Last node at each level is visible
- Track last node while processing level

```cpp
vector<int> rightSideView(TreeNode* root) {
    vector<int> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            // Last node at this level
            if (i == levelSize - 1) {
                result.push_back(node->val);
            }

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }

    return result;
}
// Time: O(n), Space: O(n)
```

**Example:**

```
Tree:     1
         / \
        2   3
         \   \
          5   4

Right side view: [1, 3, 4]
Level 0: 1 (rightmost)
Level 1: 3 (rightmost)
Level 2: 4 (rightmost)
```

---

### **3. Average of Levels:**

**Problem:** Find average value at each level

**Theory:**

- Sum all values at each level
- Divide by number of nodes at that level

```cpp
vector<double> averageOfLevels(TreeNode* root) {
    vector<double> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        double sum = 0;

        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            sum += node->val;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.push_back(sum / levelSize);
    }

    return result;
}
// Time: O(n), Space: O(n)
```

---

### **4. Zigzag Level Order:**

**Problem:** Traverse in zigzag pattern (left-right, right-left)

**Theory:**

- Use flag to track direction
- Reverse level if needed
- Or use deque for efficient insertion

```cpp
vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);
    bool leftToRight = true;

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel(levelSize);

        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            // Find position based on direction
            int index = leftToRight ? i : (levelSize - 1 - i);
            currentLevel[index] = node->val;

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.push_back(currentLevel);
        leftToRight = !leftToRight;
    }

    return result;
}
// Time: O(n), Space: O(n)
```

**Example:**

```
Tree:     1
         / \
        2   3
       / \   \
      4   5   6

Zigzag: [[1], [3,2], [4,5,6]]
Level 0: 1 (left to right)
Level 1: 3,2 (right to left)
Level 2: 4,5,6 (left to right)
```

---

### **5. Minimum Depth:**

**Problem:** Find minimum depth (shortest path to leaf)

**Theory:**

- BFS finds shortest path
- First leaf encountered is at minimum depth

```cpp
int minDepth(TreeNode* root) {
    if (!root) return 0;

    queue<TreeNode*> q;
    q.push(root);
    int depth = 1;

    while (!q.empty()) {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            // Check if leaf
            if (!node->left && !node->right) {
                return depth;
            }

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        depth++;
    }

    return depth;
}
// Time: O(n), Space: O(n)
```

---

### **6. Maximum Depth:**

**Problem:** Find maximum depth

**Theory:**

- Count number of levels
- BFS processes all levels

```cpp
int maxDepth(TreeNode* root) {
    if (!root) return 0;

    queue<TreeNode*> q;
    q.push(root);
    int depth = 0;

    while (!q.empty()) {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        depth++;
    }

    return depth;
}
// Time: O(n), Space: O(n)
```

---

### **7. Level Order Bottom:**

**Problem:** Return level order from bottom to top

**Theory:**

- Do normal BFS
- Reverse result at end
- Or insert at beginning

```cpp
vector<vector<int>> levelOrderBottom(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();
        vector<int> currentLevel;

        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            currentLevel.push_back(node->val);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }

        result.insert(result.begin(), currentLevel);  // Insert at front
    }

    return result;
}
// Time: O(n), Space: O(n)
```

---

### **8. Connect Level Order Siblings:**

**Problem:** Connect all nodes at same level

**Theory:**

- Process level by level
- Connect current node to next in queue
- Last node at level points to null

```cpp
Node* connect(Node* root) {
    if (!root) return nullptr;

    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();

        for (int i = 0; i < levelSize; i++) {
            Node* node = q.front();
            q.pop();

            // Connect to next node (if not last)
            if (i < levelSize - 1) {
                node->next = q.front();
            }

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }

    return root;
}
// Time: O(n), Space: O(n)
```

---

## 🔥 BFS Template

### **Basic BFS:**

```cpp
void bfs(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();

        // Process node
        process(node);

        // Add children
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}
```

### **Level-by-Level BFS:**

```cpp
void bfsLevels(TreeNode* root) {
    if (!root) return;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();

        // Process entire level
        for (int i = 0; i < levelSize; i++) {
            TreeNode* node = q.front();
            q.pop();

            // Process node
            process(node);

            // Add children
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
}
```

---

## 🎯 BFS vs DFS

| BFS                      | DFS                      |
| ------------------------ | ------------------------ |
| Uses Queue               | Uses Stack/Recursion     |
| Level by level           | Branch by branch         |
| Finds shortest path      | Explores deep first      |
| More memory (wide trees) | Less memory (deep trees) |
| Good for level problems  | Good for path problems   |

---

## 🎯 How to Identify Tree BFS

### **Use BFS When:**

✅ Need **level-by-level** traversal
✅ Find **shortest path**
✅ Process nodes **by level**
✅ Keywords: "level", "breadth", "layer", "shortest"
✅ Need **minimum depth**

### **Don't Use When:**

❌ Need to explore **all paths**
❌ Need **DFS** (path from root to leaf)
❌ Memory is very limited

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **O(n)** - Visit each node once

### **Space Complexity:**

- **O(w)** where w is maximum width
- Worst case: O(n) for complete binary tree
- Last level can have n/2 nodes

---

## 🔥 Must Remember

### **Key Steps:**

1. **Initialize** queue with root
2. **While** queue not empty:
   - Get **level size**
   - Process **all nodes** at current level
   - Add **children** to queue
3. **Track** level information if needed

### **Common Mistakes:**

- ❌ Not tracking level size (infinite loop)
- ❌ Processing children immediately (wrong level)
- ❌ Not checking for null before adding to queue
- ❌ Forgetting to pop from queue

### **Tips:**

- ✅ Always get level size before inner loop
- ✅ Use level size to process exact number of nodes
- ✅ Check null before pushing to queue
- ✅ Use deque for bidirectional operations

---

## 🎓 Common Patterns

### **Pattern 1: Level Processing**

- Track level size
- Process all nodes at level
- Aggregate level results

### **Pattern 2: First/Last at Level**

- Track position in level
- Special handling for first/last

### **Pattern 3: Shortest Path**

- Return depth when condition met
- BFS guarantees shortest

### **Pattern 4: Connect Nodes**

- Link nodes at same level
- Use next pointer

---

**Next:** [Tree DFS →](30-Tree-DFS.md)
