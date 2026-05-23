# 🌳 Trees - Quick Reference

**30% of interview questions!** 🎯

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
