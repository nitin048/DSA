# 🥞 Introduction to STACKS - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Introduction to STACKS?](#-what-is-introduction-to-stacks)
2. [Why Introduction to STACKS?](#-why-introduction-to-stacks)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Introduction to STACKS?

### **Concept Overview:**
Last-In-First-Out Data Storage Framework.

### **Real-Life Analogy:**
Think of a stack like a **pile of dinner plates** in a cafeteria. You place new plates on the top (Push), and when you need a plate, you take the top one off (Pop). The plate at the bottom is only used last (Last-In, First-Out).

---

## 💡 Why Introduction to STACKS?

### **Advantages:**
- Simplifies backtracking and parenthetical evaluations
- Constant time insertions and deletions O(1)

### **Disadvantages / Challenges:**
- No direct random access to middle elements

### **When to Use:**
- For undo/redo histories, brackets validations, DFS call stack sweeps, and finding next greater elements

---

## 📖 Core Concepts

- **Stack:** LIFO storage structure. Operations: push, pop, top.
- Can be implemented using dynamic arrays or linked lists.

---

## 💻 C++ Implementation Reference

```cpp
class Stack {
    int arr[1000], topIdx = -1;
public:
    void push(int x) { arr[++topIdx] = x; }
    void pop() { topIdx--; }
    int top() { return arr[topIdx]; }
    bool empty() { return topIdx == -1; }
};
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Push / Pop / Top | O(1) |
| Space Complexity | O(N) |

---

## 💡 Best Practices & Gotchas

- **Always check for stack overflow and underflow before modifying indices.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Implement stack using arrays
- [ ] Valid Parentheses check

### **Medium Problems:**
- [ ] Min Stack design with O(1) min lookup
- [ ] Next Greater Element
- [ ] Evaluate Postfix expression

### **Hard Problems:**
- [ ] Largest Rectangle in Histogram
- [ ] Trapping Rain Water using stacks

---

## ✅ Checklist

- [ ] Check is_empty() before attempting stack pops
- [ ] Master monotonic stack updates logic
- [ ] Avoid stack overflow by tracking sizes

---

**Happy Coding! 🥞**
