# 🥞 The Celebrity Problem Stack Queue - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is The Celebrity Problem Stack Queue?](#-what-is-the-celebrity-problem-stack-queue)
2. [Why The Celebrity Problem Stack Queue?](#-why-the-celebrity-problem-stack-queue)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is The Celebrity Problem Stack Queue?

### **Concept Overview:**
Finding the Celebrity in a Group.

### **Real-Life Analogy:**
Think of a stack like a **pile of dinner plates** in a cafeteria. You place new plates on the top (Push), and when you need a plate, you take the top one off (Pop). The plate at the bottom is only used last (Last-In, First-Out).

---

## 💡 Why The Celebrity Problem Stack Queue?

### **Advantages:**
- Simplifies backtracking and parenthetical evaluations
- Constant time insertions and deletions O(1)

### **Disadvantages / Challenges:**
- No direct random access to middle elements

### **When to Use:**
- For undo/redo histories, brackets validations, DFS call stack sweeps, and finding next greater elements

---

## 📖 Core Concepts

- **Celebrity:** Knows no one, but everyone knows them.
- Use two-pointer elimination: candidate is <i>A</i> if <i>A knows B</i> (eliminate A) else eliminate B.

---

## 💻 C++ Implementation Reference

```cpp
int getCelebrity(int n) {
    int s = 0, e = n - 1;
    while (s < e) {
        if (knows(s, e)) s++; else e--;
    }
    return check(s) ? s : -1;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) |
| Space Complexity | O(1) |

---

## 💡 Best Practices & Gotchas

- **Always validate the final candidate to ensure the celebrity condition is met.**
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
