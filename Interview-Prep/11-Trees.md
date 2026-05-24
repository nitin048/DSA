# 🌳 Trees - Quick Reference

**30% of interview questions!** 🎯

---

## 📋 What is a Tree?

### **Definition:**

A **tree** is a **hierarchical data structure** consisting of nodes connected by edges. It's a non-linear structure that represents a parent-child relationship.

**Key Properties:**

- One **root** node (top)
- Each node has **zero or more children**
- No **cycles** (acyclic graph)
- Exactly **one path** between any two nodes
- N nodes have **N-1 edges**

### **Real-World Analogy:**

- **Family tree** 👨‍👩‍👧‍👦 - Ancestors and descendants
- **File system** 📁 - Folders and files
- **Organization chart** 🏢 - Company hierarchy
- **Decision tree** 🤔 - If-else logic
- **DOM tree** 🌐 - HTML structure

### **Tree Visualization:**

```
                    1 (Root)
                   / \
                  /   \
                 2     3
                / \     \
               4   5     6
              /
             7

Terminology:
- Root: 1
- Parent of 4: 2
- Children of 2: 4, 5
- Siblings: 4 and 5
- Leaf nodes: 4, 5, 6, 7
- Internal nodes: 1, 2, 3
- Height: 3 (longest path from root to leaf)
- Depth of 4: 2 (distance from root)
```

### **Tree Terminology:**

| Term           | Definition                              | Example       |
| -------------- | --------------------------------------- | ------------- |
| **Root**       | Top node with no parent                 | 1             |
| **Parent**     | Node with children                      | 2 is parent   |
| **Child**      | Node with a parent                      | 4 is child    |
| **Leaf**       | Node with no children                   | 7, 5, 6       |
| **Internal**   | Node with at least one child            | 1, 2, 3       |
| **Sibling**    | Nodes with same parent                  | 4 and 5       |
| **Ancestor**   | Parent, grandparent, etc.               | 1, 2 for 7    |
| **Descendant** | Child, grandchild, etc.                 | 4, 7 for 2    |
| **Height**     | Longest path from node to leaf          | Height of 1=3 |
| **Depth**      | Distance from root to node              | Depth of 4=2  |
| **Level**      | Depth + 1                               | Level of 4=3  |
| **Subtree**    | Tree formed by node and its descendants | Subtree at 2  |
| **Degree**     | Number of children                      | Degree of 2=2 |

---

## 🎯 Why Use Trees?

### **Advantages:**

✅ **Hierarchical structure** - Natural for nested data  
✅ **Fast search** - O(log n) in balanced BST  
✅ **Fast insert/delete** - O(log n) in balanced BST  
✅ **Ordered data** - BST maintains sorted order  
✅ **Flexible** - Many variations for different needs

### **Disadvantages:**

❌ **Complex implementation** - More code than arrays  
❌ **No random access** - Must traverse  
❌ **Extra memory** - Pointers take space  
❌ **Can become unbalanced** - Degrades to O(n)

### **When to Use:**

- **Hierarchical data** - File systems, org charts
- **Fast search** - Databases, dictionaries
- **Sorted data** - Maintain order with fast operations
- **Expression parsing** - Compilers, calculators
- **Decision making** - AI, game trees

---

## 📊 Binary Tree Types

### **1. Full Binary Tree:**

```
Every node has 0 or 2 children

       1
      / \
     2   3
    / \
   4   5
```

### **2. Complete Binary Tree:**

```
All levels filled except last (filled left to right)

       1
      / \
     2   3
    / \  /
   4  5 6
```

### **3. Perfect Binary Tree:**

```
All internal nodes have 2 children, all leaves at same level

       1
      / \
     2   3
    / \ / \
   4  5 6  7
```

### **4. Balanced Binary Tree:**

```
Height difference between left and right ≤ 1

       1
      / \
     2   3
    /
   4
```

### **5. Binary Search Tree (BST):**

```
Left < Root < Right

       5
      / \
     3   7
    / \ / \
   2  4 6  8
```

### **6. Degenerate Tree (Skewed):**

```
Each node has only one child (worst case)

1
 \
  2
   \
    3
     \
      4
```

---

## 📊 Complexity Analysis

### **Binary Search Tree (Balanced):**

| Operation | Average  | Worst (Unbalanced) |
| --------- | -------- | ------------------ |
| Search    | O(log n) | O(n)               |
| Insert    | O(log n) | O(n)               |
| Delete    | O(log n) | O(n)               |
| Space     | O(n)     | O(n)               |

### **Tree Traversal:**

| Traversal   | Time | Space (Recursion) | Use Case                |
| ----------- | ---- | ----------------- | ----------------------- |
| Inorder     | O(n) | O(h)              | BST → Sorted order      |
| Preorder    | O(n) | O(h)              | Copy tree, prefix expr  |
| Postorder   | O(n) | O(h)              | Delete tree, postfix    |
| Level Order | O(n) | O(w)              | BFS, level-wise process |

h = height, w = max width

---

## 📋 Tree Basics

### **Node Structure:**

```cpp
struct TreeNode {
    int val;
    TreeNode *left, *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};
```

### **Types:**

- **Binary Tree** - Max 2 children
- **Binary Search Tree** - Left < Root < Right
- **Balanced Tree** - Height difference ≤ 1
- **Complete Tree** - All levels filled except last
- **Full Tree** - 0 or 2 children

---

## 🎯 Tree Traversals

