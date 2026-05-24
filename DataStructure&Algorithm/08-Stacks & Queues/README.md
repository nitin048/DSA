# 📚 Stacks & Queues

## 📚 Section Overview

This section covers **Stacks** and **Queues** - two fundamental linear data structures that follow specific ordering principles. You'll learn LIFO (Last In First Out) and FIFO (First In First Out) concepts, and solve important problems that are frequently asked in technical interviews.

**Lectures:** 61-77 (17 lectures)  
**Difficulty:** Intermediate to Advanced  
**Prerequisites:** Arrays, Linked Lists, Basic Data Structures

---

## 📂 Folder Structure

### **61. Introduction to STACKS**

- **Topics:** Stack basics, LIFO principle, Operations (push, pop, peek, isEmpty)
- **Key Concepts:**
  - Array-based implementation
  - Linked list-based implementation
  - Stack overflow and underflow
  - Time: O(1) for all operations
- **Practice:** Implement stack using array and linked list

### **62. Valid Parentheses | Stack**

- **Topics:** Balanced brackets problem
- **Key Concepts:**
  - Stack for matching pairs
  - Opening brackets push, closing brackets pop
  - Time: O(n), Space: O(n)
- **Practice:** Valid parentheses with multiple types
- **Leetcode:** #20

### **63. Stock Span Problem | Optimal Solution**

- **Topics:** Consecutive smaller elements
- **Key Concepts:**
  - Monotonic stack
  - Store indices instead of values
  - Time: O(n), Space: O(n)
- **Practice:** Daily temperatures problem

### **64. Next Greater Element | Optimal Solution**

- **Topics:** Finding next greater element for each element
- **Key Concepts:**
  - Monotonic decreasing stack
  - Traverse from right to left
  - Time: O(n), Space: O(n)
- **Practice:** Next smaller element
- **Leetcode:** #496, #503

### **65. Previous Smaller Element | Optimal Solution**

- **Topics:** Finding previous smaller element
- **Key Concepts:**
  - Monotonic increasing stack
  - Traverse from left to right
  - Time: O(n), Space: O(n)
- **Practice:** Previous greater element

### **66. Design a Min Stack | Optimal Solution**

- **Topics:** Stack with O(1) getMin operation
- **Key Concepts:**
  - Two stack approach
  - Single stack with min tracking
  - Time: O(1) for all operations
- **Practice:** Max stack design
- **Leetcode:** #155

### **67. Largest Rectangle in Histogram | Best Solution**

- **Topics:** Maximum rectangular area
- **Key Concepts:**
  - Stack to find previous and next smaller
  - Area calculation for each bar
  - Time: O(n), Space: O(n)
- **Practice:** Maximal rectangle in matrix
- **Leetcode:** #84

### **68. Next Greater Element - II | Stack & Queue**

- **Topics:** Circular array next greater element
- **Key Concepts:**
  - Circular traversal using modulo
  - Stack-based approach
  - Time: O(n), Space: O(n)
- **Practice:** Next greater in circular array
- **Leetcode:** #503

### **69. Trapping Rainwater Problem | Optimal Solution**

- **Topics:** Water trapping between bars
- **Key Concepts:**
  - Two pointer approach
  - Stack-based approach
  - Prefix/Suffix max arrays
  - Time: O(n), Space: O(1) or O(n)
- **Practice:** Container with most water
- **Leetcode:** #42

### **70. The Celebrity Problem | Stack & Queue**

- **Topics:** Finding celebrity in a party
- **Key Concepts:**
  - Stack elimination approach
  - Two pointer approach
  - Time: O(n), Space: O(n) or O(1)
- **Practice:** Find the judge

### **71. Implement LRU Cache | Linked List**

- **Topics:** Least Recently Used cache
- **Key Concepts:**
  - Doubly linked list + HashMap
  - O(1) get and put operations
  - Move to front on access
  - Time: O(1), Space: O(capacity)
