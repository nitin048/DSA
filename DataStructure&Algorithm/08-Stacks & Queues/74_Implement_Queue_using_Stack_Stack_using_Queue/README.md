# 👥 Implement Queue using Stack Stack using Queue - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Implement Queue using Stack Stack using Queue?](#-what-is-implement-queue-using-stack-stack-using-queue)
2. [Why Implement Queue using Stack Stack using Queue?](#-why-implement-queue-using-stack-stack-using-queue)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Implement Queue using Stack Stack using Queue?

### **Concept Overview:**
Converting Stack LIFO to Queue FIFO and Vice-Versa.

### **Real-Life Analogy:**
Think of a queue like a **line at a movie theater ticket counter**. The first person who joins the line is served first, and new arrivals stand at the back. No cutting in line is allowed (First-In, First-Out).

---

## 💡 Why Implement Queue using Stack Stack using Queue?

### **Advantages:**
- Preserves arrival sequence order
- Constant time queue operations O(1)

### **Disadvantages / Challenges:**
- No random access to internal queue elements

### **When to Use:**
- For printer jobs queues, BFS graph sweeps, and packet buffering

---

## 📖 Core Concepts

- **Queue using Stacks:** Uses two stacks. Transfer elements to reverse LIFO order.
- **Stack using Queue:** Rotate elements inside a single queue after every push operation.

---

## 💻 C++ Implementation Reference

```cpp
class StackUsingQueue {
    queue<int> q;
public:
    void push(int x) {
        q.push(x);
        for(int i=0; i<q.size()-1; i++) {
            q.push(q.front()); q.pop();
        }
    }
    void pop() { q.pop(); }
};
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Push (Stack via Q) | O(N) time, O(N) space |
| Pop (Stack via Q) | O(1) |

---

## 💡 Best Practices & Gotchas

- **Using two queues yields similar conversions but requires extra memory allocation.**
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
