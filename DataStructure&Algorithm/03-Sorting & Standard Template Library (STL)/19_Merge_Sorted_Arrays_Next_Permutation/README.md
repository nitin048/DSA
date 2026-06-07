# 🇳🇱 Merge Sorted Arrays Next Permutation - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Merge Sorted Arrays Next Permutation?](#-what-is-merge-sorted-arrays-next-permutation)
2. [Why Merge Sorted Arrays Next Permutation?](#-why-merge-sorted-arrays-next-permutation)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Merge Sorted Arrays Next Permutation?

### **Concept Overview:**
Merging Sorted Arrays and Finding Lexicographical Next Permutation.

### **Real-Life Analogy:**
Think of the Dutch National Flag partition like sorting **mixed colored marbles** (Red, White, and Blue) into three distinct bowls. You pick marbles one by one, tossing Red to the left, Blue to the right, and leaving White in the middle.

---

## 💡 Why Merge Sorted Arrays Next Permutation?

### **Advantages:**
- Extremely efficient for sorting inputs with low numbers of unique values
- Does not require full sorting comparisons

### **Disadvantages / Challenges:**
- Only useful for discrete key distributions

### **When to Use:**
- When sorting elements with three unique keys (e.g. 0s, 1s, and 2s)
- To group items around a pivot value

---

## 📖 Core Concepts

- **Merge Sorted:** Combine two arrays in-place or with auxiliary memory.
- **Next Permutation:** Pivot search from end, swap with next greater, and reverse suffix.

---

## 💻 C++ Implementation Reference

```cpp
void nextPermutation(vector<int>& nums) {
    int i = nums.size() - 2;
    while (i >= 0 && nums[i] >= nums[i+1]) i--;
    if (i >= 0) {
        int j = nums.size() - 1;
        while (nums[j] <= nums[i]) j--;
        swap(nums[i], nums[j]);
    }
    reverse(nums.begin() + i + 1, nums.end());
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Next Permutation | O(N) time, O(1) space |
| Merge Arrays | O(N + M) |

---

## 💡 Best Practices & Gotchas

- **C++ standard library provides this direct utility as `next_permutation()`.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Partition 0s and 1s in an array
- [ ] Sort colors (0s, 1s, 2s)

### **Medium Problems:**
- [ ] Dutch National Flag 3-pointer logic updates
- [ ] Next Permutation breakpoint analysis

### **Hard Problems:**
- [ ] Partition elements around multiple dynamic pivot bounds

---

## ✅ Checklist

- [ ] Set correct initial values for pointers (low=0, mid=0, high=N-1)
- [ ] Handle pointer increments correctly on element swaps
- [ ] Avoid out of bounds pointer crossings

---

**Happy Coding! 🇳🇱**