- **Practice:** LFU Cache
- **Leetcode:** #146

### **72. Queue Data Structure**

- **Topics:** Queue basics, FIFO principle, Operations (enqueue, dequeue, front, isEmpty)
- **Key Concepts:**
  - Array-based implementation
  - Linked list-based implementation
  - Circular queue concept
  - Time: O(1) for all operations
- **Practice:** Implement queue using array and linked list

### **73. Circular Queue in Data Structure**

- **Topics:** Circular queue implementation
- **Key Concepts:**
  - Efficient space utilization
  - Front and rear pointers
  - Modulo arithmetic
  - Time: O(1) for all operations
- **Practice:** Design circular deque
- **Leetcode:** #622

### **74. Implement Queue using Stack & Stack using Queue**

- **Topics:** Data structure conversion
- **Key Concepts:**
  - Two stack approach for queue
  - Two queue approach for stack
  - Amortized O(1) operations
- **Practice:** Implement deque using stacks
- **Leetcode:** #232, #225

### **75. First Unique Character in String**

- **Topics:** Finding first non-repeating character
- **Key Concepts:**
  - Queue + HashMap
  - Frequency counting
  - Time: O(n), Space: O(26) = O(1)
- **Practice:** First unique number in stream
- **Leetcode:** #387

### **76. Sliding Window Maximum | Queue**

- **Topics:** Maximum in each window of size k
- **Key Concepts:**
  - Deque (double-ended queue)
  - Monotonic decreasing deque
  - Time: O(n), Space: O(k)
- **Practice:** Sliding window minimum
- **Leetcode:** #239

### **77. Gas Station | Greedy Approach**

- **Topics:** Circular tour problem
- **Key Concepts:**
  - Greedy algorithm
  - Total gas vs total cost
  - Starting point identification
  - Time: O(n), Space: O(1)
- **Practice:** Circular array problems
- **Leetcode:** #134

---

## 🎯 Learning Path

```
Week 1: Stack Fundamentals
├── Day 1-2: Stack basics, Valid parentheses
├── Day 3-4: Monotonic stack (NGE, PSE, Stock span)
└── Day 5: Min stack, Design problems

Week 2: Advanced Stack Problems
├── Day 1-2: Largest rectangle, Trapping rainwater
├── Day 3: Celebrity problem, LRU Cache
└── Day 4-5: Practice stack problems

Week 3: Queue Fundamentals & Advanced
├── Day 1-2: Queue basics, Circular queue
├── Day 3: Queue using stack, Stack using queue
├── Day 4: Sliding window maximum
└── Day 5: Gas station, Mixed problems
```

---

## 📊 Progress Tracker

| Lecture | Topic                    | Status         | Difficulty | Leetcode   |
| ------- | ------------------------ | -------------- | ---------- | ---------- |
| 61      | Introduction to Stacks   | ⬜ Not Started | ⭐⭐       | -          |
| 62      | Valid Parentheses        | ⬜ Not Started | ⭐⭐       | #20        |
| 63      | Stock Span Problem       | ⬜ Not Started | ⭐⭐⭐     | -          |
| 64      | Next Greater Element     | ⬜ Not Started | ⭐⭐⭐     | #496, #503 |
| 65      | Previous Smaller Element | ⬜ Not Started | ⭐⭐⭐     | -          |
| 66      | Design Min Stack         | ⬜ Not Started | ⭐⭐       | #155       |
| 67      | Largest Rectangle        | ⬜ Not Started | ⭐⭐⭐⭐   | #84        |
| 68      | Next Greater Element II  | ⬜ Not Started | ⭐⭐⭐     | #503       |
| 69      | Trapping Rainwater       | ⬜ Not Started | ⭐⭐⭐⭐   | #42        |
| 70      | Celebrity Problem        | ⬜ Not Started | ⭐⭐⭐     | -          |
| 71      | LRU Cache                | ⬜ Not Started | ⭐⭐⭐⭐   | #146       |
| 72      | Queue Data Structure     | ⬜ Not Started | ⭐⭐       | -          |
| 73      | Circular Queue           | ⬜ Not Started | ⭐⭐       | #622       |
| 74      | Queue/Stack Conversion   | ⬜ Not Started | ⭐⭐       | #232, #225 |
| 75      | First Unique Character   | ⬜ Not Started | ⭐⭐       | #387       |
| 76      | Sliding Window Maximum   | ⬜ Not Started | ⭐⭐⭐⭐   | #239       |
| 77      | Gas Station              | ⬜ Not Started | ⭐⭐⭐     | #134       |

