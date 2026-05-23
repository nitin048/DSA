# 🎯 Functions - Quick Reference

**Master functions for interviews!** 💪

---

## 📋 What are Functions?

### **Definition:**

A function is a **reusable block of code** that performs a specific task. Functions help organize code, improve readability, and enable code reuse.

### **Key Components:**

1. **Return Type** - Type of value function returns (or `void`)
2. **Function Name** - Identifier for the function
3. **Parameters** - Input values (optional)
4. **Function Body** - Code to execute
5. **Return Statement** - Value to return (if not void)

### **Why Use Functions?**

- ✅ **Code Reusability** - Write once, use many times
- ✅ **Modularity** - Break complex problems into smaller parts
- ✅ **Maintainability** - Easier to update and debug
- ✅ **Abstraction** - Hide implementation details
- ✅ **Testing** - Test individual components

---

## 📋 Function Basics

### **Function Syntax:**

```cpp
returnType functionName(parameterType1 param1, parameterType2 param2) {
    // Function body
    return value;  // If returnType is not void
}
```

### **Complete Example:**

```cpp
// Declaration (prototype)
int add(int a, int b);

// Definition
int add(int a, int b) {
    return a + b;
}

// Call
int main() {
    int result = add(5, 3);  // result = 8
    cout << result;
    return 0;
}
```

### **Function Types:**

```cpp
// 1. No parameters, no return
void greet() {
    cout << "Hello!";
}

// 2. With parameters, no return
void printSum(int a, int b) {
    cout << a + b;
}

// 3. No parameters, with return
int getRandomNumber() {
    return 42;
}

// 4. With parameters and return
int multiply(int a, int b) {
    return a * b;
}
```

---

## 🔄 Pass by Value vs Reference

### **Theory:**

When you pass arguments to a function, C++ can pass them in different ways:

1. **Pass by Value** - Copy of variable is passed
2. **Pass by Reference** - Reference (alias) to variable is passed
3. **Pass by Pointer** - Address of variable is passed

### **Pass by Value (Copy):**

```cpp
void change(int x) {
    x = 100;  // Only changes copy
}

int main() {
    int num = 5;
    change(num);
    cout << num;  // Still 5
}
```

### **Pass by Reference:**

```cpp
void change(int &x) {
    x = 100;  // Changes original
}

int main() {
    int num = 5;
    change(num);
    cout << num;  // Now 100!
}
```

### **Pass by Const Reference (Best for large objects):**

```cpp
void print(const vector<int> &arr) {
    // Can't modify arr
    for (int x : arr) cout << x;
}
// O(1) space, no copy!
```

**When to Use:**

| Method                  | Use When                    | Pros                  | Cons                    |
| ----------------------- | --------------------------- | --------------------- | ----------------------- |
| Pass by Value           | Small types (int, char)     | Safe, no side effects | Slow for large objects  |
| Pass by Reference       | Need to modify original     | Fast, can modify      | Can accidentally modify |
| Pass by Const Reference | Large objects, read-only    | Fast, safe            | Can't modify            |
| Pass by Pointer         | Optional parameters, arrays | Flexible, can be null | Pointer management      |

---

## 🧠 Memory (Call Stack)

### **Theory:**

When a function is called, a **stack frame** is created containing:

- Function parameters
- Local variables
- Return address
- Return value

### **Stack Frame:**

```
┌─────────────────────┐
│  Function Frame     │
│  - Parameters       │ ← Copied from caller
│  - Local variables  │ ← Created here
│  - Return address   │ ← Where to return
│  - Return value     │ ← Result
└─────────────────────┘
```

### **Example:**

```cpp
int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int x = 5, y = 3;
    int result = add(x, y);
}
```

**Memory Visualization:**

```
STACK (grows downward):
┌─────────────────────┐
│  add() Frame        │
│  a = 5              │ ← Copy of x
│  b = 3              │ ← Copy of y
│  sum = 8            │ ← Local variable
│  return address     │
├─────────────────────┤
│  main() Frame       │
│  x = 5              │
│  y = 3              │
│  result = 8         │ ← After add() returns
└─────────────────────┘

Time: O(1) per call
Space: O(1) per frame
```

