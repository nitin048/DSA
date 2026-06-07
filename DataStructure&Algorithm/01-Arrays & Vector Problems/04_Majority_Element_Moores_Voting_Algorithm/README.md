# 📊 Majority Element Moores Voting Algorithm - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Majority Element Moores Voting Algorithm?](#-what-is-majority-element-moores-voting-algorithm)
2. [Why Majority Element Moores Voting Algorithm?](#-why-majority-element-moores-voting-algorithm)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Majority Element Moores Voting Algorithm?

### **Concept Overview:**
Boyer-Moore Majority Vote Algorithm.

### **Real-Life Analogy:**
Think of an array like a **row of lockers** in a school hallway. Each locker has a unique number (index) starting from 0, is of the same size, and lies directly next to the adjacent lockers (contiguous). If you know the locker number, you can open it instantly in O(1) time.

---

## 💡 Why Majority Element Moores Voting Algorithm?

### **Advantages:**
- Constant lookup time for direct indexing
- Highly cache-friendly sequential storage
- No memory overhead from pointers

### **Disadvantages / Challenges:**
- Fixed size limitations
- Insertions and deletions at arbitrary positions require linear array shifting O(N)

### **When to Use:**
- When the maximum collection size is known in advance
- When cache-locality performance is critical
- When quick direct indexes calculations are preferred

---

## 📖 Core Concepts

- **Majority Element:** An element that appears strictly more than N/2 times in an array.
- **Voting Balance:** If we cancel out pairs of distinct elements, the majority element will remain.
- **Verification:** Validate candidate via a second scan if majority element is not guaranteed.

---

## 💻 C++ Implementation Reference

```cpp
int majorityElement(vector<int>& nums) {
    int candidate = 0, count = 0;
    for(int num : nums) {
        if(count == 0) candidate = num;
        count += (num == candidate) ? 1 : -1;
    }
    return candidate;
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

- **Boyer-Moore requires O(1) space, outperforming standard hash-map counts which consume O(N) auxiliary space.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Find maximum/minimum element in array
- [ ] Verify if array is sorted
- [ ] Reverse array elements in-place

### **Medium Problems:**
- [ ] Maximum Subarray Sum (Kadane's Algorithm)
- [ ] Find Majority Element (Moore's Voting)
- [ ] Two Sum complement hashes lookups

### **Hard Problems:**
- [ ] Product of Array Except Self without Division
- [ ] Trapping Rainwater index boundaries

---

## ✅ Checklist

- [ ] Learn Row-Major vs contiguous offset calculations
- [ ] Master sliding window and two-pointer loops
- [ ] Ensure array index bounds are validated to prevent overflows

---

**Happy Coding! 📊**
