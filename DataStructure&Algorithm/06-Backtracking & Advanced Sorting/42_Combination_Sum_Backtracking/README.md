# 🌲 Combination Sum Backtracking - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Combination Sum Backtracking?](#-what-is-combination-sum-backtracking)
2. [Why Combination Sum Backtracking?](#-why-combination-sum-backtracking)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Combination Sum Backtracking?

### **Concept Overview:**
Unique Combinations summing up to Target.

### **Real-Life Analogy:**
Think of backtracking subsets like trying on **combinations of outfits**. You decide to wear a hat (include), see how it looks, then take the hat off (backtrack/exclude) and try wearing a scarf instead to build combinations.

---

## 💡 Why Combination Sum Backtracking?

### **Advantages:**
- Exhaustively generates all valid configuration states
- Simple recursive pattern for combinatorial math

### **Disadvantages / Challenges:**
- Exponential time complexity (e.g., O(2^N) or O(N!))

### **When to Use:**
- To generate all possible subsets, subset sums, or combinations

---

## 📖 Core Concepts

- **Backtracking Choice:** Pick elements multiple times or skip them.
- Sort elements to prevent duplicate combinations.

---

## 💻 C++ Implementation Reference

```cpp
void getCombinations(vector<int>& cand, int i, int target, vector<int>& curr, vector<vector<int>>& ans) {
    if (target == 0) { ans.push_back(curr); return; }
    if (i == cand.size() || target < 0) return;
    curr.push_back(cand[i]);
    getCombinations(cand, i, target - cand[i], curr, ans); // Pick again
    curr.pop_back();
    getCombinations(cand, i + 1, target, curr, ans); // Skip
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(2<sup>T/Min</sup>) |
| Space Complexity | O(T/Min) stack |

---

## 💡 Best Practices & Gotchas

- **Sorting candidates allows easy pruning when current element > target.**
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
