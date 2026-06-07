# 👥 Gas Station Greedy Approach Leetcode 134 - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Gas Station Greedy Approach Leetcode 134?](#-what-is-gas-station-greedy-approach-leetcode-134)
2. [Why Gas Station Greedy Approach Leetcode 134?](#-why-gas-station-greedy-approach-leetcode-134)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Gas Station Greedy Approach Leetcode 134?

### **Concept Overview:**
Greedy Gas Station Circuit Completion Loops.

### **Real-Life Analogy:**
Think of a queue like a **line at a movie theater ticket counter**. The first person who joins the line is served first, and new arrivals stand at the back. No cutting in line is allowed (First-In, First-Out).

---

## 💡 Why Gas Station Greedy Approach Leetcode 134?

### **Advantages:**
- Preserves arrival sequence order
- Constant time queue operations O(1)

### **Disadvantages / Challenges:**
- No random access to internal queue elements

### **When to Use:**
- For printer jobs queues, BFS graph sweeps, and packet buffering

---

## 📖 Core Concepts

- **Problem:** Travel circular gas station loop without empty tanks.
- **Greedy Strategy:** If total gas &ge; total cost, a solution always exists.
- Reset start index when running balance drops below zero.

---

## 💻 C++ Implementation Reference

```cpp
int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
    int totalGas = 0, totalCost = 0, tank = 0, start = 0;
    for (int i = 0; i < gas.size(); i++) {
        totalGas += gas[i]; totalCost += cost[i];
        tank += gas[i] - cost[i];
        if (tank < 0) { start = i + 1; tank = 0; }
    }
    return (totalGas >= totalCost) ? start : -1;
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

- **Requires only a single loop pass without cyclic search step checking.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Implement queue using array
- [ ] Implement queue using stacks

### **Medium Problems:**
- [ ] Design a circular queue
- [ ] Sliding Window Maximum
- [ ] First unique character in stream

### **Hard Problems:**
- [ ] Gas Station Greedy loop
- [ ] Design double ended queue (Deque) from nodes

---

## ✅ Checklist

- [ ] Update circular indexes via modulo operations: (idx + 1) % capacity
- [ ] Handle queue empty vs queue full constraints cleanly
- [ ] Master double pointer deque implementations

---

**Happy Coding! 👥**
