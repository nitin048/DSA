# 👥 First Unique Character in String Leetcode 387 - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is First Unique Character in String Leetcode 387?](#-what-is-first-unique-character-in-string-leetcode-387)
2. [Why First Unique Character in String Leetcode 387?](#-why-first-unique-character-in-string-leetcode-387)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is First Unique Character in String Leetcode 387?

### **Concept Overview:**
Finding First Unique Character in String.

### **Real-Life Analogy:**
Think of a queue like a **line at a movie theater ticket counter**. The first person who joins the line is served first, and new arrivals stand at the back. No cutting in line is allowed (First-In, First-Out).

---

## 💡 Why First Unique Character in String Leetcode 387?

### **Advantages:**
- Preserves arrival sequence order
- Constant time queue operations O(1)

### **Disadvantages / Challenges:**
- No random access to internal queue elements

### **When to Use:**
- For printer jobs queues, BFS graph sweeps, and packet buffering

---

## 📖 Core Concepts

- **Concept:** Read string once and count frequencies.
- Read string again and identify first char with count == 1.

---

## 💻 C++ Implementation Reference

```cpp
int firstUniqChar(string s) {
    vector<int> count(26, 0);
    for (char c : s) count[c - 'a']++;
    for (int i = 0; i < s.length(); i++) {
        if (count[s[i] - 'a'] == 1) return i;
    }
    return -1;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) (Two Passes) |
| Space Complexity | O(1) (Fixed count size) |

---

## 💡 Best Practices & Gotchas

- **Use queue buffers to process unique elements in dynamic string streams.**
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
