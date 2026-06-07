# 🥞 Previous Smaller Element Optimal Solution - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Previous Smaller Element Optimal Solution?](#-what-is-previous-smaller-element-optimal-solution)
2. [Why Previous Smaller Element Optimal Solution?](#-why-previous-smaller-element-optimal-solution)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Previous Smaller Element Optimal Solution?

### **Concept Overview:**
Finding Previous Smaller Elements using Increasing Stacks.

### **Real-Life Analogy:**
Think of a stack like a **pile of dinner plates** in a cafeteria. You place new plates on the top (Push), and when you need a plate, you take the top one off (Pop). The plate at the bottom is only used last (Last-In, First-Out).

---

## 💡 Why Previous Smaller Element Optimal Solution?

### **Advantages:**
- Simplifies backtracking and parenthetical evaluations
- Constant time insertions and deletions O(1)

### **Disadvantages / Challenges:**
- No direct random access to middle elements

### **When to Use:**
- For undo/redo histories, brackets validations, DFS call stack sweeps, and finding next greater elements

---

## 📖 Core Concepts

- **Previous Smaller:** First element to the left that is strictly smaller.
- Maintain index stack in increasing element order.

---

## 💻 C++ Implementation Reference

```cpp
vector<int> prevSmaller(vector<int>& arr) {
    vector<int> ans(arr.size(), -1);
    stack<int> st;
    for (int i=0; i<arr.size(); i++) {
        while (!st.empty() && st.top() >= arr[i]) st.pop();
        if (!st.empty()) ans[i] = st.top();
        st.push(arr[i]);
    }
    return ans;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) |
| Space Complexity | O(N) |

---

## 💡 Best Practices & Gotchas

- **Pop elements while they are greater than or equal to current to maintain strictly increasing stack.**
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
