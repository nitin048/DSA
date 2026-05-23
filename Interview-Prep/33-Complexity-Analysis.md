# ⏱️ Time & Space Complexity - Quick Reference

**Master Big-O notation for interviews!** 🎯

---

## 📋 Table of Contents

1. [What is Complexity?](#-what-is-complexity)
2. [Big-O Notation](#-big-o-notation)
3. [Common Complexities](#-common-complexities)
4. [How to Calculate](#-how-to-calculate)
5. [Space Complexity](#-space-complexity)
6. [Interview Tips](#-interview-tips)

---

## 🤔 What is Complexity?

**Time Complexity:** How runtime grows with input size
**Space Complexity:** How memory usage grows with input size

### **Why It Matters:**

- 🎯 Interviews ALWAYS ask for complexity
- 🎯 Shows you understand efficiency
- 🎯 Helps choose best algorithm

---

## 📊 Big-O Notation

### **Definition:**

Big-O describes the **worst-case** growth rate

### **Common Notations:**

```
O(1)        → Constant
O(log n)    → Logarithmic
O(n)        → Linear
O(n log n)  → Linearithmic
O(n²)       → Quadratic
O(n³)       → Cubic
O(2ⁿ)       → Exponential
O(n!)       → Factorial
```

### **Growth Comparison:**

```
For n = 100:

O(1)        = 1
O(log n)    = 7
O(n)        = 100
O(n log n)  = 700
O(n²)       = 10,000
O(n³)       = 1,000,000
O(2ⁿ)       = 1,267,650,600,228,229,401,496,703,205,376
O(n!)       = 9.3 × 10¹⁵⁷
```

### **Visual Comparison:**

```
Time →
│
│                                              O(n!)
│                                         O(2ⁿ)
│                                    O(n³)
│                              O(n²)
│                        O(n log n)
│                  O(n)
│            O(log n)
│      O(1)
└────────────────────────────────────────────────→
                    Input Size (n)
```

---

## 🎯 Common Complexities

### **O(1) - Constant Time** ⚡

**Examples:**

```cpp
// Array access
int x = arr[5];  // O(1)

// Hash table lookup
map[key];  // O(1) average

// Arithmetic operations
int sum = a + b;  // O(1)
```

**When:** Direct access, no loops

---

### **O(log n) - Logarithmic Time** 📉

**Examples:**

```cpp
// Binary search
int binarySearch(vector<int>& arr, int target) {
    int left = 0, right = arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}  // O(log n)

// Balanced tree operations
set.insert(x);  // O(log n)
```

**When:** Dividing problem in half each time

---

### **O(n) - Linear Time** 📈

**Examples:**

```cpp
// Array traversal
for (int i = 0; i < n; i++) {
    cout << arr[i];
}  // O(n)

// Finding max
int findMax(vector<int>& arr) {
    int max = arr[0];
    for (int x : arr) {
        if (x > max) max = x;
    }
    return max;
}  // O(n)
```

**When:** Single loop through data

---

### **O(n log n) - Linearithmic Time** 📊

**Examples:**

```cpp
// Merge sort
void mergeSort(vector<int>& arr);  // O(n log n)

// Quick sort (average case)
void quickSort(vector<int>& arr);  // O(n log n)

// Heap sort
void heapSort(vector<int>& arr);  // O(n log n)

// Sorting in C++
sort(arr.begin(), arr.end());  // O(n log n)
```

**When:** Efficient sorting algorithms

---

### **O(n²) - Quadratic Time** 📈📈

**Examples:**

```cpp
// Nested loops
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        // O(1) operation
    }
}  // O(n²)

// Bubble sort
void bubbleSort(vector<int>& arr);  // O(n²)

// Selection sort
void selectionSort(vector<int>& arr);  // O(n²)
```

**When:** Nested loops, brute force

---

### **O(2ⁿ) - Exponential Time** 💥

**Examples:**

```cpp
// Recursive fibonacci (naive)
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}  // O(2ⁿ)

// All subsets
void generateSubsets(vector<int>& arr);  // O(2ⁿ)
```

**When:** Recursive branching, avoid if possible!

---

### **O(n!) - Factorial Time** 💥💥

**Examples:**

```cpp
// All permutations
void generatePermutations(vector<int>& arr);  // O(n!)

// Traveling salesman (brute force)
int tsp(vector<vector<int>>& graph);  // O(n!)
```

**When:** All permutations, avoid if possible!

---

## 🧮 How to Calculate

### **Rule 1: Drop Constants**

```cpp
// O(2n) → O(n)
for (int i = 0; i < n; i++) { }
for (int i = 0; i < n; i++) { }
// Total: O(n)

// O(n/2) → O(n)
for (int i = 0; i < n; i += 2) { }
// Total: O(n)
```

### **Rule 2: Drop Non-Dominant Terms**

```cpp
// O(n² + n) → O(n²)
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) { }
}
for (int i = 0; i < n; i++) { }
// Total: O(n²)

// O(n + log n) → O(n)
for (int i = 0; i < n; i++) { }
while (n > 0) { n /= 2; }
// Total: O(n)
```

### **Rule 3: Different Inputs = Different Variables**

```cpp
// O(a + b), NOT O(n)
for (int i = 0; i < a; i++) { }
for (int j = 0; j < b; j++) { }

// O(a * b), NOT O(n²)
for (int i = 0; i < a; i++) {
    for (int j = 0; j < b; j++) { }
}
```

### **Rule 4: Recursive Complexity**

```cpp
// O(branches^depth)

// Binary tree traversal
void traverse(Node* root) {
    if (!root) return;
    traverse(root->left);   // 2 branches
    traverse(root->right);
}
// O(2^depth) = O(n) for n nodes
```

---

## 💾 Space Complexity

### **What Counts:**

- ✅ Variables created
- ✅ Data structures used
- ✅ Recursive call stack
- ❌ Input size (doesn't count)

### **Examples:**

#### **O(1) Space:**

```cpp
int sum(vector<int>& arr) {
    int total = 0;  // O(1) space
    for (int x : arr) {
        total += x;
    }
    return total;
}
```

#### **O(n) Space:**

```cpp
vector<int> copy(vector<int>& arr) {
    vector<int> result(arr.size());  // O(n) space
    for (int i = 0; i < arr.size(); i++) {
        result[i] = arr[i];
    }
    return result;
}
```

#### **O(n) Space (Recursion):**

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n-1);
}
// Call stack: O(n) space
```

---

## 🎯 Common Data Structure Complexities

### **Array:**

| Operation       | Time | Space |
| --------------- | ---- | ----- |
| Access          | O(1) | -     |
| Search          | O(n) | -     |
| Insert (end)    | O(1) | -     |
| Insert (middle) | O(n) | -     |
| Delete          | O(n) | -     |

### **Vector (Dynamic Array):**

| Operation | Time           | Space |
| --------- | -------------- | ----- |
| Access    | O(1)           | -     |
| Push back | O(1) amortized | -     |
| Pop back  | O(1)           | -     |
| Insert    | O(n)           | -     |
| Delete    | O(n)           | -     |

### **Linked List:**

| Operation     | Time | Space |
| ------------- | ---- | ----- |
| Access        | O(n) | -     |
| Search        | O(n) | -     |
| Insert (head) | O(1) | -     |
| Insert (tail) | O(1) | -     |
| Delete        | O(1) | -     |

### **Stack/Queue:**

| Operation    | Time | Space |
| ------------ | ---- | ----- |
| Push/Enqueue | O(1) | -     |
| Pop/Dequeue  | O(1) | -     |
| Peek         | O(1) | -     |

### **Hash Table (unordered_map):**

| Operation | Average | Worst |
| --------- | ------- | ----- |
| Insert    | O(1)    | O(n)  |
| Delete    | O(1)    | O(n)  |
| Search    | O(1)    | O(n)  |

### **Binary Search Tree:**

| Operation | Average  | Worst |
| --------- | -------- | ----- |
| Insert    | O(log n) | O(n)  |
| Delete    | O(log n) | O(n)  |
| Search    | O(log n) | O(n)  |

### **Balanced BST (map/set):**

| Operation | Time     |
| --------- | -------- |
| Insert    | O(log n) |
| Delete    | O(log n) |
| Search    | O(log n) |

### **Heap:**

| Operation      | Time     |
| -------------- | -------- |
| Insert         | O(log n) |
| Delete Max/Min | O(log n) |
| Get Max/Min    | O(1)     |
| Heapify        | O(n)     |

---

## 🎯 Interview Tips

### **Always State Complexity:**

```
"My solution runs in O(n) time and O(1) space."
```

### **Explain Your Reasoning:**

```
"I'm using a hash table for O(1) lookups,
and iterating through the array once,
so the total time complexity is O(n)."
```

### **Common Interview Questions:**

**Q: Can you optimize this?**

- Look for nested loops → Can you use hash table?
- Sorting → Can you avoid it?
- Multiple passes → Can you do it in one pass?

**Q: What's the space complexity?**

- Count all data structures created
- Don't forget recursive call stack!

**Q: What if input is very large?**

- O(n²) might be too slow
- Need O(n) or O(n log n) solution

---

## 🔥 Quick Reference

### **Time Complexity Hierarchy:**

```
O(1) < O(log n) < O(n) < O(n log n) < O(n²) < O(2ⁿ) < O(n!)
```

### **When to Use:**

- **O(1):** Hash tables, direct access
- **O(log n):** Binary search, balanced trees
- **O(n):** Single pass, linear search
- **O(n log n):** Efficient sorting
- **O(n²):** Brute force, small inputs only
- **O(2ⁿ):** Avoid! Use DP instead
- **O(n!):** Avoid! Use backtracking with pruning

### **Optimization Techniques:**

1. **Hash tables** → O(n) instead of O(n²)
2. **Two pointers** → O(n) instead of O(n²)
3. **Binary search** → O(log n) instead of O(n)
4. **Dynamic programming** → O(n) instead of O(2ⁿ)
5. **Sliding window** → O(n) instead of O(n²)

---

## 💡 Practice Problems

1. Find time complexity of nested loops
2. Calculate space complexity with recursion
3. Optimize O(n²) to O(n) using hash table
4. Identify bottlenecks in code
5. Compare different approaches

---

**Remember:** Always analyze and state complexity in interviews! 🎯

**Next:** [Common Questions →](34-Common-Questions.md)
