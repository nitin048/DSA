# 🌲 Permutations Array String Backtracking - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Permutations Array String Backtracking?](#-what-is-permutations-array-string-backtracking)
2. [Why Permutations Array String Backtracking?](#-why-permutations-array-string-backtracking)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Permutations Array String Backtracking?

### **Concept Overview:**
Generating Unique Permutations of Array/String.

### **Real-Life Analogy:**
Think of backtracking subsets like trying on **combinations of outfits**. You decide to wear a hat (include), see how it looks, then take the hat off (backtrack/exclude) and try wearing a scarf instead to build combinations.

---

## 💡 Why Permutations Array String Backtracking?

### **Advantages:**
- Exhaustively generates all valid configuration states
- Simple recursive pattern for combinatorial math

### **Disadvantages / Challenges:**
- Exponential time complexity (e.g., O(2^N) or O(N!))

### **When to Use:**
- To generate all possible subsets, subset sums, or combinations

---

## 📖 Core Concepts

- **Permutations:** Arrangement permutations of list elements (size $N!$).
- Track elements using swap swaps or boolean arrays.

---

## 💻 C++ Implementation Reference

```cpp
void permute(vector<int>& nums, int idx, vector<vector<int>>& ans) {
    if (idx == nums.size()) { ans.push_back(nums); return; }
    for (int i = idx; i < nums.size(); i++) {
        swap(nums[idx], nums[i]);
        permute(nums, idx + 1, ans);
        swap(nums[idx], nums[i]); // Backtrack
    }
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N * N!) |
| Space Complexity | O(N) |

---

## 💡 Best Practices & Gotchas

- **If input has duplicates, skip identical swaps to avoid duplicate permutations.**
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
