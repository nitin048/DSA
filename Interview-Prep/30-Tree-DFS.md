# 🌲 Tree DFS (Depth-First Search) - Quick Reference

**Explore deep before wide!** 🎯

---

## 📋 What is Tree DFS?

### **Definition:**

Tree DFS (Depth-First Search) is a technique for traversing a tree by exploring as **deep as possible** along each branch before backtracking.

### **Key Characteristics:**

- Uses **recursion** or **stack**
- Explores one branch completely before others
- Three types: **Preorder**, **Inorder**, **Postorder**
- Natural for tree problems

### **When to Use:**

- Need to explore **all paths**
- Find path from **root to leaf**
- **Tree structure** problems
- Keywords: "path", "depth", "ancestor"

---

## 🎯 DFS Traversal Types

### **Three Types:**

```
Tree:     1
         / \
        2   3
       / \
      4   5

Preorder (Root-Left-Right):  1, 2, 4, 5, 3
Inorder (Left-Root-Right):   4, 2, 5, 1, 3
Postorder (Left-Right-Root): 4, 5, 2, 3, 1
```

### **When to Use Each:**

- **Preorder:** Copy tree, prefix expression
- **Inorder:** BST sorted order, infix expression
- **Postorder:** Delete tree, postfix expression

---

## 💡 Basic DFS Traversals

### **1. Preorder Traversal:**

**Order:** Root → Left → Right

```cpp
// Recursive
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;

    function<void(TreeNode*)> dfs = [&](TreeNode* node) {
        if (!node) return;

        result.push_back(node->val);  // Root
        dfs(node->left);               // Left
        dfs(node->right);              // Right
    };

    dfs(root);
    return result;
}

// Iterative
vector<int> preorderTraversal(TreeNode* root) {
    vector<int> result;
    if (!root) return result;

    stack<TreeNode*> st;
    st.push(root);

    while (!st.empty()) {
        TreeNode* node = st.top();
        st.pop();

        result.push_back(node->val);

        // Push right first (so left is processed first)
        if (node->right) st.push(node->right);
        if (node->left) st.push(node->left);
    }

    return result;
}
// Time: O(n), Space: O(h) where h is height
```

---

### **2. Inorder Traversal:**

**Order:** Left → Root → Right

```cpp
// Recursive
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;

    function<void(TreeNode*)> dfs = [&](TreeNode* node) {
        if (!node) return;

        dfs(node->left);               // Left
        result.push_back(node->val);   // Root
        dfs(node->right);              // Right
    };

    dfs(root);
    return result;
}

// Iterative
vector<int> inorderTraversal(TreeNode* root) {
    vector<int> result;
    stack<TreeNode*> st;
    TreeNode* curr = root;

    while (curr || !st.empty()) {
        // Go to leftmost node
        while (curr) {
            st.push(curr);
            curr = curr->left;
        }

        // Process node
        curr = st.top();
        st.pop();
        result.push_back(curr->val);

        // Go to right subtree
        curr = curr->right;
    }

    return result;
}
// Time: O(n), Space: O(h)
```

---

### **3. Postorder Traversal:**

**Order:** Left → Right → Root

```cpp
// Recursive
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;

    function<void(TreeNode*)> dfs = [&](TreeNode* node) {
        if (!node) return;

        dfs(node->left);               // Left
        dfs(node->right);              // Right
        result.push_back(node->val);   // Root
    };

    dfs(root);
    return result;
}

// Iterative (using two stacks)
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> result;
    if (!root) return result;

    stack<TreeNode*> st1, st2;
    st1.push(root);

    while (!st1.empty()) {
        TreeNode* node = st1.top();
        st1.pop();
        st2.push(node);

        if (node->left) st1.push(node->left);
        if (node->right) st1.push(node->right);
    }

    while (!st2.empty()) {
        result.push_back(st2.top()->val);
        st2.pop();
    }

    return result;
}
// Time: O(n), Space: O(h)
```

---

## 💡 Path Problems

### **4. Binary Tree Paths:**

**Problem:** Find all root-to-leaf paths

**Theory:**

- DFS to explore all paths
- Track current path
- Add to result when leaf reached