**Legend:** ⬜ Not Started | 🟨 In Progress | ✅ Completed | ⭐ Difficulty

---

## 💻 Code Templates

### **1. Stack Implementation (Array-based)**

```cpp
#include <iostream>
using namespace std;

class Stack {
private:
    int* arr;
    int top;
    int capacity;

public:
    Stack(int size) {
        arr = new int[size];
        capacity = size;
        top = -1;
    }

    ~Stack() {
        delete[] arr;
    }

    void push(int val) {
        if (isFull()) {
            cout << "Stack Overflow!" << endl;
            return;
        }
        arr[++top] = val;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        return arr[top--];
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return arr[top];
    }

    bool isEmpty() {
        return top == -1;
    }

    bool isFull() {
        return top == capacity - 1;
    }

    int size() {
        return top + 1;
    }
};

// Time Complexity: O(1) for all operations
// Space Complexity: O(n)
```

### **2. Stack Implementation (Linked List-based)**

```cpp
class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

class Stack {
private:
    Node* top;
    int count;

public:
    Stack() {
        top = NULL;
        count = 0;
    }

    void push(int val) {
        Node* newNode = new Node(val);
        newNode->next = top;
        top = newNode;
        count++;
    }

    int pop() {
        if (isEmpty()) {
            cout << "Stack Underflow!" << endl;
            return -1;
        }
        Node* temp = top;
        int val = top->data;
        top = top->next;
        delete temp;
        count--;
        return val;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Stack is empty!" << endl;
            return -1;
        }
        return top->data;
    }

    bool isEmpty() {
        return top == NULL;
    }

    int size() {
        return count;
    }
};

// Time Complexity: O(1) for all operations
// Space Complexity: O(n)
```

### **3. Valid Parentheses**

```cpp
#include <stack>
#include <string>
using namespace std;

bool isValid(string s) {
    stack<char> st;

    for (char ch : s) {
        if (ch == '(' || ch == '{' || ch == '[') {
            st.push(ch);
        } else {
            if (st.empty()) return false;

            char top = st.top();
            if ((ch == ')' && top == '(') ||
                (ch == '}' && top == '{') ||
                (ch == ']' && top == '[')) {
                st.pop();
            } else {
                return false;
            }
        }
    }

    return st.empty();
}

// Time Complexity: O(n)
// Space Complexity: O(n)
```

### **4. Next Greater Element**

```cpp
#include <vector>
#include <stack>
using namespace std;

vector<int> nextGreaterElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st;  // Store indices

    // Traverse from right to left
    for (int i = n - 1; i >= 0; i--) {
        // Pop elements smaller than current
        while (!st.empty() && arr[st.top()] <= arr[i]) {
            st.pop();
        }

        // If stack not empty, top is next greater
        if (!st.empty()) {
            result[i] = arr[st.top()];
        }

        st.push(i);
    }

    return result;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
```

### **5. Previous Smaller Element**

```cpp
vector<int> previousSmallerElement(vector<int>& arr) {
    int n = arr.size();
    vector<int> result(n, -1);
    stack<int> st;  // Store indices

    // Traverse from left to right
    for (int i = 0; i < n; i++) {
        // Pop elements greater than or equal to current
        while (!st.empty() && arr[st.top()] >= arr[i]) {
            st.pop();
        }

        // If stack not empty, top is previous smaller
        if (!st.empty()) {
            result[i] = arr[st.top()];
        }

        st.push(i);
    }

    return result;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
```

