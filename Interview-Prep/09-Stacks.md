# 📚 Stacks - Quick Reference

**LIFO (Last In, First Out)** 🎯

---

## 📋 What is a Stack?

### **Definition:**

A stack is a **linear data structure** that follows the **LIFO (Last In, First Out)** principle. The last element added is the first one to be removed.

### **Real-World Analogy:**

- Stack of plates 🍽️
- Stack of books 📚
- Browser back button
- Undo/Redo operations

### **Key Operations:**

1. **Push** - Add element to top (O(1))
2. **Pop** - Remove element from top (O(1))
3. **Top/Peek** - View top element (O(1))
4. **Empty** - Check if stack is empty (O(1))

### **Visualization:**

```
Push(1), Push(2), Push(3):

│   3   │ ← Top
│   2   │
│   1   │
└───────┘

Pop():

│   2   │ ← Top (3 removed)
│   1   │
└───────┘
```

---

## 📋 Stack Implementation

### **Using Array:**

```cpp
class Stack {
private:
    int arr[100];
    int topIndex;
public:
    Stack() : topIndex(-1) {}

    void push(int x) {
        if (topIndex >= 99) {
            cout << "Stack overflow!" << endl;
            return;
        }
        arr[++topIndex] = x;
    }

    void pop() {
        if (topIndex < 0) {
            cout << "Stack underflow!" << endl;
            return;
        }
        topIndex--;
    }

    int top() {
        if (topIndex < 0) return -1;
        return arr[topIndex];
    }

    bool empty() {
        return topIndex < 0;
    }
};
```

### **Using STL:**

```cpp
#include <stack>

stack<int> st;
st.push(1);              // O(1)
st.pop();                // O(1)
st.top();                // O(1)
st.empty();              // O(1)
st.size();               // O(1)
```

---

## 🎯 When to Use Stack?

### **Use Stack When:**

✅ Need **LIFO** behavior
✅ **Matching pairs** (parentheses, brackets)
✅ **Backtracking** problems
✅ **Expression evaluation** (postfix, infix)
✅ **Function call management** (recursion)
✅ **Undo/Redo** operations
✅ **DFS** traversal

### **Don't Use When:**

❌ Need **FIFO** behavior (use queue)
❌ Need **random access** (use array/vector)
❌ Need to access middle elements

---

## 🎯 Common Problems

### **1. Valid Parentheses:**

```cpp
bool isValid(string s) {
    stack<char> st;
    unordered_map<char, char> pairs = {
        {')', '('}, {']', '['}, {'}', '{'}
    };

    for (char c : s) {
        if (pairs.count(c)) {
            if (st.empty() || st.top() != pairs[c])
                return false;
            st.pop();
        } else {
            st.push(c);
        }
    }
    return st.empty();
}
```

### **2. Min Stack:**

```cpp
class MinStack {
    stack<int> st, minSt;
public:
    void push(int x) {
        st.push(x);
        if (minSt.empty() || x <= minSt.top())
            minSt.push(x);
    }

    void pop() {
        if (st.top() == minSt.top())
            minSt.pop();
        st.pop();
    }

    int top() { return st.top(); }
    int getMin() { return minSt.top(); }
};
```

### **3. Evaluate Postfix:**

```cpp
int evalRPN(vector<string>& tokens) {
    stack<int> st;
    for (string& s : tokens) {
        if (s == "+" || s == "-" || s == "*" || s == "/") {
            int b = st.top(); st.pop();
            int a = st.top(); st.pop();
            if (s == "+") st.push(a + b);
            else if (s == "-") st.push(a - b);
            else if (s == "*") st.push(a * b);
            else st.push(a / b);
        } else {
            st.push(stoi(s));
        }
    }
    return st.top();
}
```

### **4. Daily Temperatures:**

```cpp
vector<int> dailyTemperatures(vector<int>& T) {
    int n = T.size();
    vector<int> result(n);
    stack<int> st;

    for (int i = 0; i < n; i++) {
        while (!st.empty() && T[i] > T[st.top()]) {
            int idx = st.top();
            st.pop();
            result[idx] = i - idx;
        }
        st.push(i);
    }
    return result;
}
```

### **5. Largest Rectangle in Histogram:**

```cpp
int largestRectangleArea(vector<int>& heights) {
    stack<int> st;
    int maxArea = 0;
    heights.push_back(0);  // Sentinel

    for (int i = 0; i < heights.size(); i++) {
        while (!st.empty() && heights[i] < heights[st.top()]) {
            int h = heights[st.top()];
            st.pop();
            int w = st.empty() ? i : i - st.top() - 1;
            maxArea = max(maxArea, h * w);
        }
        st.push(i);
    }

    return maxArea;
}
```

---

## 🔥 Common Stack Patterns

### **Pattern 1: Matching Pairs**

```cpp
// Use stack to match opening/closing pairs
stack<char> st;
for (char c : s) {
    if (isOpening(c)) st.push(c);
    else if (matches(st.top(), c)) st.pop();
    else return false;
}
return st.empty();
```

### **Pattern 2: Monotonic Stack**

```cpp
// Maintain increasing/decreasing order
stack<int> st;
for (int x : arr) {
    while (!st.empty() && st.top() > x) {
        // Process elements being popped
        st.pop();
    }
    st.push(x);
}
```

### **Pattern 3: Expression Evaluation**

```cpp
// Use two stacks: one for operands, one for operators
stack<int> operands;
stack<char> operators;
// Process based on operator precedence
```

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Push:** O(1)
- **Pop:** O(1)
- **Top:** O(1)
- **Empty:** O(1)

### **Space Complexity:**

- **O(n)** where n is number of elements

### **Amortized Analysis:**

Even though individual operations are O(1), in problems like "Next Greater Element", each element is pushed and popped at most once, giving O(n) total time.

---

## 🔥 Must Remember

### **Key Concepts:**

1. **LIFO** - Last In, First Out
2. **O(1)** operations for push, pop, top
3. **Monotonic stack** for next greater/smaller
4. **Two stacks** for expression evaluation
5. **Stack overflow** - pushing to full stack

### **Common Use Cases:**

- ✅ Parentheses matching
- ✅ Expression evaluation
- ✅ Backtracking
- ✅ Function call stack
- ✅ Undo operations
- ✅ DFS traversal

### **Tips:**

- ✅ Check if stack is empty before pop/top
- ✅ Use monotonic stack for next greater/smaller
- ✅ Consider using deque for more flexibility
- ✅ Stack is perfect for reversing order

---

**Next:** [Queues →](10-Queues.md)
