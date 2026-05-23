# 🔁 Recursion - Quick Reference

**Function calling itself!** 🎯

---

## 📋 What is Recursion?

### **Definition:**

Recursion is a programming technique where a **function calls itself** to solve a problem by breaking it down into smaller, similar subproblems.

### **Key Components:**

1. **Base Case** - Stopping condition (prevents infinite recursion)
2. **Recursive Case** - Function calls itself with modified parameters
3. **Progress** - Each call moves toward base case

### **When to Use:**

- Problem can be broken into **similar subproblems**
- **Tree/graph** traversal
- **Divide and conquer** algorithms
- **Backtracking** problems
- Natural **recursive structure** (factorial, Fibonacci)

---

## 🎯 How Recursion Works

### **Call Stack:**

```
factorial(3)
  ↓
  3 * factorial(2)
        ↓
        2 * factorial(1)
              ↓
              1 (base case)

Stack unwinding:
factorial(1) returns 1
factorial(2) returns 2 * 1 = 2
factorial(3) returns 3 * 2 = 6
```

### **Memory:**

```
Call Stack (grows downward):
┌─────────────────────┐
│  factorial(3)       │
│  n = 3              │
├─────────────────────┤
│  factorial(2)       │
│  n = 2              │
├─────────────────────┤
│  factorial(1)       │
│  n = 1              │ ← Base case reached
└─────────────────────┘

Each call takes O(1) space
Total space: O(depth) = O(n)
```

---

## 📋 Recursion Template

```cpp
returnType recursive(parameters) {
    // Base case - MUST have this!
    if (baseCondition) {
        return baseValue;
    }

    // Recursive case - call itself
    return recursive(modifiedParameters);
}
```

### **Example - Sum of N Numbers:**

```cpp
int sum(int n) {
    // Base case
    if (n == 0) return 0;

    // Recursive case
    return n + sum(n - 1);
}

// sum(3) = 3 + sum(2)
//        = 3 + (2 + sum(1))
//        = 3 + (2 + (1 + sum(0)))
//        = 3 + (2 + (1 + 0))
//        = 6
```

---

## 🎯 Types of Recursion

### **1. Linear Recursion:**

One recursive call per function call.

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
// Call tree: factorial(3) → factorial(2) → factorial(1)
```

### **2. Binary Recursion:**

Two recursive calls per function call.

```cpp
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
// Call tree branches into two at each level
```

### **3. Tail Recursion:**

Recursive call is the **last operation**.

```cpp
// Not tail recursive
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n-1);  // Multiplication after call
}

// Tail recursive
int factorial(int n, int acc = 1) {
    if (n <= 1) return acc;
    return factorial(n-1, n * acc);  // Call is last operation
}
// Tail recursion can be optimized by compiler to iteration
```

### **4. Multiple Recursion:**

More than two recursive calls.

```cpp
void printCombinations(string prefix, string remaining) {
    if (remaining.empty()) {
        cout << prefix << endl;
        return;
    }

    // Multiple recursive calls
    for (int i = 0; i < remaining.length(); i++) {
        printCombinations(prefix + remaining[i],
                         remaining.substr(0, i) + remaining.substr(i+1));
    }
}
```

---

## 💡 Common Problems

### **1. Factorial:**

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
```

### **2. Fibonacci:**

```cpp
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
```

### **3. Power:**

```cpp
double power(double x, int n) {
    if (n == 0) return 1;
    if (n < 0) return 1 / power(x, -n);

    double half = power(x, n / 2);
    if (n % 2 == 0) return half * half;
    return x * half * half;
}
```

### **4. Generate Parentheses:**

```cpp
vector<string> generateParenthesis(int n) {
    vector<string> result;

    function<void(string, int, int)> backtrack = [&](string s, int open, int close) {
        if (s.length() == 2 * n) {
            result.push_back(s);
            return;
        }

        if (open < n)
            backtrack(s + "(", open + 1, close);
        if (close < open)
            backtrack(s + ")", open, close + 1);
    };

    backtrack("", 0, 0);
    return result;
}
```

### **5. Reverse Linked List:**

```cpp
ListNode* reverseList(ListNode* head) {
    // Base case
    if (!head || !head->next) return head;

    // Reverse rest of list
    ListNode* newHead = reverseList(head->next);

    // Make next node point back
    head->next->next = head;
    head->next = nullptr;

    return newHead;
}
// Time: O(n), Space: O(n) for call stack
```

### **6. Permutations:**

```cpp
vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>> result;

    function<void(int)> backtrack = [&](int start) {
        if (start == nums.size()) {
            result.push_back(nums);
            return;
        }

        for (int i = start; i < nums.size(); i++) {
            swap(nums[start], nums[i]);
            backtrack(start + 1);
            swap(nums[start], nums[i]);  // Backtrack
        }
    };

    backtrack(0);
    return result;
}
```

