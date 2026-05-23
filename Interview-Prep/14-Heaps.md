# ⛰️ Heaps - Quick Reference

**Priority operations!** 🎯

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
