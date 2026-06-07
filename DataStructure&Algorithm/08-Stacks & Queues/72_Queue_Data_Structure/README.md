# 👥 Queue Data Structure - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Queue Data Structure?](#-what-is-queue-data-structure)
2. [Why Queue Data Structure?](#-why-queue-data-structure)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Queue Data Structure?

### **Concept Overview:**
First-In-First-Out Data Storage Structure.

### **Real-Life Analogy:**
Think of a queue like a **line at a movie theater ticket counter**. The first person who joins the line is served first, and new arrivals stand at the back. No cutting in line is allowed (First-In, First-Out).

---

## 💡 Why Queue Data Structure?

### **Advantages:**
- Preserves arrival sequence order
- Constant time queue operations O(1)

### **Disadvantages / Challenges:**
- No random access to internal queue elements

### **When to Use:**
- For printer jobs queues, BFS graph sweeps, and packet buffering

---

## 📖 Core Concepts

- **Queue:** FIFO container structure. Operations: push, pop, front.
- Can be implemented using flat arrays or single linked list structures.

---

## 💻 C++ Implementation Reference

```cpp
class Queue {
    int arr[1000], fIdx = 0, rIdx = 0;
public:
    void push(int x) { arr[rIdx++] = x; }
    void pop() { fIdx++; }
    int front() { return arr[fIdx]; }
    bool empty() { return fIdx == rIdx; }
};
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| All Operations | O(1) time, O(N) space |

---

## 💡 Best Practices & Gotchas

- **Array-based queues suffer from space wastage; use circular pointer wrap-around to recycle memory.**
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