### **1. Inorder (Left-Root-Right):**

```cpp
void inorder(TreeNode* root) {
    if (!root) return;
    inorder(root->left);
    cout << root->val << " ";
    inorder(root->right);
}
// BST: Gives sorted order
```

### **2. Preorder (Root-Left-Right):**

```cpp
void preorder(TreeNode* root) {
    if (!root) return;
    cout << root->val << " ";
    preorder(root->left);
    preorder(root->right);
}
// Use: Copy tree, prefix expression
```

### **3. Postorder (Left-Right-Root):**

```cpp
void postorder(TreeNode* root) {
    if (!root) return;
    postorder(root->left);
    postorder(root->right);
    cout << root->val << " ";
}
// Use: Delete tree, postfix expression
```

### **4. Level Order (BFS):**

```cpp
vector<vector<int>> levelOrder(TreeNode* root) {
    vector<vector<int>> result;
    if (!root) return result;

    queue<TreeNode*> q;
    q.push(root);

    while (!q.empty()) {
        int size = q.size();
        vector<int> level;

        for (int i = 0; i < size; i++) {
            TreeNode* node = q.front();
            q.pop();
            level.push_back(node->val);

            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
        result.push_back(level);
    }
    return result;
}
```

---

## 💡 Common Problems

### **1. Maximum Depth:**

```cpp
int maxDepth(TreeNode* root) {
    if (!root) return 0;
    return 1 + max(maxDepth(root->left), maxDepth(root->right));
}
// Time: O(n), Space: O(h)
```

### **2. Same Tree:**

```cpp
bool isSameTree(TreeNode* p, TreeNode* q) {
    if (!p && !q) return true;
    if (!p || !q) return false;
    return p->val == q->val &&
           isSameTree(p->left, q->left) &&
           isSameTree(p->right, q->right);
}
```

### **3. Invert Tree:**

```cpp
TreeNode* invertTree(TreeNode* root) {
    if (!root) return nullptr;
    swap(root->left, root->right);
    invertTree(root->left);
    invertTree(root->right);
    return root;
}
```

### **4. Validate BST:**

```cpp
bool isValidBST(TreeNode* root, long min = LONG_MIN, long max = LONG_MAX) {
    if (!root) return true;
    if (root->val <= min || root->val >= max) return false;
    return isValidBST(root->left, min, root->val) &&
           isValidBST(root->right, root->val, max);
}
```

### **5. Lowest Common Ancestor:**

```cpp
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root || root == p || root == q) return root;

    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    if (left && right) return root;
    return left ? left : right;
}
```

### **6. Diameter of Tree:**

```cpp
int diameterOfBinaryTree(TreeNode* root) {
    int diameter = 0;

    function<int(TreeNode*)> height = [&](TreeNode* node) {
        if (!node) return 0;
        int left = height(node->left);
        int right = height(node->right);
        diameter = max(diameter, left + right);
        return 1 + max(left, right);
    };

    height(root);
    return diameter;
}
```

### **7. Path Sum:**

```cpp
bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;
    if (!root->left && !root->right)
        return root->val == targetSum;
    return hasPathSum(root->left, targetSum - root->val) ||
           hasPathSum(root->right, targetSum - root->val);
}
```

### **8. Serialize/Deserialize:**

```cpp
class Codec {
public:
    string serialize(TreeNode* root) {
        if (!root) return "#";
        return to_string(root->val) + "," +
               serialize(root->left) + "," +
               serialize(root->right);
    }

    TreeNode* deserialize(string data) {
        queue<string> q;
        stringstream ss(data);
        string token;
        while (getline(ss, token, ','))
            q.push(token);
        return helper(q);
    }

    TreeNode* helper(queue<string>& q) {
        string val = q.front();
        q.pop();
        if (val == "#") return nullptr;
        TreeNode* root = new TreeNode(stoi(val));
        root->left = helper(q);
        root->right = helper(q);
        return root;
    }
};
```

---

## 🔥 Common Patterns

### **1. DFS (Recursion):**

```cpp
void dfs(TreeNode* root) {
    if (!root) return;
    // Process root
    dfs(root->left);
    dfs(root->right);
}
```

### **2. BFS (Queue):**

```cpp
void bfs(TreeNode* root) {
    queue<TreeNode*> q;
    q.push(root);
    while (!q.empty()) {
        TreeNode* node = q.front();
        q.pop();
        // Process node
        if (node->left) q.push(node->left);
        if (node->right) q.push(node->right);
    }
}
```

### **3. Path Problems:**

```cpp
void findPaths(TreeNode* root, vector<int>& path) {
    if (!root) return;
    path.push_back(root->val);
    if (!root->left && !root->right) {
        // Process path
    }
    findPaths(root->left, path);
    findPaths(root->right, path);
    path.pop_back();  // Backtrack
}
```

---

## 🎯 Interview Tips

### **Time Complexities:**

- Traversal: O(n)
- Search (BST): O(log n) average, O(n) worst
- Insert (BST): O(log n) average, O(n) worst
- Delete (BST): O(log n) average, O(n) worst

### **Space Complexities:**

- Recursion: O(h) where h is height
- BFS: O(w) where w is max width

### **Common Techniques:**

1. **Recursion** - Most tree problems
2. **BFS** - Level order, shortest path
3. **DFS** - Path problems, validation
4. **Divide & Conquer** - Diameter, balanced

---

**Next:** [Graphs →](12-Graphs.md)
