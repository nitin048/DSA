# 🌳 Flatten Binary Tree to Linked List - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Flatten Binary Tree to Linked List?](#-what-is-flatten-binary-tree-to-linked-list)
2. [Why Flatten Binary Tree to Linked List?](#-why-flatten-binary-tree-to-linked-list)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Flatten Binary Tree to Linked List?

### **Concept Overview:**
Converting Trees to Linked List structures.

### **Real-Life Analogy:**
Think of a binary tree like a **family ancestry tree** starting from one founder. The founder (Root) has up to two children. Each child can have their own children, branching out to form leaf nodes at the edge.

---

## 💡 Why Flatten Binary Tree to Linked List?

### **Advantages:**
- Efficiently represents nested hierarchies and decision patterns
- DFS/BFS traversals sweep structures cleanly

### **Disadvantages / Challenges:**
- Searching unsorted trees takes linear time O(N)

### **When to Use:**
- For hierarchical files directories, AST expression compilers, and decision systems

---

## 📖 Core Concepts

- **Flatten:** Rewire node pointers such that tree becomes a right-skewed linked list.
- Follow preorder sequence traversal in-place.

---

## 💻 C++ Implementation Reference

```cpp
void flatten(TreeNode* root) {
    TreeNode* curr = root;
    while (curr) {
        if (curr->left) {
            TreeNode* pred = curr->left;
            while (pred->right) pred = pred->right;
            pred->right = curr->right; curr->right = curr->left; curr->left = nullptr;
        }
        curr = curr->right;
    }
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) |
| Space Complexity | O(1) (Iterative Morris) |

---

## 💡 Best Practices & Gotchas

- **Clean up left pointer properties (`left = nullptr`) after rewriting linkages.**
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
