# 📊 Sorting Algorithms - Quick Reference

**Order matters!** 🎯

---

## 📋 What is Sorting?

### **Definition:**

**Sorting** is the process of arranging elements in a specific order (ascending or descending). It's one of the most studied problems in computer science.

### **Real-World Analogy:**

- **Library books** 📚 - Arranged by author/title
- **Playing cards** 🃏 - Sorting hand by rank
- **Leaderboard** 🏆 - Ranking by score
- **File explorer** 📁 - Sort by name/date/size
- **Contact list** 📞 - Alphabetical order

### **Why Sorting Matters:**

1. **Enables binary search** - O(log n) search requires sorted data
2. **Data organization** - Easier to find and analyze
3. **Preprocessing** - Many algorithms need sorted input
4. **User experience** - Humans prefer ordered data
5. **Optimization** - Some problems easier with sorted data

---

## 🎯 Sorting Algorithm Categories

### **1. Comparison-Based Sorts:**

Use comparisons to determine order

- **Lower bound:** Ω(n log n)
- Examples: Quick Sort, Merge Sort, Heap Sort

### **2. Non-Comparison Sorts:**

Use properties of data (not comparisons)

- **Can be faster:** O(n) possible
- Examples: Counting Sort, Radix Sort, Bucket Sort

### **3. Stable vs Unstable:**

**Stable:** Preserves relative order of equal elements

- Merge Sort, Insertion Sort, Bubble Sort

**Unstable:** May change relative order

- Quick Sort, Heap Sort, Selection Sort

### **4. In-Place vs Out-of-Place:**

**In-Place:** O(1) extra space

- Quick Sort, Heap Sort, Insertion Sort

**Out-of-Place:** O(n) extra space

- Merge Sort, Counting Sort

---

## 📊 Sorting Algorithm Comparison

| Algorithm      | Best       | Average    | Worst      | Space    | Stable | In-Place |
| -------------- | ---------- | ---------- | ---------- | -------- | ------ | -------- |
| Bubble Sort    | O(n)       | O(n²)      | O(n²)      | O(1)     | Yes    | Yes      |
| Selection Sort | O(n²)      | O(n²)      | O(n²)      | O(1)     | No     | Yes      |
| Insertion Sort | O(n)       | O(n²)      | O(n²)      | O(1)     | Yes    | Yes      |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) | O(n)     | Yes    | No       |
| Quick Sort     | O(n log n) | O(n log n) | O(n²)      | O(log n) | No     | Yes      |
| Heap Sort      | O(n log n) | O(n log n) | O(n log n) | O(1)     | No     | Yes      |
| Counting Sort  | O(n + k)   | O(n + k)   | O(n + k)   | O(k)     | Yes    | No       |
| Radix Sort     | O(d·n)     | O(d·n)     | O(d·n)     | O(n + k) | Yes    | No       |
| Bucket Sort    | O(n + k)   | O(n + k)   | O(n²)      | O(n)     | Yes    | No       |

k = range of input, d = number of digits

---

## 🎯 Which Sort to Use?

### **Small Arrays (n < 10):**

**Insertion Sort** - Simple, low overhead

### **Nearly Sorted Data:**

**Insertion Sort** - O(n) for nearly sorted

### **General Purpose:**

**Quick Sort** - Fast average case, in-place

### **Guaranteed O(n log n):**

**Merge Sort** or **Heap Sort** - No worst case O(n²)

### **Need Stability:**

**Merge Sort** - Stable and O(n log n)

### **Limited Memory:**

**Heap Sort** - O(1) space, O(n log n) time

### **Small Range of Values:**

**Counting Sort** - O(n + k) when k is small

### **Large Integers:**

**Radix Sort** - O(d·n) for d-digit numbers

---

## 🎯 Sorting Algorithm Deep Dive

### **1. Quick Sort:**

**How it works:**

1. Choose pivot
2. Partition: smaller left, larger right
3. Recursively sort both halves

**Pros:** ✅ Fast average O(n log n), ✅ In-place  
**Cons:** ❌ Worst case O(n²), ❌ Unstable

**When to use:** General purpose, average case matters

### **2. Merge Sort:**

**How it works:**

1. Divide array in half
2. Recursively sort both halves
3. Merge sorted halves

**Pros:** ✅ Guaranteed O(n log n), ✅ Stable  
**Cons:** ❌ O(n) extra space

**When to use:** Need stability, worst case matters

### **3. Heap Sort:**

**How it works:**

1. Build max heap
2. Repeatedly extract max and heapify

**Pros:** ✅ O(n log n) guaranteed, ✅ O(1) space  
**Cons:** ❌ Unstable, ❌ Not cache-friendly

**When to use:** Limited memory, need O(n log n)

### **4. Insertion Sort:**

**How it works:**

1. Start with first element (sorted)
2. Insert each element into sorted portion