### **Pass by Reference - No Copy:**

```cpp
void increment(int& x) {
    x++;  // Modifies original
}

int main() {
    int num = 5;
    increment(num);  // num is now 6
}
```

**Memory:**

```
STACK:
┌─────────────────────┐
│  increment() Frame  │
│  x → points to num  │ ← Reference, not copy!
├─────────────────────┤
│  main() Frame       │
│  num = 5 → 6        │ ← Modified directly
└─────────────────────┘

No copy made! O(1) space
```

---

## 🔁 Recursion

### **Theory:**

Recursion is when a function **calls itself**. Each call creates a new stack frame.

### **Recursion Requirements:**

1. **Base Case** - Stopping condition
2. **Recursive Case** - Function calls itself
3. **Progress** - Moves toward base case

### **How Recursion Works:**

```
factorial(3)
  ↓ calls
  3 * factorial(2)
        ↓ calls
        2 * factorial(1)
              ↓ calls
              1 (base case)

Stack unwinding:
factorial(1) returns 1
factorial(2) returns 2 * 1 = 2
factorial(3) returns 3 * 2 = 6
```

### **Basic Template:**

```cpp
int recursive(int n) {
    // Base case - MUST have!
    if (n <= 0) return 0;

    // Recursive case
    return n + recursive(n - 1);
}
```

### **Common Examples:**

#### **Factorial:**

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
// Time: O(n), Space: O(n) stack
```

**Execution:**

```
factorial(4)
= 4 * factorial(3)
= 4 * (3 * factorial(2))
= 4 * (3 * (2 * factorial(1)))
= 4 * (3 * (2 * 1))
= 24
```

#### **Fibonacci:**

```cpp
// Naive - O(2^n)
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

// Optimized with memoization - O(n)
int fib(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];
}
```

**Why Memoization?**

```
Without memoization:
fib(5) calls fib(4) and fib(3)
fib(4) calls fib(3) and fib(2)
fib(3) is calculated TWICE! ← Wasteful

With memoization:
fib(3) calculated once, stored
Future calls use stored value
Time: O(2^n) → O(n)
```

---

## 🎯 Function Overloading

### **Theory:**

Multiple functions with **same name** but **different parameters**.

```cpp
class Math {
public:
    // Different number of parameters
    int add(int a, int b) {
        return a + b;
    }

    int add(int a, int b, int c) {
        return a + b + c;
    }

    // Different parameter types
    double add(double a, double b) {
        return a + b;
    }
};

// Usage
Math m;
m.add(1, 2);        // Calls int add(int, int)
m.add(1, 2, 3);     // Calls int add(int, int, int)
m.add(1.5, 2.5);    // Calls double add(double, double)
```

**Rules:**

- ✅ Different number of parameters
- ✅ Different parameter types
- ✅ Different order of parameter types
- ❌ Only return type different (NOT allowed)

---

## 🎯 Default Parameters

### **Theory:**

Parameters can have **default values**.

```cpp
void greet(string name = "Guest", int times = 1) {
    for (int i = 0; i < times; i++) {
        cout << "Hello, " << name << "!" << endl;
    }
}

// Usage
greet();                    // Hello, Guest!
greet("Alice");             // Hello, Alice!
greet("Bob", 3);            // Hello, Bob! (3 times)
```

**Rules:**

- Default parameters must be **rightmost**
- Can't skip middle parameters

```cpp
// ✅ Good
void func(int a, int b = 5, int c = 10);

// ❌ Bad
void func(int a = 5, int b, int c = 10);  // Error!
```

---

## 💡 Interview Questions

### **Q1: Difference between pass by value and reference?**

**Answer:**

- **Pass by Value:**
  - Copy of variable is created
  - Original unchanged
  - Slower for large objects
  - Safe (no side effects)

- **Pass by Reference:**
  - No copy, uses original
  - Original can be modified
  - Faster (no copy overhead)
  - Use `const&` for read-only

**Example:**

```cpp
void byValue(int x) { x = 100; }
void byRef(int& x) { x = 100; }

