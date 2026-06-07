# 🇳🇱 Sort Array 0s 1s 2s DNF Algorithm - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Sort Array 0s 1s 2s DNF Algorithm?](#-what-is-sort-array-0s-1s-2s-dnf-algorithm)
2. [Why Sort Array 0s 1s 2s DNF Algorithm?](#-why-sort-array-0s-1s-2s-dnf-algorithm)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Sort Array 0s 1s 2s DNF Algorithm?

### **Concept Overview:**
Sorting 0s, 1s, and 2s in Linear Time.

### **Real-Life Analogy:**
Think of the Dutch National Flag partition like sorting **mixed colored marbles** (Red, White, and Blue) into three distinct bowls. You pick marbles one by one, tossing Red to the left, Blue to the right, and leaving White in the middle.

---

## 💡 Why Sort Array 0s 1s 2s DNF Algorithm?

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

- **Dutch National Flag:** Uses three pointers: `low`, `mid`, and `high`.
- Partition array boundaries such that all 0s are < low, 1s between low & mid, 2s > high.

---

## 💻 C++ Implementation Reference

```cpp
void sort012(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;
    while (mid <= high) {
        if (nums[mid] == 0) swap(nums[low++], nums[mid++]);
        else if (nums[mid] == 1) mid++;
        else swap(nums[mid], nums[high--]);
    }
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(N) (Single Pass) |
| Space Complexity | O(1) |

---

## 💡 Best Practices & Gotchas

- **Avoid counting frequency and writing; DNF performs elements swapping in a single pass.**
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
