# 📊 Sorting Algorithms - Quick Reference

**Order matters!** 🎯

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
