# 📊 Arrays - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is an Array?](#-what-is-an-array)
2. [Why Arrays?](#-why-arrays)
3. [Array Basics](#-array-basics)
4. [Memory Representation](#-memory-representation)
5. [Array Operations](#-array-operations)
6. [Types of Arrays](#-types-of-arrays)
7. [Array vs Other Data Structures](#-array-vs-other-data-structures)
8. [Common Problems](#-common-problems)
9. [Time & Space Complexity](#-time--space-complexity)
10. [Practice Problems](#-practice-problems)

---

## 🎯 What is an Array?

### **Simple Definition:**

An **array** is a collection of elements (values) stored at **contiguous memory locations**. All elements are of the **same data type** and can be accessed using an **index**.

### **Real-Life Analogy:**

Think of an array like a **row of lockers** in a school:

- Each locker has a **number** (index)
- Each locker can store **one item** (element)
- All lockers are **next to each other** (contiguous)
- You can quickly find any locker by its **number**

```
Locker Array:
┌─────┬─────┬─────┬─────┬─────┐
│  📚 │  📝 │  🎒 │  📱 │  💻 │
├─────┼─────┼─────┼─────┼─────┤
│  0  │  1  │  2  │  3  │  4  │  ← Index
└─────┴─────┴─────┴─────┴─────┘
```

### **Key Characteristics:**

1. **Fixed Size** - Size is determined at creation
2. **Same Data Type** - All elements must be of same type
3. **Contiguous Memory** - Elements stored next to each other
4. **Index-Based Access** - Access elements using index (0-based)
5. **Random Access** - Can access any element directly in O(1) time

---

## 💡 Why Arrays?

### **Advantages:**

✅ **Fast Access** - O(1) time to access any element  
✅ **Cache Friendly** - Contiguous memory improves performance  
✅ **Simple** - Easy to understand and use  
✅ **Memory Efficient** - No extra overhead  
✅ **Predictable** - Fixed size, known memory usage

### **Disadvantages:**

❌ **Fixed Size** - Cannot grow or shrink dynamically  
❌ **Insertion/Deletion** - Expensive operations (O(n))  
❌ **Wasted Space** - If not fully utilized  
❌ **Same Type** - Cannot store different data types

### **When to Use Arrays:**

- When you know the size in advance
- When you need fast random access
- When memory is limited
- When you need cache-friendly data structure
- For implementing other data structures (stack, queue, heap)

---

## 📖 Array Basics

### **1. Declaration**

```cpp
// Syntax: dataType arrayName[size];

int numbers[5];           // Array of 5 integers
float prices[10];         // Array of 10 floats
char letters[26];         // Array of 26 characters
double values[100];       // Array of 100 doubles
```

### **2. Initialization**

```cpp
// Method 1: Initialize at declaration
int arr1[5] = {10, 20, 30, 40, 50};

// Method 2: Partial initialization (rest are 0)
int arr2[5] = {10, 20};  // {10, 20, 0, 0, 0}

// Method 3: Initialize all to 0
int arr3[5] = {0};       // {0, 0, 0, 0, 0}

// Method 4: Size inferred from initializer
int arr4[] = {1, 2, 3, 4, 5};  // Size = 5

// Method 5: Initialize all to same value (C++11)
int arr5[5] = {};        // {0, 0, 0, 0, 0}
```

### **3. Accessing Elements**

```cpp
int arr[5] = {10, 20, 30, 40, 50};

// Access using index (0-based)
cout << arr[0];  // Output: 10 (first element)
cout << arr[2];  // Output: 30 (third element)
cout << arr[4];  // Output: 50 (last element)

// Modify elements
arr[1] = 25;     // Change second element to 25
arr[0] = arr[0] + 5;  // Increment first element by 5
```

### **4. Array Size**

```cpp
int arr[5] = {10, 20, 30, 40, 50};

// Get size using sizeof
int size = sizeof(arr) / sizeof(arr[0]);
cout << "Size: " << size;  // Output: 5

// Note: sizeof(arr) = total bytes
//       sizeof(arr[0]) = bytes per element
```

---

## 🧠 Memory Representation

### **How Arrays are Stored in Memory:**

```cpp
int arr[5] = {10, 20, 30, 40, 50};
```

**Memory Layout:**

```
Address:    1000   1004   1008   1012   1016
           ┌──────┬──────┬──────┬──────┬──────┐
Value:     │  10  │  20  │  30  │  40  │  50  │
           └──────┴──────┴──────┴──────┴──────┘
Index:        0      1      2      3      4
```

**Key Points:**

- Each `int` takes 4 bytes (on most systems)
- Elements are stored **consecutively**
- Address of `arr[i]` = Base Address + (i × size of element)
- Example: `arr[2]` is at address `1000 + (2 × 4) = 1008`

### **Address Calculation:**

```cpp
int arr[5] = {10, 20, 30, 40, 50};

cout << &arr[0];  // Base address (e.g., 1000)
cout << &arr[1];  // Base + 4 (e.g., 1004)
cout << &arr[2];  // Base + 8 (e.g., 1008)

// Formula: Address of arr[i] = &arr[0] + (i × sizeof(datatype))
```

---

## ⚙️ Array Operations

### **1. Traversal (Visiting all elements)**

```cpp
int arr[5] = {10, 20, 30, 40, 50};

// Method 1: Using index
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

// Method 2: Using range-based for loop (C++11)
for (int element : arr) {
    cout << element << " ";
}

// Method 3: Using pointers
for (int* ptr = arr; ptr < arr + 5; ptr++) {
    cout << *ptr << " ";
}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

### **2. Insertion**

#### **a) Insert at End**

```cpp
int arr[10] = {10, 20, 30, 40, 50};
int n = 5;  // Current size

// Insert 60 at end
arr[n] = 60;
n++;

// Array: {10, 20, 30, 40, 50, 60}
```

**Time Complexity:** O(1)

#### **b) Insert at Beginning**

```cpp
int arr[10] = {10, 20, 30, 40, 50};
int n = 5;

// Insert 5 at beginning
for (int i = n; i > 0; i--) {
    arr[i] = arr[i - 1];  // Shift elements right
}
arr[0] = 5;
n++;

// Array: {5, 10, 20, 30, 40, 50}
```

**Time Complexity:** O(n)

#### **c) Insert at Position**

```cpp
int arr[10] = {10, 20, 30, 40, 50};
int n = 5;
int pos = 2;  // Insert at index 2

// Insert 25 at position 2
for (int i = n; i > pos; i--) {
    arr[i] = arr[i - 1];  // Shift elements right
}
arr[pos] = 25;
n++;

// Array: {10, 20, 25, 30, 40, 50}
```

**Time Complexity:** O(n)

---

### **3. Deletion**

#### **a) Delete from End**

```cpp
int arr[5] = {10, 20, 30, 40, 50};
int n = 5;

// Delete last element
n--;

// Array: {10, 20, 30, 40} (size = 4)
```

**Time Complexity:** O(1)

#### **b) Delete from Beginning**

```cpp
int arr[5] = {10, 20, 30, 40, 50};
int n = 5;

// Delete first element
for (int i = 0; i < n - 1; i++) {
    arr[i] = arr[i + 1];  // Shift elements left
}
n--;

// Array: {20, 30, 40, 50} (size = 4)
```

**Time Complexity:** O(n)

#### **c) Delete from Position**

```cpp
int arr[5] = {10, 20, 30, 40, 50};
int n = 5;
int pos = 2;  // Delete from index 2

// Delete element at position 2
for (int i = pos; i < n - 1; i++) {
    arr[i] = arr[i + 1];  // Shift elements left
}
n--;

// Array: {10, 20, 40, 50} (size = 4)
```

**Time Complexity:** O(n)

---

### **4. Searching**

#### **a) Linear Search**

```cpp
int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;  // Return index if found
        }
    }
    return -1;  // Return -1 if not found
}

// Usage
int arr[5] = {10, 20, 30, 40, 50};
int index = linearSearch(arr, 5, 30);
cout << "Found at index: " << index;  // Output: 2
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

#### **b) Binary Search (for sorted arrays)**

```cpp
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == key) {
            return mid;  // Found
        } else if (arr[mid] < key) {
            left = mid + 1;  // Search right half
        } else {
            right = mid - 1;  // Search left half
        }
    }
    return -1;  // Not found
}

// Usage
int arr[5] = {10, 20, 30, 40, 50};  // Must be sorted
int index = binarySearch(arr, 5, 30);
cout << "Found at index: " << index;  // Output: 2
```

**Time Complexity:** O(log n)  
**Space Complexity:** O(1)

---

### **5. Sorting**

#### **a) Bubble Sort**

```cpp
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}
```

**Time Complexity:** O(n²)

#### **b) Using STL sort()**

```cpp
#include <algorithm>

int arr[5] = {50, 20, 40, 10, 30};
sort(arr, arr + 5);  // Sorts in ascending order

// Array: {10, 20, 30, 40, 50}
```

**Time Complexity:** O(n log n)

---

### **6. Reversing an Array**

```cpp
void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;

    while (start < end) {
        // Swap elements
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

// Usage
int arr[5] = {10, 20, 30, 40, 50};
reverseArray(arr, 5);
// Array: {50, 40, 30, 20, 10}
```

**Time Complexity:** O(n)  
**Space Complexity:** O(1)

---

## 📦 Types of Arrays

### **1. One-Dimensional Array**

```cpp
int arr[5] = {10, 20, 30, 40, 50};

// Linear structure
// Index: 0   1   2   3   4
// Value: 10  20  30  40  50
```

### **2. Two-Dimensional Array (Matrix)**

```cpp
int matrix[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12}
};

// Access: matrix[row][col]
cout << matrix[1][2];  // Output: 7

// Traversal
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 4; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
```

**Memory Layout (Row-Major Order):**

```
1  2  3  4  5  6  7  8  9  10  11  12
```

### **3. Multi-Dimensional Array**

```cpp
int arr3D[2][3][4];  // 3D array

// Access: arr3D[depth][row][col]
arr3D[0][1][2] = 100;
```

---

## 🆚 Array vs Other Data Structures

| Feature               | Array      | Linked List      | Vector         | Dynamic Array  |
| --------------------- | ---------- | ---------------- | -------------- | -------------- |
| **Size**              | Fixed      | Dynamic          | Dynamic        | Dynamic        |
| **Memory**            | Contiguous | Non-contiguous   | Contiguous     | Contiguous     |
| **Access Time**       | O(1)       | O(n)             | O(1)           | O(1)           |
| **Insert at End**     | O(1)\*     | O(1)             | O(1) amortized | O(1) amortized |
| **Insert at Start**   | O(n)       | O(1)             | O(n)           | O(n)           |
| **Delete**            | O(n)       | O(1)\*\*         | O(n)           | O(n)           |
| **Memory Overhead**   | None       | Extra (pointers) | Small          | Small          |
| **Cache Performance** | Excellent  | Poor             | Excellent      | Excellent      |

\*If space available  
\*\*If node pointer known

---

## 🎯 Common Array Problems

### **1. Find Maximum Element**

```cpp
int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}
```

### **2. Find Minimum Element**

```cpp
int findMin(int arr[], int n) {
    int minVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < minVal) {
            minVal = arr[i];
        }
    }
    return minVal;
}
```

### **3. Sum of Array Elements**

```cpp
int arraySum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    return sum;
}
```

### **4. Check if Array is Sorted**

```cpp
bool isSorted(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}
```

### **5. Remove Duplicates (Sorted Array)**

```cpp
int removeDuplicates(int arr[], int n) {
    if (n == 0) return 0;

    int j = 0;  // Index for unique elements
    for (int i = 1; i < n; i++) {
        if (arr[i] != arr[j]) {
            j++;
            arr[j] = arr[i];
        }
    }
    return j + 1;  // New size
}
```

### **6. Rotate Array**

```cpp
void rotateLeft(int arr[], int n, int k) {
    k = k % n;  // Handle k > n

    // Reverse first k elements
    reverse(arr, arr + k);

    // Reverse remaining elements
    reverse(arr + k, arr + n);

    // Reverse entire array
    reverse(arr, arr + n);
}
```

---

## ⏱️ Time & Space Complexity

### **Operation Complexities:**

| Operation              | Time Complexity | Space Complexity |
| ---------------------- | --------------- | ---------------- |
| **Access**             | O(1)            | O(1)             |
| **Search (Unsorted)**  | O(n)            | O(1)             |
| **Search (Sorted)**    | O(log n)        | O(1)             |
| **Insert at End**      | O(1)\*          | O(1)             |
| **Insert at Start**    | O(n)            | O(1)             |
| **Insert at Middle**   | O(n)            | O(1)             |
| **Delete from End**    | O(1)            | O(1)             |
| **Delete from Start**  | O(n)            | O(1)             |
| **Delete from Middle** | O(n)            | O(1)             |
| **Traversal**          | O(n)            | O(1)             |
| **Reverse**            | O(n)            | O(1)             |
| **Sort**               | O(n log n)      | O(1) or O(n)     |

\*If space is available

---

## 💻 Complete Code Examples

### **Example 1: Basic Array Operations**

```cpp
#include <iostream>
using namespace std;

int main() {
    // Declaration and initialization
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5;

    // Display array
    cout << "Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Find sum
    int sum = 0;
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    cout << "Sum: " << sum << endl;

    // Find max
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    cout << "Max: " << maxVal << endl;

    return 0;
}
```

### **Example 2: Array with Functions**

```cpp
#include <iostream>
using namespace std;

void displayArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int findMax(int arr[], int n) {
    int maxVal = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }
    return maxVal;
}

void reverseArray(int arr[], int n) {
    int start = 0, end = n - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[5] = {10, 50, 30, 20, 40};

    cout << "Original: ";
    displayArray(arr, 5);

    cout << "Max: " << findMax(arr, 5) << endl;

    reverseArray(arr, 5);
    cout << "Reversed: ";
    displayArray(arr, 5);

    return 0;
}
```

---

## 🎯 Practice Problems

### **Easy:**

1. Find the largest element in an array
2. Find the second largest element
3. Check if array is sorted
4. Reverse an array
5. Count even and odd numbers
6. Find sum of array elements
7. Linear search
8. Remove duplicates from sorted array

### **Medium:**

1. Rotate array by k positions
2. Find missing number in array (1 to n)
3. Move all zeros to end
4. Find pair with given sum (Two Sum)
5. Merge two sorted arrays
6. Find majority element
7. Maximum subarray sum (Kadane's Algorithm)
8. Stock buy and sell problem

### **Hard:**

1. Trapping rainwater
2. Product of array except self
3. Maximum product subarray
4. Longest consecutive sequence
5. Container with most water

---

## 💡 Pro Tips

### **Best Practices:**

✅ Always check array bounds before accessing  
✅ Initialize arrays to avoid garbage values  
✅ Use meaningful variable names  
✅ Comment complex logic  
✅ Consider using vectors for dynamic size  
✅ Use range-based for loops when possible (C++11)

### **Common Mistakes:**

❌ Array index out of bounds  
❌ Not initializing array elements  
❌ Confusing array size with last index  
❌ Modifying array while iterating  
❌ Not handling empty arrays  
❌ Integer overflow in sum calculations

### **Optimization Tips:**

🚀 Use binary search for sorted arrays  
🚀 Avoid unnecessary array copies  
🚀 Use two-pointer technique when possible  
🚀 Consider space-time tradeoffs  
🚀 Use bit manipulation for flags

---

## 📖 Additional Resources

- **Visualizations:** [VisuAlgo - Array](https://visualgo.net/en/array)
- **Practice:** [LeetCode Array Problems](https://leetcode.com/tag/array/)
- **Tutorial:** [GeeksforGeeks Arrays](https://www.geeksforgeeks.org/array-data-structure/)

---

## ✅ Checklist

- [ ] Understand what arrays are
- [ ] Know how to declare and initialize arrays
- [ ] Master array traversal
- [ ] Learn insertion and deletion operations
- [ ] Understand linear and binary search
- [ ] Practice sorting algorithms
- [ ] Solve at least 10 array problems
- [ ] Understand time and space complexity
- [ ] Learn common array patterns
- [ ] Master two-pointer technique

---

**Happy Coding! 📊**

_Remember: Arrays are the foundation of data structures. Master them, and you'll excel in DSA!_