```cpp
vector<string> binaryTreePaths(TreeNode* root) {
    vector<string> result;

    function<void(TreeNode*, string)> dfs = [&](TreeNode* node, string path) {
        if (!node) return;

        path += to_string(node->val);

        // Leaf node
        if (!node->left && !node->right) {
            result.push_back(path);
            return;
        }

        path += "->";
        dfs(node->left, path);
        dfs(node->right, path);
    };

    dfs(root, "");
    return result;
}
// Time: O(n), Space: O(h)
```

---

### **5. Path Sum:**

**Problem:** Check if path with given sum exists

**Theory:**

- DFS with running sum
- Check at leaf nodes
- Subtract current value from target

```cpp
bool hasPathSum(TreeNode* root, int targetSum) {
    if (!root) return false;

    // Leaf node
    if (!root->left && !root->right) {
        return root->val == targetSum;
    }

    // Recursively check subtrees
    int remaining = targetSum - root->val;
    return hasPathSum(root->left, remaining) ||
           hasPathSum(root->right, remaining);
}
// Time: O(n), Space: O(h)
```

---

### **6. Path Sum II:**

**Problem:** Find all paths with given sum

**Theory:**

- DFS with current path
- Backtrack after exploring
- Add path when sum matches at leaf

```cpp
vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
    vector<vector<int>> result;
    vector<int> path;

    function<void(TreeNode*, int)> dfs = [&](TreeNode* node, int sum) {
        if (!node) return;

        path.push_back(node->val);

        // Leaf node with matching sum
        if (!node->left && !node->right && sum == node->val) {
            result.push_back(path);
        }

        // Explore subtrees
        dfs(node->left, sum - node->val);
        dfs(node->right, sum - node->val);

        path.pop_back();  // Backtrack
    };

    dfs(root, targetSum);
    return result;
}
// Time: O(n), Space: O(h)
```

---

### **7. Maximum Path Sum:**

**Problem:** Find maximum path sum (any node to any node)

**Theory:**

- For each node, calculate max path through it
- Path can go: left → node → right
- Update global maximum

```cpp
int maxPathSum(TreeNode* root) {
    int maxSum = INT_MIN;

    function<int(TreeNode*)> dfs = [&](TreeNode* node) -> int {
        if (!node) return 0;

        // Get max sum from left and right (ignore negative)
        int left = max(0, dfs(node->left));
        int right = max(0, dfs(node->right));

        // Max path through current node
        int pathSum = left + node->val + right;
        maxSum = max(maxSum, pathSum);

        // Return max path going up (can only choose one side)
        return node->val + max(left, right);
    };

    dfs(root);
    return maxSum;
}
// Time: O(n), Space: O(h)
```

---

## 💡 Tree Properties

### **8. Diameter of Binary Tree:**

**Problem:** Find longest path between any two nodes

**Theory:**

- Diameter through node = left height + right height
- Track maximum diameter
- Return height for parent

```cpp
int diameterOfBinaryTree(TreeNode* root) {
    int diameter = 0;

    function<int(TreeNode*)> height = [&](TreeNode* node) -> int {
        if (!node) return 0;

        int left = height(node->left);
        int right = height(node->right);

        // Update diameter
        diameter = max(diameter, left + right);

        // Return height
        return 1 + max(left, right);
    };

    height(root);
    return diameter;
}
// Time: O(n), Space: O(h)
```

---

### **9. Lowest Common Ancestor:**

**Problem:** Find LCA of two nodes

**Theory:**

- If both nodes in different subtrees, current is LCA
- If both in same subtree, recurse into that subtree
- If current is one of the nodes, it's LCA

```cpp
TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (!root || root == p || root == q) {
        return root;
    }

    TreeNode* left = lowestCommonAncestor(root->left, p, q);
    TreeNode* right = lowestCommonAncestor(root->right, p, q);

    // Both found in different subtrees
    if (left && right) return root;

    // Return non-null side
    return left ? left : right;
}
// Time: O(n), Space: O(h)
```

---

### **10. Validate BST:**

**Problem:** Check if tree is valid BST

**Theory:**

- Inorder traversal of BST is sorted
- Or check range for each node

