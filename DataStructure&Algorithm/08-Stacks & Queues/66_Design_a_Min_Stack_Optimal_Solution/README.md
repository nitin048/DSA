# 🥞 Design a Min Stack Optimal Solution - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Design a Min Stack Optimal Solution?](#-what-is-design-a-min-stack-optimal-solution)
2. [Why Design a Min Stack Optimal Solution?](#-why-design-a-min-stack-optimal-solution)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Design a Min Stack Optimal Solution?

### **Concept Overview:**
Designing a Stack supporting O(1) Minimum lookup.

### **Real-Life Analogy:**
Think of a stack like a **pile of dinner plates** in a cafeteria. You place new plates on the top (Push), and when you need a plate, you take the top one off (Pop). The plate at the bottom is only used last (Last-In, First-Out).

---

## 💡 Why Design a Min Stack Optimal Solution?

### **Advantages:**
- Simplifies backtracking and parenthetical evaluations
- Constant time insertions and deletions O(1)

### **Disadvantages / Challenges:**
- No direct random access to middle elements

### **When to Use:**
- For undo/redo histories, brackets validations, DFS call stack sweeps, and finding next greater elements

---

## 📖 Core Concepts

- **Min Stack:** Supports push, pop, top, and getMin in constant time.
- Keep an auxiliary stack that tracks min values, or encode values.

---

## 💻 C++ Implementation Reference

```cpp
class MinStack {
    stack<int> st, minSt;
public:
    void push(int val) {
        st.push(val);
        if (minSt.empty() || val <= minSt.top()) minSt.push(val);
    }
    void pop() {
        if (st.top() == minSt.top()) minSt.pop();
        st.pop();
    }
    int top() { return st.top(); }
    int getMin() { return minSt.top(); }
};
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| All Operations | O(1) time, O(N) space |

---

## 💡 Best Practices & Gotchas

- **Use inequality checks (`val &lt;= minSt.top()`) to handle duplicate minimums correctly.**
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