### **6. Min Stack Design**

```cpp
class MinStack {
private:
    stack<int> st;
    stack<int> minSt;

public:
    MinStack() {}

    void push(int val) {
        st.push(val);

        if (minSt.empty() || val <= minSt.top()) {
            minSt.push(val);
        }
    }

    void pop() {
        if (st.empty()) return;

        if (st.top() == minSt.top()) {
            minSt.pop();
        }
        st.pop();
    }

    int top() {
        return st.top();
    }

    int getMin() {
        return minSt.top();
    }
};

// Time Complexity: O(1) for all operations
// Space Complexity: O(n)
```

### **7. Largest Rectangle in Histogram**

```cpp
int largestRectangleArea(vector<int>& heights) {
    int n = heights.size();
    stack<int> st;
    int maxArea = 0;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && heights[st.top()] > heights[i]) {
            int height = heights[st.top()];
            st.pop();

            int width = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, height * width);
        }
        st.push(i);
    }

    while (!st.empty()) {
        int height = heights[st.top()];
        st.pop();

        int width = st.empty() ? n : n - st.top() - 1;
        maxArea = max(maxArea, height * width);
    }

    return maxArea;
}

// Time Complexity: O(n)
// Space Complexity: O(n)
```

### **8. Trapping Rainwater (Two Pointer)**

```cpp
int trap(vector<int>& height) {
    int n = height.size();
    if (n == 0) return 0;

    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int water = 0;

    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax) {
                leftMax = height[left];
            } else {
                water += leftMax - height[left];
            }
            left++;
        } else {
            if (height[right] >= rightMax) {
                rightMax = height[right];
            } else {
                water += rightMax - height[right];
            }
            right--;
        }
    }

    return water;
}

// Time Complexity: O(n)
// Space Complexity: O(1)
```

### **9. Queue Implementation (Array-based)**

```cpp
class Queue {
private:
    int* arr;
    int front, rear;
    int capacity;
    int count;

public:
    Queue(int size) {
        arr = new int[size];
        capacity = size;
        front = 0;
        rear = -1;
        count = 0;
    }

    ~Queue() {
        delete[] arr;
    }

    void enqueue(int val) {
        if (isFull()) {
            cout << "Queue Overflow!" << endl;
            return;
        }
        rear = (rear + 1) % capacity;
        arr[rear] = val;
        count++;
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue Underflow!" << endl;
            return -1;
        }
        int val = arr[front];
        front = (front + 1) % capacity;
        count--;
        return val;
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is empty!" << endl;
            return -1;
        }
        return arr[front];
    }

    bool isEmpty() {
        return count == 0;
    }

    bool isFull() {
        return count == capacity;
    }

    int size() {
        return count;
    }
};

// Time Complexity: O(1) for all operations
// Space Complexity: O(n)
```

### **10. LRU Cache**

```cpp
#include <unordered_map>
using namespace std;

class LRUCache {
private:
    class Node {
    public:
        int key, value;
        Node *prev, *next;
        Node(int k, int v) : key(k), value(v), prev(NULL), next(NULL) {}
    };

    int capacity;
    unordered_map<int, Node*> cache;
    Node *head, *tail;

    void addNode(Node* node) {
        node->next = head->next;
        node->prev = head;
        head->next->prev = node;
        head->next = node;
    }

    void removeNode(Node* node) {
        node->prev->next = node->next;
        node->next->prev = node->prev;
    }

    void moveToHead(Node* node) {
        removeNode(node);
        addNode(node);
    }

    Node* popTail() {
        Node* node = tail->prev;
        removeNode(node);
        return node;
    }

public:
    LRUCache(int cap) {
        capacity = cap;
        head = new Node(0, 0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->prev = head;
    }

    int get(int key) {
        if (cache.find(key) == cache.end()) {
            return -1;
        }
        Node* node = cache[key];
        moveToHead(node);
        return node->value;
    }

    void put(int key, int value) {
        if (cache.find(key) != cache.end()) {
            Node* node = cache[key];
            node->value = value;
            moveToHead(node);
        } else {
            Node* node = new Node(key, value);
            cache[key] = node;
            addNode(node);

            if (cache.size() > capacity) {
                Node* tail = popTail();
                cache.erase(tail->key);
                delete tail;
            }
        }
    }
};

// Time Complexity: O(1) for get and put
// Space Complexity: O(capacity)
```

