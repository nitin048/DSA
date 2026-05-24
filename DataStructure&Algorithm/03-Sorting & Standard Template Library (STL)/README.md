# 🔄 Sorting & Standard Template Library (STL)

## 📚 Complete Section Overview

This section contains **5 comprehensive lectures** covering fundamental sorting algorithms, advanced sorting techniques, and complete C++ STL guide.

---

## 📂 Folder Structure

### **17. Sorting Algorithms | Bubble Sort, Selection Sort & Insertion Sort**

- Bubble Sort algorithm
- Selection Sort algorithm
- Insertion Sort algorithm
- Time & Space complexity
- When to use each algorithm
- Code implementations

### **18. Sort an Array of 0s, 1s & 2s | DNF Sorting Algorithm**

- Dutch National Flag (DNF) problem
- Three-way partitioning
- Leetcode 75 solution
- Optimal O(n) solution
- Single pass algorithm

### **19. Merge Sorted Arrays Problem and Next Permutation Problem**

- Merge two sorted arrays
- In-place merging
- Next Permutation algorithm
- Lexicographic ordering
- Optimal solutions

### **20. C++ STL Complete Tutorial | Standard Template Library - One Shot**

- Containers (vector, list, deque, set, map)
- Iterators
- Algorithms (sort, find, binary_search)
- Functors
- Pairs and Tuples
- Complete STL reference

### **21. How to setup C++ compiler on Mac ? | Software Installation**

- Installing Xcode Command Line Tools
- Installing Homebrew
- Installing GCC/G++
- VS Code setup
- Running C++ programs on Mac

---

## 🎯 Key Concepts Covered

✅ Basic Sorting Algorithms  
✅ Time & Space Complexity  
✅ DNF Algorithm (3-way partitioning)  
✅ Merge operations  
✅ Permutation algorithms  
✅ Complete C++ STL  
✅ Development environment setup  
✅ Optimization techniques

---

## 📝 Sorting Algorithms Comparison

| Algorithm      | Best  | Average | Worst | Space | Stable |
| -------------- | ----- | ------- | ----- | ----- | ------ |
| Bubble Sort    | O(n)  | O(n²)   | O(n²) | O(1)  | Yes    |
| Selection Sort | O(n²) | O(n²)   | O(n²) | O(1)  | No     |
| Insertion Sort | O(n)  | O(n²)   | O(n²) | O(1)  | Yes    |
| DNF Sort       | O(n)  | O(n)    | O(n)  | O(1)  | Yes    |

---

## 📊 Progress Tracker

- [ ] 17. Sorting Algorithms (Bubble, Selection, Insertion)
- [ ] 18. Sort 0s, 1s & 2s | DNF Algorithm
- [ ] 19. Merge Sorted Arrays & Next Permutation
- [ ] 20. C++ STL Complete Tutorial
- [ ] 21. Setup C++ Compiler on Mac

**Progress: 0/5 completed** 🎯

---

## 💡 Important Sorting Concepts

### **When to Use Which Sort?**

**Bubble Sort:**

- Small datasets
- Nearly sorted data
- Educational purposes

**Selection Sort:**

- Small datasets
- Memory writes are costly
- Simple implementation needed

**Insertion Sort:**

- Small datasets
- Nearly sorted data
- Online sorting (data comes in stream)

**DNF Sort:**

- Array with 3 distinct values
- Partitioning problems
- Dutch National Flag problem

---

## 🎓 C++ STL Quick Reference

### **Containers:**

```cpp
// Sequence Containers
vector<int> v;
list<int> l;
deque<int> d;

// Associative Containers
set<int> s;
map<int, string> m;
unordered_map<int, string> um;

// Container Adapters
stack<int> st;
queue<int> q;
priority_queue<int> pq;
```

### **Common Algorithms:**

```cpp
sort(v.begin(), v.end());
reverse(v.begin(), v.end());
find(v.begin(), v.end(), target);
binary_search(v.begin(), v.end(), target);
max_element(v.begin(), v.end());
min_element(v.begin(), v.end());
```

---

## 📝 Practice Problems

### **Sorting:**

- Sort 0s, 1s & 2s (Leetcode 75)
- Merge Sorted Arrays
- Next Permutation

### **STL Practice:**

- Use vector operations
- Implement using map/set
- Practice STL algorithms

---

## 🚀 Learning Path

### **Phase 1: Basic Sorting**

1. Understand Bubble Sort
2. Learn Selection Sort
3. Master Insertion Sort
4. Compare all three

### **Phase 2: Advanced Sorting**

5. DNF Algorithm
6. Merge operations
7. Permutation problems

### **Phase 3: STL Mastery**

8. Learn all STL containers
9. Practice STL algorithms
10. Setup development environment

---

## 💻 Code Templates

### **Bubble Sort:**

```cpp
void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
```

### **Selection Sort:**

```cpp
void selectionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n-1; i++) {
        int minIdx = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        swap(arr[i], arr[minIdx]);
    }
}
```

### **Insertion Sort:**

```cpp
void insertionSort(vector<int>& arr) {
    int n = arr.size();
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}
```

### **DNF Sort (0s, 1s, 2s):**

```cpp
void sortColors(vector<int>& nums) {
    int low = 0, mid = 0, high = nums.size() - 1;

    while (mid <= high) {
        if (nums[mid] == 0) {
            swap(nums[low], nums[mid]);
            low++;
            mid++;
        }
        else if (nums[mid] == 1) {
            mid++;
        }
        else {
            swap(nums[mid], nums[high]);
            high--;
        }
    }
}
```

---

## 🔧 Mac Setup Guide

### **Quick Setup Commands:**

```bash
# Install Xcode Command Line Tools
xcode-select --install

# Install Homebrew
/bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"

# Install GCC
brew install gcc

# Verify installation
g++ --version
```

---

## 📈 Complexity Summary

| Operation      | Time       | Space    |
| -------------- | ---------- | -------- |
| Bubble Sort    | O(n²)      | O(1)     |
| Selection Sort | O(n²)      | O(1)     |
| Insertion Sort | O(n²)      | O(1)     |
| DNF Sort       | O(n)       | O(1)     |
| STL sort()     | O(n log n) | O(log n) |

---

**Happy Learning! 🎉✨**
