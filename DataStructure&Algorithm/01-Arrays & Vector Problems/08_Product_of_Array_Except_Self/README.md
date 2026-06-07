# 📊 Product of Array Except Self - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Product of Array Except Self?](#-what-is-product-of-array-except-self)
2. [Why Product of Array Except Self?](#-why-product-of-array-except-self)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Product of Array Except Self?

### **Concept Overview:**
Product of Array Except Self without Division.

### **Real-Life Analogy:**
Think of an array like a **row of lockers** in a school hallway. Each locker has a unique number (index) starting from 0, is of the same size, and lies directly next to the adjacent lockers (contiguous). If you know the locker number, you can open it instantly in O(1) time.

---

## 💡 Why Product of Array Except Self?

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

- **Accumulation:** Avoid simple division to handle array indices containing zero values.
- **Prefix Array:** Accumulates prefix multiplications.
- **Suffix Pass:** Updates elements with suffix products dynamically in a single reversed pass.

---

## 💻 C++ Implementation Reference

```cpp
vector<int> productExceptSelf(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 1);
    for(int i = 1; i < n; i++) ans[i] = ans[i-1] * nums[i-1];
    int right = 1;
    for(int i = n - 1; i >= 0; i--) { ans[i] *= right; right *= nums[i]; }
    return ans;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) |
| Space Complexity | O(1) auxiliary |

---

## 💡 Best Practices & Gotchas

- **Stores output answers in the return array directly to achieve O(1) auxiliary space complexity.**
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