### **11. Implement Queue using Stacks**

```cpp
class MyQueue {
private:
    stack<int> input, output;

public:
    MyQueue() {}

    void push(int x) {
        input.push(x);
    }

    int pop() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        int val = output.top();
        output.pop();
        return val;
    }

    int peek() {
        if (output.empty()) {
            while (!input.empty()) {
                output.push(input.top());
                input.pop();
            }
        }
        return output.top();
    }

    bool empty() {
        return input.empty() && output.empty();
    }
};

// Time Complexity: O(1) amortized for all operations
// Space Complexity: O(n)
```

### **12. Sliding Window Maximum (Deque)**

```cpp
#include <deque>
vector<int> maxSlidingWindow(vector<int>& nums, int k) {
    deque<int> dq;  // Store indices
    vector<int> result;

    for (int i = 0; i < nums.size(); i++) {
        // Remove elements outside window
        if (!dq.empty() && dq.front() == i - k) {
            dq.pop_front();
        }

        // Remove smaller elements from back
        while (!dq.empty() && nums[dq.back()] < nums[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        // Add to result when window is complete
        if (i >= k - 1) {
            result.push_back(nums[dq.front()]);
        }
    }

    return result;
}

// Time Complexity: O(n)
// Space Complexity: O(k)
```

---

## 📊 Time & Space Complexity Analysis

| Operation        | Stack | Queue | Deque |
| ---------------- | ----- | ----- | ----- |
| **Push/Enqueue** | O(1)  | O(1)  | O(1)  |
| **Pop/Dequeue**  | O(1)  | O(1)  | O(1)  |
| **Peek/Front**   | O(1)  | O(1)  | O(1)  |
| **Search**       | O(n)  | O(n)  | O(n)  |
| **Space**        | O(n)  | O(n)  | O(n)  |

### **Common Algorithm Complexities**

| Algorithm            | Time | Space | Technique         |
| -------------------- | ---- | ----- | ----------------- |
| Valid Parentheses    | O(n) | O(n)  | Stack matching    |
| Next Greater Element | O(n) | O(n)  | Monotonic stack   |
| Previous Smaller     | O(n) | O(n)  | Monotonic stack   |
| Min Stack            | O(1) | O(n)  | Auxiliary stack   |
| Largest Rectangle    | O(n) | O(n)  | Stack + area calc |
| Trapping Rainwater   | O(n) | O(1)  | Two pointers      |
| LRU Cache            | O(1) | O(n)  | HashMap + DLL     |
| Sliding Window Max   | O(n) | O(k)  | Monotonic deque   |

---

## 💡 Pro Tips

### **Stack Tips:**

1. **Use stack for matching** - Parentheses, brackets, tags
2. **Monotonic stack** - NGE, PSE, histogram problems
3. **Stack for reversal** - Reverse string, array
4. **DFS uses stack** - Explicit or implicit (recursion)
5. **Undo/Redo operations** - Browser history, text editors
6. **Expression evaluation** - Infix, postfix, prefix

### **Queue Tips:**

