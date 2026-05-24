# ⛰️ Heaps - Quick Reference

**Priority operations!** 🎯

---

## 📋 What is a Heap?

### **Definition:**

A **heap** is a **complete binary tree** that satisfies the **heap property**:

- **Max Heap:** Parent ≥ Children (root is maximum)
- **Min Heap:** Parent ≤ Children (root is minimum)

Heaps are typically implemented using **arrays** for efficiency.

### **Real-World Analogy:**

- **Priority queue** 🎫 - VIP gets served first
- **Emergency room** 🏥 - Critical patients first
- **Task scheduler** ⏰ - High priority tasks first
- **Leaderboard** 🏆 - Top scores at the top
- **Merge sorted streams** 📊 - Always pick smallest/largest

### **Heap Visualization:**

```
Max Heap:
       50
      /  \
    30    40
   / \    /
  10 20  35

Array: [50, 30, 40, 10, 20, 35]
Index:  0   1   2   3   4   5

Min Heap:
       10
      /  \
    20    30
   / \    /
  40 50  35

Array: [10, 20, 30, 40, 50, 35]
```

### **Array Representation:**

```
For node at index i:
- Parent: (i - 1) / 2
- Left child: 2 * i + 1
- Right child: 2 * i + 2

Example (0-indexed):
       0
      / \
     1   2
    / \ / \
   3  4 5  6

Node 1: parent = (1-1)/2 = 0
        left = 2*1+1 = 3
        right = 2*1+2 = 4
```

---

## 🎯 Why Use Heaps?

### **Advantages:**

✅ **Fast access to min/max** - O(1) to peek  
✅ **Efficient insert/delete** - O(log n)  
✅ **Space efficient** - Array implementation  
✅ **Priority queue** - Natural implementation  
✅ **Partial sorting** - Find top K elements

### **Disadvantages:**

❌ **No fast search** - O(n) to find arbitrary element  
❌ **Not fully sorted** - Only root is guaranteed min/max  
❌ **No efficient update** - Need to delete and re-insert

### **When to Use:**

- **Priority queue** - Process by priority
- **Top K elements** - Find K largest/smallest
- **Median finding** - Running median
- **Merge K sorted** - Merge multiple sorted arrays
- **Scheduling** - Task scheduling by priority
- **Dijkstra's algorithm** - Shortest path

### **When NOT to Use:**

- Need **full sorting** (use sort algorithm)
- Need **fast search** (use hash table or BST)
- Need **range queries** (use segment tree)

---

## 📊 Heap Operations

### **1. Insert (Push):**

```
1. Add element at end
2. Bubble up (heapify up)

Insert 60 into max heap:
       50              50              60
      /  \            /  \            /  \
    30    40   →    30    40   →    30    50
   /              /  \            /  \    /
  10             10   60         10   30 40

Time: O(log n)
```

### **2. Extract Min/Max (Pop):**

```
1. Remove root
2. Move last element to root
3. Bubble down (heapify down)

Extract max from [50, 30, 40, 10]:
       50              10              40
      /  \            /  \            /  \
    30    40   →    30    40   →    30    10
   /
  10

Time: O(log n)
```

### **3. Peek:**

```
Return root element
Time: O(1)
```

### **4. Heapify:**

```
Convert array to heap
Time: O(n)
```

---

## 📊 Complexity Analysis

| Operation       | Time Complexity | Space |
| --------------- | --------------- | ----- |
| Insert          | O(log n)        | O(1)  |
| Extract Min/Max | O(log n)        | O(1)  |
| Peek Min/Max    | O(1)            | O(1)  |
| Delete          | O(log n)        | O(1)  |
| Build Heap      | O(n)            | O(1)  |
| Heapify         | O(log n)        | O(1)  |
| Search          | O(n)            | O(1)  |

---

## 🎯 Heap vs Other Structures

| Feature          | Heap     | BST      | Array (sorted) |
| ---------------- | -------- | -------- | -------------- |
| Find min/max     | O(1)     | O(log n) | O(1)           |
| Insert           | O(log n) | O(log n) | O(n)           |
| Delete min/max   | O(log n) | O(log n) | O(n)           |
| Search arbitrary | O(n)     | O(log n) | O(log n)       |
| Space            | O(n)     | O(n)     | O(n)           |
| Sorted order     | No       | Yes      | Yes            |

---

## 📋 Heap Basics

```cpp
#include <queue>

// Max heap (default)
priority_queue<int> maxHeap;

// Min heap
priority_queue<int, vector<int>, greater<int>> minHeap;

maxHeap.push(x);         // O(log n)
maxHeap.pop();           // O(log n)
maxHeap.top();           // O(1)
maxHeap.size();          // O(1)
```

---

## 💡 Common Problems

### **1. Kth Largest Element:**

```cpp
int findKthLargest(vector<int>& nums, int k) {
    priority_queue<int, vector<int>, greater<int>> minHeap;
    for (int num : nums) {
        minHeap.push(num);
        if (minHeap.size() > k)
            minHeap.pop();
    }
    return minHeap.top();
}
```

### **2. Top K Frequent Elements:**

```cpp
vector<int> topKFrequent(vector<int>& nums, int k) {
    unordered_map<int, int> freq;
    for (int num : nums) freq[num]++;

    auto cmp = [](pair<int,int>& a, pair<int,int>& b) {
        return a.second > b.second;
    };
    priority_queue<pair<int,int>, vector<pair<int,int>>, decltype(cmp)> minHeap(cmp);

    for (auto& [num, count] : freq) {
        minHeap.push({num, count});
        if (minHeap.size() > k)
            minHeap.pop();
    }

    vector<int> result;
    while (!minHeap.empty()) {
        result.push_back(minHeap.top().first);
        minHeap.pop();
    }
    return result;
}
```

### **3. Merge K Sorted Lists:**

```cpp
ListNode* mergeKLists(vector<ListNode*>& lists) {
    auto cmp = [](ListNode* a, ListNode* b) {
        return a->val > b->val;
    };
    priority_queue<ListNode*, vector<ListNode*>, decltype(cmp)> minHeap(cmp);

    for (ListNode* list : lists) {
        if (list) minHeap.push(list);
    }

    ListNode dummy(0);
    ListNode* tail = &dummy;

    while (!minHeap.empty()) {
        ListNode* node = minHeap.top();
        minHeap.pop();
        tail->next = node;
        tail = tail->next;
        if (node->next) minHeap.push(node->next);
    }

    return dummy.next;
}
```

---

## 🔥 Use Cases

1. **Top K elements** - Kth largest/smallest
2. **Merge sorted** - K sorted arrays/lists
3. **Median** - Running median
4. **Scheduling** - Task priority

---

**Next:** [Searching →](15-Searching.md)
