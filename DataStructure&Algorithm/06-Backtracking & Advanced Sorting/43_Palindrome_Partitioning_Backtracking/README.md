# 🌲 Palindrome Partitioning Backtracking - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Palindrome Partitioning Backtracking?](#-what-is-palindrome-partitioning-backtracking)
2. [Why Palindrome Partitioning Backtracking?](#-why-palindrome-partitioning-backtracking)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Palindrome Partitioning Backtracking?

### **Concept Overview:**
Partitioning String into Palindromic Substrings.

### **Real-Life Analogy:**
Think of backtracking subsets like trying on **combinations of outfits**. You decide to wear a hat (include), see how it looks, then take the hat off (backtrack/exclude) and try wearing a scarf instead to build combinations.

---

## 💡 Why Palindrome Partitioning Backtracking?

### **Advantages:**
- Exhaustively generates all valid configuration states
- Simple recursive pattern for combinatorial math

### **Disadvantages / Challenges:**
- Exponential time complexity (e.g., O(2^N) or O(N!))

### **When to Use:**
- To generate all possible subsets, subset sums, or combinations

---

## 📖 Core Concepts

- **Problem:** Partition string such that every substring is a palindrome.
- Partition string recursively and validate boundaries.

---

## 💻 C++ Implementation Reference

```cpp
void partition(string s, int start, vector<string>& curr, vector<vector<string>>& ans) {
    if (start == s.length()) { ans.push_back(curr); return; }
    for (int end = start; end < s.length(); end++) {
        if (isPalindrome(s, start, end)) {
            curr.push_back(s.substr(start, end - start + 1));
            partition(s, end + 1, curr, ans);
            curr.pop_back(); // Backtrack
        }
    }
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N * 2<sup>N</sup>) |
| Space Complexity | O(N) |

---

## 💡 Best Practices & Gotchas

- **Use memoization/DP to check palindrome substrings in O(1) time.**
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
