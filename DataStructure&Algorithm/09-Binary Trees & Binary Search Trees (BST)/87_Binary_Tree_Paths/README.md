# 🌳 Binary Tree Paths - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Binary Tree Paths?](#-what-is-binary-tree-paths)
2. [Why Binary Tree Paths?](#-why-binary-tree-paths)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Binary Tree Paths?

### **Concept Overview:**
Extracting Paths from Root to Leaf Nodes.

### **Real-Life Analogy:**
Think of a binary tree like a **family ancestry tree** starting from one founder. The founder (Root) has up to two children. Each child can have their own children, branching out to form leaf nodes at the edge.

---

## 💡 Why Binary Tree Paths?

### **Advantages:**
- Efficiently represents nested hierarchies and decision patterns
- DFS/BFS traversals sweep structures cleanly

### **Disadvantages / Challenges:**
- Searching unsorted trees takes linear time O(N)

### **When to Use:**
- For hierarchical files directories, AST expression compilers, and decision systems

---

## 📖 Core Concepts

- **Paths:** Find all root-to-leaf paths.
- Traverse tree, appending values to path; push to result when leaf is hit.

---

## 💻 C++ Implementation Reference

```cpp
void getPaths(TreeNode* root, string path, vector<string>& ans) {
    if (!root) return;
    path += to_string(root->val);
    if (!root->left && !root->right) { ans.push_back(path); return; }
    getPaths(root->left, path + "->", ans);
    getPaths(root->right, path + "->", ans);
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) |
| Space Complexity | O(H) recursion space |

---

## 💡 Best Practices & Gotchas

- **Revert path strings correctly when backtracking (stack handles this).**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Preorder, Inorder, and Postorder traversals
- [ ] Find height or max depth of tree
- [ ] Count total tree nodes

### **Medium Problems:**
- [ ] Level order BFS traversal
- [ ] Lowest Common Ancestor (LCA)
- [ ] Diameter of Binary Tree

### **Hard Problems:**
- [ ] Morris Inorder Traversal (O(1) space)
- [ ] Serialize and Deserialize Binary Tree

---

## ✅ Checklist

- [ ] Handle null nodes recursively as base cases
- [ ] Learn difference between DFS stack sweeps and BFS queue sweeps
- [ ] Understand time/space tradeoffs in iterative conversions

---

**Happy Coding! 🌳**
