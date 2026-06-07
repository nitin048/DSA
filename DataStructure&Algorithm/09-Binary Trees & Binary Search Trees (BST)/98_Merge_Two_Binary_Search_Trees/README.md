# 🗂️ Merge Two Binary Search Trees - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Merge Two Binary Search Trees?](#-what-is-merge-two-binary-search-trees)
2. [Why Merge Two Binary Search Trees?](#-why-merge-two-binary-search-trees)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Merge Two Binary Search Trees?

### **Concept Overview:**
Merging Two BSTs into a Single Balanced BST.

### **Real-Life Analogy:**
Think of a Binary Search Tree (BST) like a **digitally sorted phone directory**. For any person (Node), everyone listed to their left has a smaller number, and everyone listed to their right has a larger number. This lets you find names in half the time.

---

## 💡 Why Merge Two Binary Search Trees?

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

- **Problem:** Merge two trees to form a balanced BST.
- Step 1: Extract sorted inorder lists. Step 2: Merge sorted lists. Step 3: Build balanced BST.

---

## 💻 C++ Implementation Reference

```cpp
// Extract list1 and list2 using inorder traversals.
// Merge list1 and list2 into a single sorted list.
// Reconstruct balanced BST recursively.
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N1 + N2) |
| Space Complexity | O(N1 + N2) |

---

## 💡 Best Practices & Gotchas

- **Achieves optimal O(N1 + N2) runtime.**
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
