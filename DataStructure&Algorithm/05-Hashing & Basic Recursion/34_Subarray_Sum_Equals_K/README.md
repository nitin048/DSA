# 🔑 Subarray Sum Equals K - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Subarray Sum Equals K?](#-what-is-subarray-sum-equals-k)
2. [Why Subarray Sum Equals K?](#-why-subarray-sum-equals-k)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Subarray Sum Equals K?

### **Concept Overview:**
Prefix Sum Cumulative Map Counting.

### **Real-Life Analogy:**
Think of a hash map like a **coat check room**. You hand over your coat, get a small ticket number (hash value), and when you return, you show the ticket and get your coat immediately without searching through all the hangers.

---

## 💡 Why Subarray Sum Equals K?

### **Advantages:**
- Extremely fast key lookup times
- Simplifies occurrence tracking and frequency counting

### **Disadvantages / Challenges:**
- Does not preserve element order
- Hash collision handling triggers performance overhead
- Consumes extra memory space for hash tables

### **When to Use:**
- When tracking element frequencies
- To quickly locate complements (e.g. Two Sum)
- For dictionary lookups

---

## 📖 Core Concepts

- **Subarray Sum:** Subarray sum between index <i>i</i> and <i>j</i> equals `prefix[j] - prefix[i-1]`.
- Match using formula: `runningSum - target` prefix seen counts.

---

## 💻 C++ Implementation Reference

```cpp
int subarraySum(vector<int>& nums, int k) {
    unordered_map<int, int> m;
    m[0] = 1; // Base condition
    int sum = 0, count = 0;
    for (int x : nums) {
        sum += x;
        if (m.count(sum - k)) count += m[sum - k];
        m[sum]++;
    }
    return count;
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

- **This approach handles negative array values correctly, unlike the standard sliding window.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Count elements frequency
- [ ] Intersection of two arrays

### **Medium Problems:**
- [ ] Two Sum using hash maps
- [ ] Subarray Sum Equals K (using prefix sums + maps)
- [ ] Group Anagrams

### **Hard Problems:**
- [ ] Longest Consecutive Sequence
- [ ] Design a custom Hash Map with collision resolving

---

## ✅ Checklist

- [ ] Understand key difference between map (BST) and unordered_map (Hash Table)
- [ ] Master prefix sum hashing patterns
- [ ] Handle hash collisions cleanly

---

**Happy Coding! 🔑**
