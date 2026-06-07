# 🔍 Search in Rotated Sorted Array - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Search in Rotated Sorted Array?](#-what-is-search-in-rotated-sorted-array)
2. [Why Search in Rotated Sorted Array?](#-why-search-in-rotated-sorted-array)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Search in Rotated Sorted Array?

### **Concept Overview:**
Searching in a Pivot-Rotated Sorted Array.

### **Real-Life Analogy:**
Think of Binary Search like looking up a word in a printed **paper dictionary**. You don't read page by page from the beginning. You open the exact middle page, compare your target word alphabet, and discard the entire left or right half instantly.

---

## 💡 Why Search in Rotated Sorted Array?

### **Advantages:**
- Extremely fast search speed for large inputs
- O(1) constant auxiliary space usage
- Adaptable to various bound-checks patterns

### **Disadvantages / Challenges:**
- Requires the overhead of keeping arrays sorted
- Only supports linear random-access structures (no linked lists)

### **When to Use:**
- When searching sorted linear arrays
- To look up search space boundaries
- For database index lookups

---

## 📖 Core Concepts

- **Pivot Rotation:** Array is rotated at some pivot point.
- **Logic:** At least one half of the array (left or right of mid) is always sorted.
- Identify the sorted half, then check if target is inside its bounds.

---

## 💻 C++ Implementation Reference

```cpp
int searchRotated(vector<int>& nums, int target) {
    int s = 0, e = nums.size() - 1;
    while (s <= e) {
        int mid = s + (e - s) / 2;
        if (nums[mid] == target) return mid;
        if (nums[s] <= nums[mid]) {
            if (target >= nums[s] && target < nums[mid]) e = mid - 1;
            else s = mid + 1;
        } else {
            if (target > nums[mid] && target <= nums[e]) s = mid + 1;
            else e = mid - 1;
        }
    }
    return -1;
}
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Time Complexity | O(log N) |
| Space Complexity | O(1) |

---

## 💡 Best Practices & Gotchas

- **If array has duplicates, worst case falls back to O(N) linear time.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Standard Binary Search lookup
- [ ] Find first or last index of duplicate keys

### **Medium Problems:**
- [ ] Search in rotated sorted array
- [ ] Search in 2D sorted matrix
- [ ] Find peak element in mountain array

### **Hard Problems:**
- [ ] Median of two sorted arrays
- [ ] Search range queries in duplicate-heavy indexes

---

## ✅ Checklist

- [ ] Compute mid with start + (end-start)/2 to avoid integer overflow
- [ ] Master boundary updates (low = mid + 1 vs high = mid - 1)
- [ ] Implement bounds checks (lower_bound, upper_bound)

---

**Happy Coding! 🔍**
