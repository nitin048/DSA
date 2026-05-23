# 🎯 Functions in C++ (Also Called Methods!)

Complete guide to understanding and using functions in C++! 💪

---

## 📋 Table of Contents

1. [What are Functions?](#-what-are-functions)
2. [Why Use Functions?](#-why-use-functions)
3. [Function Syntax](#-function-syntax)
4. [Types of Functions](#-types-of-functions)
5. [Function Parameters](#-function-parameters)
6. [Return Values](#-return-values)
7. [Function Overloading](#-function-overloading)
8. [Scope and Lifetime](#-scope-and-lifetime)
9. [How Functions Work in Memory](#-how-functions-work-in-memory) 🆕
10. [Recursion](#-recursion)
11. [Best Practices](#-best-practices)

---

## 🤔 What are Functions?

**Functions** (also called **Methods** in some contexts) are reusable blocks of code that perform a specific task! 🎯

Think of a function like a **machine**:

- You give it **input** (parameters)
- It does some **work** (code inside)
- It gives you **output** (return value)

### **Real-World Analogy:**

```
🍕 Pizza Making Function:

Input:  Dough, Sauce, Cheese
Process: Mix, Bake, Cut
Output: Delicious Pizza! 🍕
```

### **In Code:**

```cpp
// Function to add two numbers
int add(int a, int b) {
    return a + b;
}

// Using the function
int result = add(5, 3);  // result = 8
```

---

## 💡 Why Use Functions?

### **1. Reusability** ♻️

Write once, use many times!

```cpp
// Without function (repetitive)
cout << 5 + 3 << endl;
cout << 10 + 20 << endl;
cout << 7 + 9 << endl;

// With function (reusable)
int add(int a, int b) { return a + b; }
cout << add(5, 3) << endl;
cout << add(10, 20) << endl;
cout << add(7, 9) << endl;
```

### **2. Organization** 📁

Break big problems into smaller pieces!

```cpp
// Organized code
void displayMenu() { /* ... */ }
void processOrder() { /* ... */ }
void calculateTotal() { /* ... */ }
```

### **3. Readability** 📖

Code becomes easier to understand!

```cpp
// Hard to understand
if (x > 0 && x < 100 && x % 2 == 0) { /* ... */ }

// Easy to understand
bool isValidEvenNumber(int x) {
    return x > 0 && x < 100 && x % 2 == 0;
}
if (isValidEvenNumber(x)) { /* ... */ }
```

### **4. Maintainability** 🔧

Fix bugs in one place!

```cpp
// If calculation changes, update only the function
int calculateDiscount(int price) {
    return price * 0.1;  // 10% discount
}
```

---

## 📝 Function Syntax

### **Basic Structure:**

```cpp
return_type function_name(parameters) {
    // Function body
    // Code to execute
    return value;  // Optional
}
```

### **Parts of a Function:**

```cpp
int add(int a, int b) {
    return a + b;
}

// ↓ Breakdown:
// int        → Return type (what it gives back)
// add        → Function name (what you call it)
// (int a, int b) → Parameters (what it takes in)
// { ... }    → Function body (what it does)
// return     → Sends value back
```

### **Example with Labels:**

```cpp
//  ↓ Return type
    int calculateSum(int num1, int num2) {
//      ↑ Name      ↑ Parameters

    int sum = num1 + num2;  // ← Function body
    return sum;              // ← Return statement
}
```

---

## 🎨 Types of Functions

### **1. Functions with No Parameters and No Return** 🚫➡️🚫

```cpp
void sayHello() {
    cout << "Hello, World!" << endl;
}

// Usage
sayHello();  // Output: Hello, World!
```

**Use Case:** Simple actions that don't need input or output

---

### **2. Functions with Parameters but No Return** ✅➡️🚫

```cpp
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}

// Usage
greet("Alice");  // Output: Hello, Alice!
greet("Bob");    // Output: Hello, Bob!
```

**Use Case:** Actions that need input but don't return anything

---

### **3. Functions with No Parameters but Return Value** 🚫➡️✅

```cpp
int getRandomNumber() {
    return rand() % 100;  // Random number 0-99
}

// Usage
int num = getRandomNumber();
cout << num << endl;
```

**Use Case:** Getting values without needing input

---

### **4. Functions with Parameters and Return Value** ✅➡️✅

```cpp
int multiply(int a, int b) {
    return a * b;
}

// Usage
int result = multiply(5, 3);  // result = 15
cout << result << endl;
```

**Use Case:** Most common! Takes input, processes, returns output

---

## 📥 Function Parameters

Parameters are **inputs** to your function! 🎯

### **Single Parameter:**

```cpp
void printSquare(int num) {
    cout << num * num << endl;
}

printSquare(5);  // Output: 25
```

### **Multiple Parameters:**

```cpp
int add(int a, int b) {
    return a + b;
}

int sum = add(10, 20);  // sum = 30
```

### **Different Data Types:**

```cpp
void displayInfo(string name, int age, double height) {
    cout << "Name: " << name << endl;
    cout << "Age: " << age << endl;
    cout << "Height: " << height << endl;
}

displayInfo("Alice", 25, 5.6);
```

### **Default Parameters:**

```cpp
void greet(string name = "Guest") {
    cout << "Hello, " << name << "!" << endl;
}

greet();          // Output: Hello, Guest!
greet("Alice");   // Output: Hello, Alice!
```

### **Pass by Value vs Pass by Reference:**

```cpp
// Pass by Value (copy)
void changeValue(int x) {
    x = 100;  // Only changes local copy
}

int num = 5;
changeValue(num);
cout << num;  // Output: 5 (unchanged)

// Pass by Reference (actual variable)
void changeValueRef(int &x) {
    x = 100;  // Changes actual variable
}

int num2 = 5;
changeValueRef(num2);
cout << num2;  // Output: 100 (changed!)
```

---

## 📤 Return Values

Return values are **outputs** from your function! 🎁

### **Returning Different Types:**

```cpp
// Return integer
int getAge() {
    return 25;
}

// Return string
string getName() {
    return "Alice";
}

// Return boolean
bool isEven(int num) {
    return num % 2 == 0;
}

// Return double
double calculateAverage(int a, int b) {
    return (a + b) / 2.0;
}
```

### **Multiple Return Statements:**

```cpp
string getGrade(int marks) {
    if (marks >= 90) return "A";
    if (marks >= 80) return "B";
    if (marks >= 70) return "C";
    if (marks >= 60) return "D";
    return "F";
}
```

### **Void Functions (No Return):**

```cpp
void printMessage() {
    cout << "Hello!" << endl;
    // No return statement needed
}

void displayMenu() {
    cout << "1. Start" << endl;
    cout << "2. Exit" << endl;
    return;  // Optional for void functions
}
```

---

## 🔄 Function Overloading

**Same name, different parameters!** 🎭

```cpp
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

// Usage
cout << add(5, 3) << endl;        // Calls first (int, int)
cout << add(5, 3, 2) << endl;     // Calls second (int, int, int)
cout << add(5.5, 3.2) << endl;    // Calls third (double, double)
```

**Why Use It?**

- Same operation, different data types
- Flexibility in function calls
- More intuitive code

---

## 🌍 Scope and Lifetime

### **Local Variables:**

```cpp
void myFunction() {
    int x = 10;  // Local to myFunction
    cout << x << endl;
}  // x is destroyed here

// cout << x;  // ERROR! x doesn't exist here
```

### **Global Variables:**

```cpp
int globalVar = 100;  // Global variable

void function1() {
    cout << globalVar << endl;  // Can access
}

void function2() {
    globalVar = 200;  // Can modify
}

int main() {
    cout << globalVar << endl;  // Can access
}
```

### **Function Parameters:**

```cpp
void myFunction(int param) {
    // param exists only inside this function
    cout << param << endl;
}  // param is destroyed here
```

---

## 🧠 How Functions Work in Memory

Understanding how functions work in memory is crucial! Let's break it down step by step. 🎯

---

### **📚 Memory Layout Overview**

When a C++ program runs, memory is divided into different sections:

```
┌─────────────────────────────────────────┐
│         COMPUTER MEMORY (RAM)           │
├─────────────────────────────────────────┤
│                                         │
│  ┌───────────────────────────────────┐ │
│  │   CODE SEGMENT (Text)             │ │ ← Your compiled program code
│  │   - Function instructions         │ │
│  │   - Read-only                     │ │
│  └───────────────────────────────────┘ │
│                                         │
│  ┌───────────────────────────────────┐ │
│  │   DATA SEGMENT                    │ │ ← Global variables
│  │   - Global variables              │ │
│  │   - Static variables              │ │
│  └───────────────────────────────────┘ │
│                                         │
│  ┌───────────────────────────────────┐ │
│  │   HEAP                            │ │ ← Dynamic memory (new/malloc)
│  │   - Grows downward ↓              │ │
│  │   - Manual allocation             │ │
│  └───────────────────────────────────┘ │
│                                         │
│           ↕ Free Space ↕                │
│                                         │
│  ┌───────────────────────────────────┐ │
│  │   STACK                           │ │ ← Function calls & local variables
│  │   - Grows upward ↑                │ │ ⭐ THIS IS WHERE FUNCTIONS LIVE!
│  │   - Automatic allocation          │ │
│  │   - LIFO (Last In, First Out)    │ │
│  └───────────────────────────────────┘ │
│                                         │
└─────────────────────────────────────────┘
```

**🎯 Key Point:** Functions use the **STACK** for execution!

---

### **🎬 The Call Stack - How It Works**

The **Call Stack** is like a stack of plates 🍽️:

- You can only add/remove from the top
- Last plate added is first plate removed (LIFO)

Each function call creates a **Stack Frame** (also called Activation Record).

---

### **📦 What's in a Stack Frame?**

Each stack frame contains:

```
┌─────────────────────────────────────┐
│      STACK FRAME for function       │
├─────────────────────────────────────┤
│  1. Return Address                  │ ← Where to go back after function ends
│  2. Parameters                      │ ← Function arguments
│  3. Local Variables                 │ ← Variables declared inside function
│  4. Saved Registers                 │ ← CPU state backup
│  5. Return Value (space)            │ ← Where to store result
└─────────────────────────────────────┘
```

---

### **🎯 Example: Step-by-Step Execution**

Let's trace this simple program:

```cpp
#include <iostream>
using namespace std;

int add(int a, int b) {
    int sum = a + b;
    return sum;
}

int main() {
    int x = 5;
    int y = 3;
    int result = add(x, y);
    cout << result << endl;
    return 0;
}
```

---

### **📊 Memory Visualization - Step by Step**

#### **Step 1: Program Starts - main() is called**

```
STACK:
┌─────────────────────────────────────┐
│  main() Stack Frame                 │
│  ─────────────────────────────────  │
│  x = 5                              │
│  y = 3                              │
│  result = ? (uninitialized)         │
└─────────────────────────────────────┘
     ↑
   Stack Pointer (SP)
```

**What happened:**

- Program starts
- `main()` function is called
- Stack frame created for `main()`
- Variables `x` and `y` allocated on stack
- `result` allocated but not initialized yet

---

#### **Step 2: Calling add(x, y)**

```
STACK:
┌─────────────────────────────────────┐
│  add() Stack Frame                  │  ← NEW! Function called
│  ─────────────────────────────────  │
│  Return Address: line 13 in main()  │  ← Where to return
│  a = 5 (copy of x)                  │  ← Parameter 1
│  b = 3 (copy of y)                  │  ← Parameter 2
│  sum = ? (not calculated yet)       │  ← Local variable
├─────────────────────────────────────┤
│  main() Stack Frame                 │
│  ─────────────────────────────────  │
│  x = 5                              │
│  y = 3                              │
│  result = ? (waiting for return)    │
└─────────────────────────────────────┘
     ↑
   Stack Pointer (SP) - points to top
```

**What happened:**

- `add(x, y)` is called
- New stack frame created **on top** of main's frame
- Parameters `a` and `b` get **copies** of `x` and `y`
- Space allocated for local variable `sum`
- Return address saved (line 13 in main)

**🔑 Important:** Parameters are **copies**, not the original variables!

---

#### **Step 3: Executing add() function**

```
STACK:
┌─────────────────────────────────────┐
│  add() Stack Frame                  │
│  ─────────────────────────────────  │
│  Return Address: line 13 in main()  │
│  a = 5                              │
│  b = 3                              │
│  sum = 8  ✅ (calculated!)          │  ← sum = a + b executed
├─────────────────────────────────────┤
│  main() Stack Frame                 │
│  ─────────────────────────────────  │
│  x = 5                              │
│  y = 3                              │
│  result = ? (still waiting)         │
└─────────────────────────────────────┘
```

**What happened:**

- Line `int sum = a + b;` executes
- `sum` is calculated: 5 + 3 = 8
- Value stored in `sum` variable on stack

---

#### **Step 4: Returning from add()**

```
STACK:
┌─────────────────────────────────────┐
│  add() Stack Frame                  │
│  ─────────────────────────────────  │
│  Return Address: line 13 in main()  │
│  a = 5                              │
│  b = 3                              │
│  sum = 8                            │
│  ─────────────────────────────────  │
│  RETURN VALUE: 8  📤                │  ← Prepared to return
└─────────────────────────────────────┘
     ↓ About to be destroyed!
```

**What happened:**

- `return sum;` executes
- Value 8 is prepared to be returned
- Function is about to end

---

#### **Step 5: Back to main() - add() frame destroyed**

```
STACK:
┌─────────────────────────────────────┐
│  main() Stack Frame                 │
│  ─────────────────────────────────  │
│  x = 5                              │
│  y = 3                              │
│  result = 8  ✅ (received!)         │  ← Got return value!
└─────────────────────────────────────┘
     ↑
   Stack Pointer (SP)

add() frame is GONE! 💨
All its variables (a, b, sum) are destroyed!
```

**What happened:**

- `add()` function ends
- Its stack frame is **destroyed** (popped off stack)
- All local variables (`a`, `b`, `sum`) are **gone**
- Return value (8) is copied to `result` in main
- Execution continues in `main()` at line 13

---

### **🎯 Key Concepts Explained**

#### **1. Pass by Value (Copy)**

```cpp
void changeValue(int x) {
    x = 100;  // Changes only the COPY
}

int main() {
    int num = 5;
    changeValue(num);
    cout << num;  // Still 5! Original unchanged
}
```

**Memory:**

```
STACK:
┌─────────────────────────────────────┐
│  changeValue() Frame                │
│  x = 100  ← Changed copy            │
├─────────────────────────────────────┤
│  main() Frame                       │
│  num = 5  ← Original unchanged!     │
└─────────────────────────────────────┘
```

**Why?** Parameters are **copies**, not originals!

---

#### **2. Pass by Reference (Actual Variable)**

```cpp
void changeValue(int &x) {  // & means reference
    x = 100;  // Changes the ORIGINAL
}

int main() {
    int num = 5;
    changeValue(num);
    cout << num;  // Now 100! Original changed
}
```

**Memory:**

```
STACK:
┌─────────────────────────────────────┐
│  changeValue() Frame                │
│  x → points to num in main()        │  ← Reference, not copy!
├─────────────────────────────────────┤
│  main() Frame                       │
│  num = 100  ← Changed directly!     │
└─────────────────────────────────────┘
```

**Why?** Reference (`&`) means "use the original, not a copy"!

---

#### **3. Stack Overflow**

What happens if you call too many functions?

```cpp
void infiniteRecursion() {
    infiniteRecursion();  // Calls itself forever!
}
```

**Memory:**

```
STACK:
┌─────────────────────────────────────┐
│  infiniteRecursion() Frame #10000   │
├─────────────────────────────────────┤
│  infiniteRecursion() Frame #9999    │
├─────────────────────────────────────┤
│  infiniteRecursion() Frame #9998    │
├─────────────────────────────────────┤
│  ... (thousands more)               │
├─────────────────────────────────────┤
│  infiniteRecursion() Frame #1       │
├─────────────────────────────────────┤
│  main() Frame                       │
└─────────────────────────────────────┘
     ↑
   STACK FULL! 💥
   STACK OVERFLOW ERROR!
```

**Result:** Program crashes! 💥

**Why?** Stack has limited size. Too many function calls = stack overflow!

---

### **🎬 Real Example: Factorial with Memory**

```cpp
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}

int main() {
    int result = factorial(3);
}
```

**Memory Trace:**

#### **Call 1: factorial(3)**

```
┌─────────────────────────────────────┐
│  factorial(3) Frame                 │
│  n = 3                              │
│  return = 3 * factorial(2)  ⏳      │
├─────────────────────────────────────┤
│  main() Frame                       │
│  result = ?                         │
└─────────────────────────────────────┘
```

#### **Call 2: factorial(2)**

```
┌─────────────────────────────────────┐
│  factorial(2) Frame                 │
│  n = 2                              │
│  return = 2 * factorial(1)  ⏳      │
├─────────────────────────────────────┤
│  factorial(3) Frame                 │
│  n = 3                              │
│  return = 3 * factorial(2)  ⏳      │
├─────────────────────────────────────┤
│  main() Frame                       │
│  result = ?                         │
└─────────────────────────────────────┘
```

#### **Call 3: factorial(1)**

```
┌─────────────────────────────────────┐
│  factorial(1) Frame                 │
│  n = 1                              │
│  return = 1  ✅ (base case!)        │
├─────────────────────────────────────┤
│  factorial(2) Frame                 │
│  n = 2                              │
│  return = 2 * factorial(1)  ⏳      │
├─────────────────────────────────────┤
│  factorial(3) Frame                 │
│  n = 3                              │
│  return = 3 * factorial(2)  ⏳      │
├─────────────────────────────────────┤
│  main() Frame                       │
│  result = ?                         │
└─────────────────────────────────────┘
```

#### **Unwinding: factorial(1) returns 1**

```
┌─────────────────────────────────────┐
│  factorial(2) Frame                 │
│  n = 2                              │
│  return = 2 * 1 = 2  ✅             │
├─────────────────────────────────────┤
│  factorial(3) Frame                 │
│  n = 3                              │
│  return = 3 * factorial(2)  ⏳      │
├─────────────────────────────────────┤
│  main() Frame                       │
│  result = ?                         │
└─────────────────────────────────────┘
```

#### **Unwinding: factorial(2) returns 2**

```
┌─────────────────────────────────────┐
│  factorial(3) Frame                 │
│  n = 3                              │
│  return = 3 * 2 = 6  ✅             │
├─────────────────────────────────────┤
│  main() Frame                       │
│  result = ?                         │
└─────────────────────────────────────┘
```

#### **Final: factorial(3) returns 6**

```
┌─────────────────────────────────────┐
│  main() Frame                       │
│  result = 6  ✅                     │
└─────────────────────────────────────┘
```

**Result:** 3! = 6 ✅

---

### **💡 Key Memory Concepts Summary**

#### **1. Stack Frames** 📦

- Each function call creates a new frame
- Contains parameters, local variables, return address
- Destroyed when function ends

#### **2. LIFO (Last In, First Out)** 🥞

- Like a stack of pancakes
- Last function called is first to finish
- Frames added/removed from top only

#### **3. Automatic Memory Management** ⚡

- Stack memory is automatic
- No need to manually free memory
- Variables destroyed when function ends

#### **4. Limited Stack Size** ⚠️

- Stack has fixed size (usually 1-8 MB)
- Too many function calls = stack overflow
- Be careful with deep recursion!

#### **5. Pass by Value vs Reference** 🔄

- **Value:** Copy of data (safe but slower)
- **Reference:** Original data (fast but can modify original)

---

### **🎓 Real-World Analogy**

Think of function calls like a **restaurant kitchen** 🍳:

```
┌─────────────────────────────────────┐
│  Chef 3: Plating (garnish)          │  ← Current task
├─────────────────────────────────────┤
│  Chef 2: Cooking (waiting)          │  ← Paused, waiting for Chef 3
├─────────────────────────────────────┤
│  Chef 1: Prep (waiting)             │  ← Paused, waiting for Chef 2
├─────────────────────────────────────┤
│  Head Chef: Order received          │  ← Original caller
└─────────────────────────────────────┘
```

- Each chef has their own workspace (stack frame)
- They work in order (LIFO)
- When done, they pass result to previous chef
- Workspace is cleaned up after finishing

---

### **🧪 Try It Yourself**

**Experiment 1: See Stack in Action**

```cpp
#include <iostream>
using namespace std;

void func3() {
    int z = 30;
    cout << "func3: z address = " << &z << endl;
}

void func2() {
    int y = 20;
    cout << "func2: y address = " << &y << endl;
    func3();
}

void func1() {
    int x = 10;
    cout << "func1: x address = " << &x << endl;
    func2();
}

int main() {
    cout << "main started" << endl;
    func1();
    cout << "main ended" << endl;
    return 0;
}
```

**Output will show:**

- Addresses going **down** (stack grows upward)
- Each function has its own memory space
- Variables at different addresses

---

### **📚 Important Takeaways**

✅ **Functions use the stack** for execution
✅ **Each call creates a stack frame** with local data
✅ **Frames are destroyed** when function ends
✅ **Parameters are copies** (unless using references)
✅ **Stack has limited size** - avoid infinite recursion
✅ **Memory is automatic** - no manual cleanup needed
✅ **LIFO order** - last called, first finished

---

### **🎯 Why This Matters**

Understanding memory helps you:

- 🐛 **Debug better** - Know where variables live
- ⚡ **Write faster code** - Understand performance
- 🛡️ **Avoid bugs** - Prevent stack overflow
- 🧠 **Think clearly** - Visualize program flow
- 💪 **Code confidently** - Know what's happening

---

## 🔁 Recursion

**A function calling itself!** 🌀

### **Example: Factorial**

```cpp
// 5! = 5 × 4 × 3 × 2 × 1 = 120

int factorial(int n) {
    // Base case (stop condition)
    if (n <= 1) {
        return 1;
    }
    // Recursive case
    return n * factorial(n - 1);
}

cout << factorial(5);  // Output: 120
```

### **How It Works:**

```
factorial(5)
= 5 × factorial(4)
= 5 × 4 × factorial(3)
= 5 × 4 × 3 × factorial(2)
= 5 × 4 × 3 × 2 × factorial(1)
= 5 × 4 × 3 × 2 × 1
= 120
```

### **Example: Fibonacci**

```cpp
int fibonacci(int n) {
    if (n <= 1) return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

// fibonacci(5) = 0, 1, 1, 2, 3, 5
```

**⚠️ Warning:** Recursion can be slow and use lots of memory!

---

## ✅ Best Practices

### **1. Use Descriptive Names** 📝

```cpp
// ❌ Bad
int calc(int x, int y) { return x + y; }

// ✅ Good
int calculateSum(int num1, int num2) { return num1 + num2; }
```

### **2. Keep Functions Small** 📏

```cpp
// ❌ Bad - Too long
void processEverything() {
    // 100 lines of code...
}

// ✅ Good - Small, focused functions
void validateInput() { /* ... */ }
void processData() { /* ... */ }
void displayResult() { /* ... */ }
```

### **3. One Task Per Function** 🎯

```cpp
// ❌ Bad - Does too much
void doEverything() {
    readInput();
    processData();
    displayOutput();
    saveToFile();
}

// ✅ Good - One task each
void readInput() { /* ... */ }
void processData() { /* ... */ }
void displayOutput() { /* ... */ }
void saveToFile() { /* ... */ }
```

### **4. Use Comments** 💬

```cpp
// Calculate the area of a circle
// Parameters: radius (double)
// Returns: area (double)
double calculateCircleArea(double radius) {
    return 3.14159 * radius * radius;
}
```

### **5. Avoid Global Variables** 🚫

```cpp
// ❌ Bad
int globalCounter = 0;
void increment() { globalCounter++; }

// ✅ Good
int increment(int counter) { return counter + 1; }
```

### **6. Use const for Read-Only Parameters** 🔒

```cpp
void printArray(const int arr[], int size) {
    // arr cannot be modified
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
}
```

---

## 🎓 Common Function Patterns

### **1. Validation Function**

```cpp
bool isValidAge(int age) {
    return age >= 0 && age <= 150;
}

if (isValidAge(userAge)) {
    cout << "Valid age!" << endl;
}
```

### **2. Calculation Function**

```cpp
double calculateDiscount(double price, double percentage) {
    return price * (percentage / 100);
}

double discount = calculateDiscount(100, 10);  // $10 discount
```

### **3. Display Function**

```cpp
void displayWelcomeMessage(string name) {
    cout << "╔════════════════════╗" << endl;
    cout << "║  Welcome, " << name << "!  ║" << endl;
    cout << "╚════════════════════╝" << endl;
}
```

### **4. Input Function**

```cpp
int getIntegerInput(string prompt) {
    int value;
    cout << prompt;
    cin >> value;
    return value;
}

int age = getIntegerInput("Enter your age: ");
```

### **5. Conversion Function**

```cpp
double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0 / 5.0) + 32;
}

double temp = celsiusToFahrenheit(25);  // 77°F
```

---

## 🎯 Function vs Method

### **What's the Difference?**

**Function:**

- Standalone block of code
- Not tied to any object/class
- Used in procedural programming

```cpp
// Function (standalone)
int add(int a, int b) {
    return a + b;
}
```

**Method:**

- Function inside a class/object
- Tied to an object
- Used in object-oriented programming

```cpp
// Method (inside class)
class Calculator {
public:
    int add(int a, int b) {  // This is a method
        return a + b;
    }
};
```

**In C++:**

- Both terms are often used interchangeably
- Technically, methods are functions inside classes
- For now, think of them as the same thing! 😊

---

## 📚 Complete Example

```cpp
#include <iostream>
using namespace std;

// Function declarations (prototypes)
void displayMenu();
int getChoice();
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
double divide(int a, int b);

int main() {
    displayMenu();
    int choice = getChoice();

    int num1, num2;
    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter second number: ";
    cin >> num2;

    switch(choice) {
        case 1:
            cout << "Result: " << add(num1, num2) << endl;
            break;
        case 2:
            cout << "Result: " << subtract(num1, num2) << endl;
            break;
        case 3:
            cout << "Result: " << multiply(num1, num2) << endl;
            break;
        case 4:
            cout << "Result: " << divide(num1, num2) << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }

    return 0;
}

// Function definitions
void displayMenu() {
    cout << "╔════════════════════╗" << endl;
    cout << "║   CALCULATOR       ║" << endl;
    cout << "╠════════════════════╣" << endl;
    cout << "║ 1. Add             ║" << endl;
    cout << "║ 2. Subtract        ║" << endl;
    cout << "║ 3. Multiply        ║" << endl;
    cout << "║ 4. Divide          ║" << endl;
    cout << "╚════════════════════╝" << endl;
}

int getChoice() {
    int choice;
    cout << "Enter your choice: ";
    cin >> choice;
    return choice;
}

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

double divide(int a, int b) {
    if (b == 0) {
        cout << "Error: Division by zero!" << endl;
        return 0;
    }
    return (double)a / b;
}
```

---

## 🎉 Summary

### **Key Points:**

✅ **Functions** = Reusable blocks of code  
✅ **Also called Methods** (especially in classes)  
✅ **Parts:** Return type, name, parameters, body  
✅ **Types:** With/without parameters, with/without return  
✅ **Benefits:** Reusability, organization, readability  
✅ **Overloading:** Same name, different parameters  
✅ **Recursion:** Function calling itself  
✅ **Best Practice:** Small, focused, well-named functions

### **Remember:**

💡 Functions make code **reusable**  
💡 Functions make code **organized**  
💡 Functions make code **readable**  
💡 Functions make code **maintainable**

---

## 🚀 Practice Exercises

### **Easy:**

1. Write a function to check if a number is even
2. Write a function to find the maximum of two numbers
3. Write a function to print a pattern of stars

### **Medium:**

4. Write a function to calculate factorial
5. Write a function to check if a number is prime
6. Write a function to reverse a number

### **Hard:**

7. Write a function to calculate Fibonacci series
8. Write a function to check if a string is palindrome
9. Write a function to find GCD of two numbers

---

## 📖 Next Steps

After mastering functions, learn:

- 📦 **Arrays** - Store multiple values
- 🎯 **Pointers** - Memory management
- 🏗️ **Classes** - Object-oriented programming
- 📚 **STL** - Standard Template Library

---

**Happy Coding!** 🎉💪🚀

**Remember:** Functions are your friends! Use them everywhere! 🎯✨
