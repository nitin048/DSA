# 📚 Stacks - Quick Reference

**LIFO (Last In, First Out)** 🎯

---

## 📋 Stack Basics

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

---

## 🔥 Common Patterns

1. **Matching pairs** - Parentheses, brackets
2. **Monotonic stack** - Next greater/smaller element
3. **Expression evaluation** - Postfix, infix
4. **Undo operations** - Text editor, browser history

---

**Next:** [Queues →](10-Queues.md)