1. **Use queue for ordering** - FIFO operations
2. **BFS uses queue** - Level order traversal
3. **Circular queue** - Efficient space utilization
4. **Deque for sliding window** - Maximum/minimum in window
5. **Priority queue** - For scheduling, Dijkstra's algorithm

### **Common Patterns:**

- **Monotonic stack** - Maintain increasing/decreasing order
- **Two stacks** - For queue implementation, min/max tracking
- **Stack + HashMap** - For O(1) operations
- **Deque** - For problems needing both ends access
- **Circular buffer** - For efficient queue implementation

### **Common Mistakes:**

- ❌ Not checking empty before pop/peek
- ❌ Stack overflow in array-based implementation
- ❌ Forgetting to update front/rear in circular queue
- ❌ Not handling edge cases (empty, single element)
- ❌ Using wrong data structure (stack vs queue)
- ❌ Memory leaks in linked list implementation

---

## 🎯 Practice Problems

### **Easy:**

1. Implement Stack using Queues (Leetcode #225)
2. Implement Queue using Stacks (Leetcode #232)
3. Valid Parentheses (Leetcode #20)
4. Min Stack (Leetcode #155)
5. Baseball Game (Leetcode #682)

### **Medium:**

1. Daily Temperatures (Leetcode #739)
2. Next Greater Element I & II (Leetcode #496, #503)
3. Largest Rectangle in Histogram (Leetcode #84)
4. Trapping Rain Water (Leetcode #42)
5. LRU Cache (Leetcode #146)
6. Sliding Window Maximum (Leetcode #239)
7. Decode String (Leetcode #394)
8. Asteroid Collision (Leetcode #735)

### **Hard:**

1. Maximal Rectangle (Leetcode #85)
2. Basic Calculator (Leetcode #224)
3. Longest Valid Parentheses (Leetcode #32)
4. LFU Cache (Leetcode #460)

---

## 🌟 Interview Tips

### **Common Interview Questions:**

1. Explain the difference between stack and queue
2. When would you use a stack vs a queue?
3. How do you implement a queue using stacks?
4. What is a monotonic stack and when is it useful?
5. Explain the LRU cache implementation
6. How does a circular queue work?
7. What is a deque and its advantages?

### **What Interviewers Look For:**

- ✅ Understanding of LIFO and FIFO principles
- ✅ Ability to choose right data structure
- ✅ Knowledge of monotonic stack pattern
- ✅ Implementation skills (array vs linked list)
- ✅ Edge case handling
- ✅ Time/space complexity analysis

### **Interview Strategy:**

1. **Clarify the problem** - Ask about constraints
2. **Think about ordering** - LIFO or FIFO?
3. **Consider monotonic stack** - For NGE/PSE type problems
4. **Draw examples** - Visualize stack/queue operations
5. **Handle edge cases** - Empty, single element, overflow
6. **Optimize space** - Can you use O(1) space?

---

## 📖 Additional Resources

- **Visualizations:** [VisuAlgo - Stack & Queue](https://visualgo.net/en/list)
- **Practice:** [LeetCode Stack Problems](https://leetcode.com/tag/stack/)
- **Practice:** [LeetCode Queue Problems](https://leetcode.com/tag/queue/)
- **Tutorial:** [GeeksforGeeks Stack](https://www.geeksforgeeks.org/stack-data-structure/)

---

## ✅ Section Completion Checklist

- [ ] Implement stack using array and linked list
- [ ] Implement queue using array and linked list
- [ ] Understand monotonic stack pattern
- [ ] Solve valid parentheses problem
- [ ] Master Next Greater Element pattern
- [ ] Solve Largest Rectangle in Histogram
- [ ] Implement LRU Cache
- [ ] Understand sliding window maximum with deque
- [ ] Solve at least 10 stack/queue problems on Leetcode
- [ ] Complete all hard problems (Trapping Rainwater, LRU Cache)

---

**Happy Coding! 📚**

_Remember: Stack = LIFO, Queue = FIFO. Choose wisely based on the problem requirements!_