int num = 5;
byValue(num);  // num still 5
byRef(num);    // num now 100
```

### **Q2: When to use const reference?**

**Answer:**
Use `const&` when:

- ✅ Passing large objects (vectors, strings, custom classes)
- ✅ Don't want to modify the object
- ✅ Want to avoid copy overhead

```cpp
// ❌ Bad - copies entire vector
void process(vector<int> data) { }

// ✅ Good - no copy, can't modify
void process(const vector<int>& data) { }
```

### **Q3: What is tail recursion?**

**Answer:**
Tail recursion is when the **recursive call is the last operation**.

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
```

**Why it matters:**

- Tail recursion can be **optimized to iteration** by compiler
- Saves stack space
- Prevents stack overflow

### **Q4: How to avoid stack overflow in recursion?**

**Solutions:**

1. **Use iteration** instead of recursion
2. **Use memoization/DP** to reduce calls
3. **Tail recursion** (compiler optimization)
4. **Increase stack size** (not recommended)

```cpp
// ❌ Stack overflow risk
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);  // O(2^n) calls!
}

// ✅ Safe with memoization
int fib(int n, vector<int>& memo) {
    if (n <= 1) return n;
    if (memo[n] != -1) return memo[n];
    memo[n] = fib(n-1, memo) + fib(n-2, memo);
    return memo[n];  // O(n) calls
}
```

---

## 🎯 Common Patterns

### **1. Helper Function:**

```cpp
void helper(int n, int current) {
    if (current > n) return;
    cout << current << " ";
    helper(n, current + 1);
}

void printNumbers(int n) {
    helper(n, 1);  // Start from 1
}
```

**Why?** Encapsulate extra parameters needed for recursion.

### **2. Multiple Base Cases:**

```cpp
int fib(int n) {
    if (n == 0) return 0;  // Base case 1
    if (n == 1) return 1;  // Base case 2
    return fib(n-1) + fib(n-2);
}
```

### **3. Backtracking:**

```cpp
void backtrack(vector<int>& path, int start) {
    // Base case
    if (condition) {
        result.push_back(path);
        return;
    }

    // Try all options
    for (int i = start; i < n; i++) {
        path.push_back(i);      // Choose
        backtrack(path, i+1);   // Explore
        path.pop_back();        // Unchoose (backtrack)
    }
}
```

**Pattern:** Choose → Explore → Unchoose

---

## 📊 Complexity Analysis

### **Function Call Overhead:**

```cpp
// Simple function
int add(int a, int b) {
    return a + b;
}
// Time: O(1) - constant time
// Space: O(1) - one stack frame
```

### **Recursive Functions:**

```cpp
// Linear recursion
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n-1);
}
// Time: O(n) - n calls
// Space: O(n) - n stack frames
```

```cpp
// Binary recursion
int fib(int n) {
    if (n <= 1) return n;
    return fib(n-1) + fib(n-2);
}
// Time: O(2^n) - exponential
// Space: O(n) - max depth
```

---

## 🔥 Must Remember

### **Key Concepts:**

1. **Pass by reference** for large objects
2. **Const reference** when not modifying
3. **Recursion** needs base case
4. **Stack space** is O(depth) for recursion
5. **Memoization** optimizes recursive solutions

### **Common Mistakes:**

- ❌ Forgetting base case in recursion
- ❌ Passing large objects by value
- ❌ Not using const for read-only references
- ❌ Infinite recursion (no progress toward base case)

### **Best Practices:**

- ✅ Use meaningful function names
- ✅ Keep functions small and focused
- ✅ Document complex functions
- ✅ Use const reference for large read-only parameters
- ✅ Consider iterative alternatives to deep recursion

---

**Next:** [Pointers & References →](03-Pointers-References.md)
