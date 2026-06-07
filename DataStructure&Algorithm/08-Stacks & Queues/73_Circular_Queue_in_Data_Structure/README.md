# 👥 Circular Queue in Data Structure - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Circular Queue in Data Structure?](#-what-is-circular-queue-in-data-structure)
2. [Why Circular Queue in Data Structure?](#-why-circular-queue-in-data-structure)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Circular Queue in Data Structure?

### **Concept Overview:**
Recycling Queue memory spaces using Modulo Indices.

### **Real-Life Analogy:**
Think of a queue like a **line at a movie theater ticket counter**. The first person who joins the line is served first, and new arrivals stand at the back. No cutting in line is allowed (First-In, First-Out).

---

## 💡 Why Circular Queue in Data Structure?

### **Advantages:**
- Preserves arrival sequence order
- Constant time queue operations O(1)

### **Disadvantages / Challenges:**
- No random access to internal queue elements

### **When to Use:**
- For printer jobs queues, BFS graph sweeps, and packet buffering

---

## 📖 Core Concepts

- **Circular Queue:** Avoids space wastage by wrapping pointers: `rear = (rear + 1) % size`.
- Maintains bounds tracking using elements count variables.

---

## 💻 C++ Implementation Reference

```cpp
class MyCircularQueue {
    vector<int> q;
    int head = 0, tail = -1, sz, capacity;
public:
    MyCircularQueue(int k) : capacity(k), sz(0), q(k) {}
    bool enQueue(int value) {
        if (sz == capacity) return false;
        tail = (tail + 1) % capacity;
        q[tail] = value; sz++; return true;
    }
};
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| enQueue / deQueue | O(1) time, O(K) space |

---

## 💡 Best Practices & Gotchas

- **Properly handle empty vs full queue states using size counters.**
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
