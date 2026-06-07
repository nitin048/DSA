# 🥞 Stock Span Problem Optimal Solution - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Stock Span Problem Optimal Solution?](#-what-is-stock-span-problem-optimal-solution)
2. [Why Stock Span Problem Optimal Solution?](#-why-stock-span-problem-optimal-solution)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Stock Span Problem Optimal Solution?

### **Concept Overview:**
Calculating Stock Price Span using Monotonic Stacks.

### **Real-Life Analogy:**
Think of a stack like a **pile of dinner plates** in a cafeteria. You place new plates on the top (Push), and when you need a plate, you take the top one off (Pop). The plate at the bottom is only used last (Last-In, First-Out).

---

## 💡 Why Stock Span Problem Optimal Solution?

### **Advantages:**
- Simplifies backtracking and parenthetical evaluations
- Constant time insertions and deletions O(1)

### **Disadvantages / Challenges:**
- No direct random access to middle elements

### **When to Use:**
- For undo/redo histories, brackets validations, DFS call stack sweeps, and finding next greater elements

---

## 📖 Core Concepts

- **Span:** Consecutive days preceding current day where price is less or equal.
- Keep a decreasing stack of pairs: `(price, span)`.

---

## 💻 C++ Implementation Reference

```cpp
stack<pair<int, int>> st; // price, span
int nextDay(int price) {
    int span = 1;
    while (!st.empty() && st.top().first <= price) {
        span += st.top().second; st.pop();
    }
    st.push({price, span});
    return span;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(1) amortized / O(N) total |
| Space Complexity | O(N) |

---

## 💡 Best Practices & Gotchas

- **Each price element is pushed and popped at most once.**
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
