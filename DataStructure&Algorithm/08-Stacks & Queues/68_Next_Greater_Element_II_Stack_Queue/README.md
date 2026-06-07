# 🥞 Next Greater Element II Stack Queue - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Next Greater Element II Stack Queue?](#-what-is-next-greater-element-ii-stack-queue)
2. [Why Next Greater Element II Stack Queue?](#-why-next-greater-element-ii-stack-queue)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Next Greater Element II Stack Queue?

### **Concept Overview:**
Monotonic Stack Search on Circular Arrays.

### **Real-Life Analogy:**
Think of a stack like a **pile of dinner plates** in a cafeteria. You place new plates on the top (Push), and when you need a plate, you take the top one off (Pop). The plate at the bottom is only used last (Last-In, First-Out).

---

## 💡 Why Next Greater Element II Stack Queue?

### **Advantages:**
- Simplifies backtracking and parenthetical evaluations
- Constant time insertions and deletions O(1)

### **Disadvantages / Challenges:**
- No direct random access to middle elements

### **When to Use:**
- For undo/redo histories, brackets validations, DFS call stack sweeps, and finding next greater elements

---

## 📖 Core Concepts

- **Problem:** Next greater element in a circular array.
- Simulate circular traversal by executing loops up to $2 	imes N - 1$ steps.

---

## 💻 C++ Implementation Reference

```cpp
vector<int> nextGreaterElements(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, -1); stack<int> st;
    for (int i = 0; i < 2 * n; i++) {
        while (!st.empty() && nums[i % n] > nums[st.top()]) {
            ans[st.top()] = nums[i % n]; st.pop();
        }
        if (i < n) st.push(i);
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

- **Using modulo operations (`i % N`) maps circular array indices correctly.**
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
