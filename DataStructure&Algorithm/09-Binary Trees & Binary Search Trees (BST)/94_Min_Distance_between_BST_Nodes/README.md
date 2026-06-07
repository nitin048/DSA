# 🗂️ Min Distance between BST Nodes - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Min Distance between BST Nodes?](#-what-is-min-distance-between-bst-nodes)
2. [Why Min Distance between BST Nodes?](#-why-min-distance-between-bst-nodes)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Min Distance between BST Nodes?

### **Concept Overview:**
Finding Minimum Absolute Difference in BSTs.

### **Real-Life Analogy:**
Think of a Binary Search Tree (BST) like a **digitally sorted phone directory**. For any person (Node), everyone listed to their left has a smaller number, and everyone listed to their right has a larger number. This lets you find names in half the time.

---

## 💡 Why Min Distance between BST Nodes?

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

- **Inorder Property:** Inorder traversal yields sorted elements.
- Track difference between current node and previous node.

---

## 💻 C++ Implementation Reference

```cpp
int minDiff = 1e9, prevVal = -1;
void getMinDiff(TreeNode* root) {
    if (!root) return;
    getMinDiff(root->left);
    if (prevVal != -1) minDiff = min(minDiff, root->val - prevVal);
    prevVal = root->val;
    getMinDiff(root->right);
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) |
| Space Complexity | O(H) |

---

## 💡 Best Practices & Gotchas

- **Yields O(N) time by running inorder traversal in a single pass.**
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