---

## 🔥 Recursion vs Iteration

### **Comparison:**

| Aspect   | Recursion                       | Iteration           |
| -------- | ------------------------------- | ------------------- |
| Code     | Often simpler, more elegant     | Can be more verbose |
| Space    | O(depth) stack space            | O(1) typically      |
| Speed    | Slower (function call overhead) | Faster              |
| Use Case | Tree/graph, divide & conquer    | Simple loops        |

### **Example - Factorial:**

```cpp
// Recursive
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

// Iterative
int factorial(int n) {
    int result = 1;
    for (int i = 2; i <= n; i++) {
        result *= i;
    }
    return result;
}
```

---

## 🎯 Recursion Optimization

### **1. Memoization (Top-Down DP):**

```cpp
// Without memoization - O(2^n)
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

// With memoization - O(n)
int fib(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];

    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];
}

// Usage
vector<int> memo(n+1, -1);
int result = fib(n, memo);
```

### **2. Tail Call Optimization:**

```cpp
// Convert to tail recursion
int factorial(int n, int acc = 1) {
    if (n <= 1) return acc;
    return factorial(n-1, n * acc);
}
// Compiler can optimize to iteration
```

---

## 🔥 Common Recursion Patterns

### **1. Divide & Conquer:**

```cpp
// Merge Sort
void mergeSort(vector<int>& arr, int left, int right) {
    if (left >= right) return;

    int mid = left + (right - left) / 2;
    mergeSort(arr, left, mid);      // Divide
    mergeSort(arr, mid + 1, right); // Divide
    merge(arr, left, mid, right);   // Conquer
}
```

### **2. Backtracking:**

```cpp
void backtrack(state, choices) {
    if (isGoal(state)) {
        result.add(state);
        return;
    }

    for (choice in choices) {
        makeChoice(state, choice);    // Choose
        backtrack(newState, newChoices); // Explore
        undoChoice(state, choice);    // Unchoose
    }
}
```

### **3. Tree Recursion:**

```cpp
void traverse(TreeNode* root) {
    if (!root) return;

    // Preorder: process here
    traverse(root->left);
    // Inorder: process here
    traverse(root->right);
    // Postorder: process here
}
```

---

## 🎯 How to Identify Recursion

### **Use Recursion When:**

✅ Problem has **recursive structure** (tree, graph)
✅ Can be broken into **similar subproblems**
✅ Need to explore **all possibilities** (backtracking)
✅ **Divide and conquer** approach works
✅ Code clarity more important than performance

### **Don't Use When:**

❌ Simple iteration works better
❌ Stack overflow risk (very deep recursion)
❌ Performance critical (use iteration or DP)
❌ No clear base case

---

## 📊 Complexity Analysis

### **Time Complexity:**

- **Linear recursion:** O(n) - factorial, sum
- **Binary recursion:** O(2^n) - naive Fibonacci
- **With memoization:** Often O(n) or O(n²)

### **Space Complexity:**

- **Call stack:** O(depth of recursion)
- **With memoization:** O(n) additional space

### **Example - Fibonacci:**

```
Without memoization:
Time: O(2^n) - exponential
Space: O(n) - max depth

With memoization:
Time: O(n) - each subproblem solved once
Space: O(n) - memo array + call stack
```

---

## 🔥 Must Remember

### **Key Rules:**

1. **Always have base case** - prevents infinite recursion
2. **Make progress** - each call moves toward base case
3. **Trust the recursion** - assume recursive call works
4. **Consider stack space** - O(depth) space complexity

### **Common Mistakes:**

- ❌ Missing base case
- ❌ Not making progress toward base case
- ❌ Modifying global state incorrectly
- ❌ Not considering stack overflow

### **Tips:**

- ✅ Draw recursion tree to visualize
- ✅ Start with base case
- ✅ Test with small inputs
- ✅ Consider memoization for optimization

---

## 🎓 Recursion Patterns Summary

### **Pattern 1: Simple Recursion**

```cpp
int func(int n) {
    if (n == 0) return base;
    return operation + func(n-1);
}
```

### **Pattern 2: Multiple Recursion**

```cpp
int func(int n) {
    if (n <= 1) return base;
    return func(n-1) + func(n-2);
}
```

### **Pattern 3: Backtracking**

```cpp
void func(state) {
    if (goal) { save; return; }
    for (choice) {
        make(choice);
        func(newState);
        undo(choice);
    }
}
```

---

**Next:** [Dynamic Programming →](18-Dynamic-Programming.md)
