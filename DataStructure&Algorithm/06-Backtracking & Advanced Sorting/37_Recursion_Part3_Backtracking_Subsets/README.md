# 🌲 Recursion Part3 Backtracking Subsets - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Recursion Part3 Backtracking Subsets?](#-what-is-recursion-part3-backtracking-subsets)
2. [Why Recursion Part3 Backtracking Subsets?](#-why-recursion-part3-backtracking-subsets)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Recursion Part3 Backtracking Subsets?

### **Concept Overview:**
Generating Subsets and Power Sets using Recursion.

### **Real-Life Analogy:**
Think of backtracking subsets like trying on **combinations of outfits**. You decide to wear a hat (include), see how it looks, then take the hat off (backtrack/exclude) and try wearing a scarf instead to build combinations.

---

## 💡 Why Recursion Part3 Backtracking Subsets?

### **Advantages:**
- Exhaustively generates all valid configuration states
- Simple recursive pattern for combinatorial math

### **Disadvantages / Challenges:**
- Exponential time complexity (e.g., O(2^N) or O(N!))

### **When to Use:**
- To generate all possible subsets, subset sums, or combinations

---

## 📖 Core Concepts

- **Power Set:** A set of all possible subsets (size $2^N$).
- **Include-Exclude:** Decisions at each step: include current element or exclude it.

---

## 💻 C++ Implementation Reference

```cpp
void getSubsets(vector<int>& nums, int i, vector<int>& curr, vector<vector<int>>& ans) {
    if (i == nums.size()) { ans.push_back(curr); return; }
    curr.push_back(nums[i]); getSubsets(nums, i + 1, curr, ans); // Include
    curr.pop_back(); getSubsets(nums, i + 1, curr, ans); // Exclude
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(2<sup>N</sup>) |
| Space Complexity | O(N) (Recursion Stack) |

---

## 💡 Best Practices & Gotchas

- **Ensure to backtrack (pop_back) to revert the state after a recursive call.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Generate subsets of size K
- [ ] Generate all binary strings of length N

### **Medium Problems:**
- [ ] Subsets generation (LeetCode 78)
- [ ] Subsets II with duplicates (LeetCode 90)
- [ ] Permutations

### **Hard Problems:**
- [ ] Combination Sum with restricted item uses
- [ ] Palindrome Partitioning

---

## ✅ Checklist

- [ ] Learn state action, recursion, and backtrack state undoing pattern
- [ ] Skip duplicate elements by sorting input first
- [ ] Identify recursive base case targets

---

**Happy Coding! 🌲**
