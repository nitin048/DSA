# 🗂️ Lowest Common Ancestor in BST - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Lowest Common Ancestor in BST?](#-what-is-lowest-common-ancestor-in-bst)
2. [Why Lowest Common Ancestor in BST?](#-why-lowest-common-ancestor-in-bst)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Lowest Common Ancestor in BST?

### **Concept Overview:**
Finding Lowest Common Ancestor in BSTs.

### **Real-Life Analogy:**
Think of a Binary Search Tree (BST) like a **digitally sorted phone directory**. For any person (Node), everyone listed to their left has a smaller number, and everyone listed to their right has a larger number. This lets you find names in half the time.

---

## 💡 Why Lowest Common Ancestor in BST?

### **Advantages:**
- Fast search, insertion, and deletion operations
- Maintains ordered sorted values dynamically

### **Disadvantages / Challenges:**
- Degrades to a skewed linear list O(N) if not balanced

### **When to Use:**
- When dynamic search and insertions must both be fast
- To implement ordered databases and sorted maps

---

## 📖 Core Concepts

- **BST LCA:** Can be resolved without traversing the entire tree.
- LCA found if current node value lies between target inputs.

---

## 💻 C++ Implementation Reference

```cpp
TreeNode* lowestCommonAncestorBST(TreeNode* root, TreeNode* p, TreeNode* q) {
    if (root->val > p->val && root->val > q->val)
        return lowestCommonAncestorBST(root->left, p, q);
    if (root->val < p->val && root->val < q->val)
        return lowestCommonAncestorBST(root->right, p, q);
    return root;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(H) |
| Space Complexity | O(H) |

---

## 💡 Best Practices & Gotchas

- **Runs in O(H) time, which is faster than general binary tree search.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Search for a key in BST
- [ ] Insert a node in BST

### **Medium Problems:**
- [ ] Validate BST constraints
- [ ] Delete a node from BST
- [ ] Sorted array to balanced BST

### **Hard Problems:**
- [ ] Merge two BSTs optimally
- [ ] Recover BST with swapped nodes
- [ ] Largest BST in Binary Tree

---

## ✅ Checklist

- [ ] Pass constraints range bounds [Min, Max] recursively in validation checks
- [ ] Understand why inorder successor search is needed in deletions
- [ ] Keep BSTs balanced (AVL/Red-black tree concepts)

---

**Happy Coding! 🗂️**
