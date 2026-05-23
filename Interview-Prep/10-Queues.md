# 📋 Queues - Quick Reference

**FIFO (First In, First Out)** 🎯

---

## 📋 What is a Queue?

### **Definition:**

A queue is a **linear data structure** that follows the **FIFO (First In, First Out)** principle. The first element added is the first one to be removed.

### **Real-World Analogy:**

- Line at ticket counter 🎫
- Print queue 🖨️
- Call center queue ☎️
- Task scheduling

### **Key Operations:**

1. **Enqueue/Push** - Add element to rear (O(1))
2. **Dequeue/Pop** - Remove element from front (O(1))
3. **Front** - View front element (O(1))
4. **Back** - View rear element (O(1))
5. **Empty** - Check if queue is empty (O(1))

### **Visualization:**

```
Enqueue(1), Enqueue(2), Enqueue(3):

Front → │ 1 │ 2 │ 3 │ ← Rear

Dequeue():

Front → │ 2 │ 3 │ ← Rear (1 removed)
```

---

## 📋 Queue Implementation

### **Using Array (Circular):**

```cpp
class Queue {
private:
    int arr[100];
    int frontIndex, rearIndex, count;
public:
    Queue() : frontIndex(0), rearIndex(-1), count(0) {}

    void enqueue(int x) {
        if (count >= 100) {
            cout << "Queue full!" << endl;
            return;
        }
        rearIndex = (rearIndex + 1) % 100;
        arr[rearIndex] = x;
        count++;
    }

    void dequeue() {
        if (count == 0) {
            cout << "Queue empty!" << endl;
            return;
        }
        frontIndex = (frontIndex + 1) % 100;
        count--;
    }

    int front() {
        if (count == 0) return -1;
        return arr[frontIndex];
    }

    bool empty() {
        return count == 0;
    }
};
```

### **Using STL:**

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

## 🎯 Types of Queues

### **1. Simple Queue:**

Standard FIFO queue.

### **2. Circular Queue:**

Last position connects to first position.

### **3. Priority Queue:**

Elements have priorities, highest priority dequeued first.

```cpp
priority_queue<int> pq;  // Max heap
priority_queue<int, vector<int>, greater<int>> minPq;  // Min heap
```

### **4. Deque (Double-Ended Queue):**

Can insert/remove from both ends.

```cpp
deque<int> dq;
dq.push_front(1);   // Add to front
dq.push_back(2);    // Add to back
dq.pop_front();     // Remove from front
dq.pop_back();      // Remove from back
```

---

## 🎯 When to Use Queue?

### **Use Queue When:**

✅ Need **FIFO** behavior
✅ **BFS** traversal
✅ **Level-order** processing
✅ **Task scheduling**
✅ **Buffer** management
✅ **Breadth-first** exploration

### **Don't Use When:**

❌ Need **LIFO** behavior (use stack)
❌ Need **priority-based** access (use priority queue)
❌ Need **random access** (use array/vector)

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

### **4. Design Circular Queue:**

```cpp
class MyCircularQueue {
private:
    vector<int> data;
    int front, rear, size, capacity;
public:
    MyCircularQueue(int k) : data(k), front(0), rear(-1), size(0), capacity(k) {}

    bool enQueue(int value) {
        if (isFull()) return false;
        rear = (rear + 1) % capacity;
        data[rear] = value;
        size++;
        return true;
    }

    bool deQueue() {
        if (isEmpty()) return false;
        front = (front + 1) % capacity;
        size--;
        return true;
    }

    int Front() {
        return isEmpty() ? -1 : data[front];
    }

    int Rear() {
        return isEmpty() ? -1 : data[rear];
    }

    bool isEmpty() {
        return size == 0;
    }

    bool isFull() {
        return size == capacity;
    }
};
```

---

## 🔥 Common Queue Patterns

### **Pattern 1: BFS Traversal**

```cpp
void bfs(Node* root) {
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        Node* node = q.front();
        q.pop();

        // Process node
        process(node);

        // Add children
        for (Node* child : node->children) {
            q.push(child);
        }
    }
}
```

### **Pattern 2: Level-by-Level Processing**

```cpp
void levelOrder(Node* root) {
    queue<Node*> q;
    q.push(root);

    while (!q.empty()) {
        int levelSize = q.size();

        // Process entire level
        for (int i = 0; i < levelSize; i++) {
            Node* node = q.front();
            q.pop();

            // Process node
            if (node->left) q.push(node->left);
            if (node->right) q.push(node->right);
        }
    }
}
```

### **Pattern 3: Sliding Window with Queue**

```cpp
// Use deque for sliding window maximum
deque<int> dq;
for (int i = 0; i < n; i++) {
    // Remove elements outside window
    while (!dq.empty() && dq.front() <= i - k)
        dq.pop_front();

    // Maintain decreasing order
    while (!dq.empty() && arr[dq.back()] < arr[i])
        dq.pop_back();

    dq.push_back(i);
}
```

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Enqueue:** O(1)
- **Dequeue:** O(1)
- **Front:** O(1)
- **Back:** O(1)
- **Empty:** O(1)

### **Space Complexity:**

- **O(n)** where n is number of elements

---

## 🔥 Must Remember

### **Key Concepts:**

1. **FIFO** - First In, First Out
2. **O(1)** operations for enqueue, dequeue
3. **BFS** uses queue
4. **Level-order** traversal uses queue
5. **Circular queue** prevents wasted space

### **Common Use Cases:**

- ✅ BFS traversal
- ✅ Level-order processing
- ✅ Task scheduling
- ✅ Buffer management
- ✅ Printer queue
- ✅ Call center systems

### **Queue vs Stack:**

| Feature | Queue           | Stack     |
| ------- | --------------- | --------- |
| Order   | FIFO            | LIFO      |
| Add     | Rear            | Top       |
| Remove  | Front           | Top       |
| Use     | BFS, Scheduling | DFS, Undo |

### **Tips:**

- ✅ Use queue for BFS
- ✅ Use deque for sliding window
- ✅ Use priority queue for scheduling
- ✅ Check empty before front/back

---

**Next:** [Trees →](11-Trees.md)
