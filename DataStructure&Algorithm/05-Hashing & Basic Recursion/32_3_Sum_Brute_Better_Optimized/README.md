# 🔑 3 Sum Brute Better Optimized - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is 3 Sum Brute Better Optimized?](#-what-is-3-sum-brute-better-optimized)
2. [Why 3 Sum Brute Better Optimized?](#-why-3-sum-brute-better-optimized)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is 3 Sum Brute Better Optimized?

### **Concept Overview:**
Finding Unique Triplets summing up to Zero.

### **Real-Life Analogy:**
Think of a hash map like a **coat check room**. You hand over your coat, get a small ticket number (hash value), and when you return, you show the ticket and get your coat immediately without searching through all the hangers.

---

## 💡 Why 3 Sum Brute Better Optimized?

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

- **Sorting & Pointers:** Sort array, fix index <i>i</i>, and use two-pointer sweeps on remainder.
- **De-duplication:** Skip identical neighbors to prevent generating duplicate triplets.

---

## 💻 C++ Implementation Reference

```cpp
vector<vector<int>> threeSum(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    for (int i = 0; i < nums.size(); i++) {
        if (i > 0 && nums[i] == nums[i-1]) continue;
        int l = i + 1, r = nums.size() - 1;
        while (l < r) {
            int sum = nums[i] + nums[l] + nums[r];
            if (sum == 0) {
                ans.push_back({nums[i], nums[l++], nums[r--]});
                while (l < r && nums[l] == nums[l-1]) l++;
            } else if (sum < 0) l++;
            else r--;
        }
    }
    return ans;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N<sup>2</sup>) |
| Space Complexity | O(1) (excluding output) |

---

## 💡 Best Practices & Gotchas

- **Sorting the array allows effective duplicates pruning and two-pointer sweeps.**
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