**Pros:** ✅ Simple, ✅ O(n) for nearly sorted, ✅ Stable  
**Cons:** ❌ O(n²) worst case

**When to use:** Small arrays, nearly sorted data

### **5. Counting Sort:**

**How it works:**

1. Count frequency of each value
2. Calculate cumulative counts
3. Place elements in correct position

**Pros:** ✅ O(n + k) time, ✅ Stable  
**Cons:** ❌ Only for integers, ❌ O(k) space

**When to use:** Small range of integers

---

## 🎯 Sorting Stability Example

```
Input: [(4,a), (3,b), (4,c), (3,d)]
Sort by first element:

Stable Sort:
[(3,b), (3,d), (4,a), (4,c)]
 ↑ b before d (preserved)
              ↑ a before c (preserved)

Unstable Sort:
[(3,d), (3,b), (4,c), (4,a)]
 ↑ d before b (NOT preserved)
              ↑ c before a (NOT preserved)
```

**Why stability matters:**

- Sorting by multiple keys
- Maintaining original order for equal elements
- Database queries with multiple ORDER BY

---

## 🎯 Practical Sorting Tips

### **C++ STL sort():**

```cpp
// Uses IntroSort (hybrid):
// - Quick Sort for most cases
// - Heap Sort if recursion too deep
// - Insertion Sort for small subarrays

sort(arr.begin(), arr.end());  // O(n log n) average
```

**IntroSort combines best of:**

- Quick Sort (fast average)
- Heap Sort (good worst case)
- Insertion Sort (fast for small n)

### **When to Implement Your Own:**

- **Educational purposes** - Learn algorithms
- **Specific constraints** - Special requirements
- **Optimization** - Domain-specific optimizations
- **Embedded systems** - Control over memory/performance

### **When to Use STL:**

- **Production code** - Well-tested, optimized
- **General purpose** - Works for most cases
- **Time constraints** - Don't reinvent the wheel

---

## 📋 Common Sorts

### **1. Quick Sort:**

```cpp
void quickSort(vector<int>& arr, int low, int high) {
    if (low < high) {
        int pivot = partition(arr, low, high);
        quickSort(arr, low, pivot - 1);
        quickSort(arr, pivot + 1, high);
    }
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[high];
    int i = low - 1;

    for (int j = low; j < high; j++) {
        if (arr[j] < pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return i + 1;
}
// Time: O(n log n) average, O(n²) worst
// Space: O(log n)
```

### **2. Merge Sort:**

```cpp
void mergeSort(vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

void merge(vector<int>& arr, int left, int mid, int right) {
    vector<int> temp(right - left + 1);
    int i = left, j = mid + 1, k = 0;

    while (i <= mid && j <= right) {
        if (arr[i] <= arr[j]) temp[k++] = arr[i++];
        else temp[k++] = arr[j++];
    }

    while (i <= mid) temp[k++] = arr[i++];
    while (j <= right) temp[k++] = arr[j++];

    for (int i = 0; i < temp.size(); i++) {
        arr[left + i] = temp[i];
    }
}
// Time: O(n log n), Space: O(n)
```

### **3. Heap Sort:**

```cpp
void heapSort(vector<int>& arr) {
    int n = arr.size();

    // Build max heap
    for (int i = n / 2 - 1; i >= 0; i--)
        heapify(arr, n, i);

    // Extract elements
    for (int i = n - 1; i > 0; i--) {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

void heapify(vector<int>& arr, int n, int i) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[left] > arr[largest])
        largest = left;
    if (right < n && arr[right] > arr[largest])
        largest = right;

    if (largest != i) {
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}
// Time: O(n log n), Space: O(1)
```

---

## 🎯 STL Sort

```cpp
#include <algorithm>

// Ascending
sort(arr.begin(), arr.end());

// Descending
sort(arr.begin(), arr.end(), greater<int>());

// Custom comparator
sort(arr.begin(), arr.end(), [](int a, int b) {
    return a > b;
});

// Partial sort (first k elements)
partial_sort(arr.begin(), arr.begin() + k, arr.end());

// Stable sort (maintains relative order)
stable_sort(arr.begin(), arr.end());
```

---

## 📊 Complexity Comparison

| Algorithm      | Best       | Average    | Worst      | Space    | Stable |
| -------------- | ---------- | ---------- | ---------- | -------- | ------ |
| Quick Sort     | O(n log n) | O(n log n) | O(n²)      | O(log n) | No     |
| Merge Sort     | O(n log n) | O(n log n) | O(n log n) | O(n)     | Yes    |
| Heap Sort      | O(n log n) | O(n log n) | O(n log n) | O(1)     | No     |
| Bubble Sort    | O(n)       | O(n²)      | O(n²)      | O(1)     | Yes    |
| Insertion Sort | O(n)       | O(n²)      | O(n²)      | O(1)     | Yes    |

---

**Next:** [Recursion →](17-Recursion.md)
