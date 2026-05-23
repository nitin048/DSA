# 📋 Queues - Quick Reference

**FIFO (First In, First Out)** 🎯

---

## 📋 Queue Basics

```cpp
#include <queue>

queue<int> q;
q.push(1);               // O(1)
q.pop();                 // O(1)
q.front();               // O(1)
q.back();                // O(1)
q.empty();               // O(1)
q.size();                // O(1)
```

---

## 🎯 Common Problems

### **1. Implement Queue using Stacks:**

```cpp
class MyQueue {
    stack<int> s1, s2;
public:
    void push(int x) {
        s1.push(x);
    }

    int pop() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        int val = s2.top();
        s2.pop();
        return val;
    }

    int peek() {
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
        return s2.top();
    }

    bool empty() {
        return s1.empty() && s2.empty();
    }
};
```

### **2. Sliding Window Maximum:**

```cpp
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        // Remove elements outside window
        while (!dq.empty() && dq.front() <= i - k)
            dq.pop_front();

        // Remove smaller elements
        while (!dq.empty() && nums[dq.back()] < nums[i])
            dq.pop_back();

        dq.push_back(i);

        if (i >= k - 1)
            result.push_back(nums[dq.front()]);
    }
    return result;
}
```

### **3. Number of Recent Calls:**

```cpp
class RecentCounter {
    queue<int> q;
public:
    int ping(int t) {
        q.push(t);
        while (q.front() < t - 3000)
            q.pop();
        return q.size();
    }
};
```

---

## 🔥 Common Patterns

1. **BFS traversal** - Level order, shortest path
2. **Sliding window** - Maximum in window
3. **Task scheduling** - Round robin
4. **Stream processing** - Recent elements

---

**Next:** [Trees →](11-Trees.md)