```cpp
// Method 1: Inorder traversal
bool isValidBST(TreeNode* root) {
    TreeNode* prev = nullptr;

    function<bool(TreeNode*)> dfs = [&](TreeNode* node) -> bool {
        if (!node) return true;

        // Check left subtree
        if (!dfs(node->left)) return false;

        // Check current node
        if (prev && prev->val >= node->val) return false;
        prev = node;

        // Check right subtree
        return dfs(node->right);
    };

    return dfs(root);
}

// Method 2: Range checking
bool isValidBST(TreeNode* root) {
    function<bool(TreeNode*, long, long)> dfs =
        [&](TreeNode* node, long minVal, long maxVal) -> bool {
        if (!node) return true;

        if (node->val <= minVal || node->val >= maxVal) {
            return false;
        }

        return dfs(node->left, minVal, node->val) &&
               dfs(node->right, node->val, maxVal);
    };

    return dfs(root, LONG_MIN, LONG_MAX);
}
// Time: O(n), Space: O(h)
```

---

### **11. Serialize and Deserialize:**

**Problem:** Convert tree to string and back

**Theory:**

- Preorder traversal for serialization
- Use marker for null nodes
- Reconstruct using same order

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
        queue<string> nodes;
        stringstream ss(data);
        string item;

        while (getline(ss, item, ',')) {
            nodes.push(item);
        }

        return buildTree(nodes);
    }

private:
    TreeNode* buildTree(queue<string>& nodes) {
        string val = nodes.front();
        nodes.pop();

        if (val == "#") return nullptr;

        TreeNode* root = new TreeNode(stoi(val));
        root->left = buildTree(nodes);
        root->right = buildTree(nodes);

        return root;
    }
};
// Time: O(n), Space: O(n)
```

---

## 🔥 DFS Template

### **Basic DFS:**

```cpp
void dfs(TreeNode* node) {
    if (!node) return;

    // Preorder: process here

    dfs(node->left);

    // Inorder: process here

    dfs(node->right);

    // Postorder: process here
}
```

### **DFS with Return Value:**

```cpp
int dfs(TreeNode* node) {
    if (!node) return base_case;

    int left = dfs(node->left);
    int right = dfs(node->right);

    // Combine results
    return combine(left, right, node->val);
}
```

### **DFS with Path Tracking:**

```cpp
void dfs(TreeNode* node, vector<int>& path) {
    if (!node) return;

    path.push_back(node->val);  // Choose

    if (isLeaf(node)) {
        // Process path
    }

    dfs(node->left, path);      // Explore
    dfs(node->right, path);

    path.pop_back();            // Unchoose (backtrack)
}
```

---

## 🎯 How to Identify Tree DFS

### **Use DFS When:**

✅ Need to explore **all paths**
✅ Find path from **root to leaf**
✅ Calculate **tree properties** (height, diameter)
✅ **Validate** tree structure
✅ Need **recursion** naturally

### **Don't Use When:**

❌ Need **level-by-level** traversal (use BFS)
❌ Need **shortest path** (use BFS)
❌ Stack overflow risk (very deep tree)

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **O(n)** - Visit each node once

### **Space Complexity:**

- **Recursive:** O(h) for call stack
- **Iterative:** O(h) for explicit stack
- **Worst case:** O(n) for skewed tree
- **Best case:** O(log n) for balanced tree

---

## 🔥 Must Remember

### **Key Concepts:**

1. **Preorder:** Root first (copy tree)
2. **Inorder:** Left-Root-Right (BST sorted)
3. **Postorder:** Children first (delete tree)
4. **Backtracking:** Undo changes after recursion

### **Common Mistakes:**

- ❌ Not checking for null
- ❌ Wrong base case
- ❌ Not backtracking in path problems
- ❌ Modifying global state incorrectly

### **Tips:**

- ✅ Draw recursion tree
- ✅ Think about what to return
- ✅ Consider base cases carefully
- ✅ Use helper function for extra parameters

---

## 🎓 Common Patterns

### **Pattern 1: Tree Traversal**

- Visit all nodes in specific order
- Process node at specific position

### **Pattern 2: Path Finding**

- Track current path
- Backtrack after exploring
- Check condition at leaves

### **Pattern 3: Tree Properties**

- Calculate for subtrees
- Combine results
- Update global state

### **Pattern 4: Validation**

- Check constraints recursively
- Pass constraints down
- Return boolean

---

**Next:** [Top K Elements →](31-Top-K-Elements.md)
