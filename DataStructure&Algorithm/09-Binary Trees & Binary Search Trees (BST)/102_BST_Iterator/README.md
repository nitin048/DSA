# 🗂️ BST Iterator - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is BST Iterator?](#-what-is-bst-iterator)
2. [Why BST Iterator?](#-why-bst-iterator)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is BST Iterator?

### **Concept Overview:**
Inorder Traversal Iterations using Stacks.

### **Real-Life Analogy:**
Think of a Binary Search Tree (BST) like a **digitally sorted phone directory**. For any person (Node), everyone listed to their left has a smaller number, and everyone listed to their right has a larger number. This lets you find names in half the time.

---

## 💡 Why BST Iterator?

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

- **BST Iterator:** Supports next() and hasNext() in O(1) time.
- Push left branch nodes onto stack; pop, store, and process right branches.

---

## 💻 C++ Implementation Reference

```cpp
class BSTIterator {
    stack<TreeNode*> st;
    void pushLeft(TreeNode* node) {
        while(node) { st.push(node); node = node->left; }
    }
public:
    BSTIterator(TreeNode* root) { pushLeft(root); }
    int next() {
        TreeNode* node = st.top(); st.pop();
        pushLeft(node->right); return node->val;
    }
};
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| next() Operation | O(1) amortized |
| Space Complexity | O(H) (Stack elements) |

---

## 💡 Best Practices & Gotchas

- **Amortized O(1) runtime since each node is pushed and popped at most once.**
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
