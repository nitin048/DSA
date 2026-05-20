# 🔄 Loops in C++

Loops are used to execute a block of code repeatedly until a specified condition is met. C++ provides three main types of loops: `for`, `while`, and `do-while`.

---

## 📚 Table of Contents

1. [For Loop](#for-loop)
2. [While Loop](#while-loop)
3. [Do-While Loop](#do-while-loop)
4. [Nested Loops](#nested-loops)
5. [Loop Control Statements](#loop-control-statements)
6. [Infinite Loops](#infinite-loops)
7. [Range-Based For Loop (C++11)](#range-based-for-loop-c11)
8. [Common Patterns](#common-patterns)
9. [Best Practices](#best-practices)

---

## 🔁 For Loop

The `for` loop is used when you know in advance how many times you want to execute a statement or block of statements.

### Syntax

```cpp
for (initialization; condition; increment/decrement) {
    // Code to execute
}
```

### Flow Diagram

```
Start
  ↓
Initialization
  ↓
Condition? ──No──→ Exit Loop
  ↓ Yes
Execute Body
  ↓
Increment/Decrement
  ↓
(Back to Condition)
```

### Examples

#### Basic For Loop

```cpp
// Print numbers 1 to 5
for (int i = 1; i <= 5; i++) {
    cout << i << " ";
}
// Output: 1 2 3 4 5
```

#### Reverse Loop

```cpp
// Print numbers 5 to 1
for (int i = 5; i >= 1; i--) {
    cout << i << " ";
}
// Output: 5 4 3 2 1
```

#### Loop with Step

```cpp
// Print even numbers from 0 to 10
for (int i = 0; i <= 10; i += 2) {
    cout << i << " ";
}
// Output: 0 2 4 6 8 10
```

#### Multiple Variables

```cpp
// Loop with multiple variables
for (int i = 0, j = 10; i < j; i++, j--) {
    cout << "i: " << i << ", j: " << j << endl;
}
```

### When to Use For Loop

- ✅ When you know the number of iterations
- ✅ When iterating through arrays or collections
- ✅ When you need a counter variable
- ✅ When the loop has a clear start and end

---

## 🔄 While Loop

The `while` loop executes a block of code as long as the specified condition is true. The condition is checked **before** executing the loop body.

### Syntax

```cpp
while (condition) {
    // Code to execute
    // Don't forget to update the condition!
}
```

### Flow Diagram

```
Start
  ↓
Condition? ──No──→ Exit Loop
  ↓ Yes
Execute Body
  ↓
(Back to Condition)
```

### Examples

#### Basic While Loop

```cpp
int i = 1;
while (i <= 5) {
    cout << i << " ";
    i++;
}
// Output: 1 2 3 4 5
```

#### User Input Validation

```cpp
int num;
cout << "Enter a positive number: ";
cin >> num;

while (num <= 0) {
    cout << "Invalid! Enter a positive number: ";
    cin >> num;
}
cout << "You entered: " << num << endl;
```

#### Sum Until Condition

```cpp
int sum = 0;
int num = 1;

while (sum < 100) {
    sum += num;
    num++;
}
cout << "Sum: " << sum << endl;
```

#### Reading Until Sentinel Value

```cpp
int value;
cout << "Enter numbers (0 to stop): ";
cin >> value;

while (value != 0) {
    cout << "You entered: " << value << endl;
    cin >> value;
}
```

### When to Use While Loop

- ✅ When the number of iterations is unknown
- ✅ When looping based on user input
- ✅ When the condition is complex
- ✅ When you need to check condition before execution

---

## 🔁 Do-While Loop

The `do-while` loop is similar to the `while` loop, but it checks the condition **after** executing the loop body. This guarantees at least one execution.

### Syntax

```cpp
do {
    // Code to execute
    // This runs at least once!
} while (condition);
```

### Flow Diagram

```
Start
  ↓
Execute Body
  ↓
Condition? ──Yes──→ (Back to Execute Body)
  ↓ No
Exit Loop
```

### Examples

#### Basic Do-While Loop

```cpp
int i = 1;
do {
    cout << i << " ";
    i++;
} while (i <= 5);
// Output: 1 2 3 4 5
```

#### Menu-Driven Program

```cpp
int choice;
do {
    cout << "\n===== MENU =====" << endl;
    cout << "1. Option 1" << endl;
    cout << "2. Option 2" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter choice: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Option 1 selected" << endl;
            break;
        case 2:
            cout << "Option 2 selected" << endl;
            break;
        case 3:
            cout << "Exiting..." << endl;
            break;
        default:
            cout << "Invalid choice!" << endl;
    }
} while (choice != 3);
```

#### Input Validation (Guaranteed Execution)

```cpp
int age;
do {
    cout << "Enter your age (1-120): ";
    cin >> age;
    if (age < 1 || age > 120) {
        cout << "Invalid age! Try again." << endl;
    }
} while (age < 1 || age > 120);
cout << "Your age: " << age << endl;
```

### When to Use Do-While Loop

- ✅ When you need at least one execution
- ✅ For menu-driven programs
- ✅ For input validation
- ✅ When condition depends on loop body execution

---

## 🔲 Nested Loops

A loop inside another loop is called a nested loop. The inner loop completes all its iterations for each iteration of the outer loop.

### Syntax

```cpp
for (initialization; condition; increment) {
    for (initialization; condition; increment) {
        // Inner loop body
    }
}
```

### Examples

#### Multiplication Table

```cpp
// Print multiplication table (1 to 5)
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 10; j++) {
        cout << i << " x " << j << " = " << (i * j) << endl;
    }
    cout << "---" << endl;
}
```

#### Pattern Printing - Rectangle

```cpp
// Print 5x5 rectangle of stars
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= 5; j++) {
        cout << "* ";
    }
    cout << endl;
}
// Output:
// * * * * *
// * * * * *
// * * * * *
// * * * * *
// * * * * *
```

#### Pattern Printing - Right Triangle

```cpp
// Print right-angled triangle
for (int i = 1; i <= 5; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
// Output:
// *
// * *
// * * *
// * * * *
// * * * * *
```

#### Pattern Printing - Inverted Triangle

```cpp
// Print inverted triangle
for (int i = 5; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
// Output:
// * * * * *
// * * * *
// * * *
// * *
// *
```

#### Pattern Printing - Pyramid

```cpp
// Print pyramid
int n = 5;
for (int i = 1; i <= n; i++) {
    // Print spaces
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    // Print stars
    for (int k = 1; k <= 2 * i - 1; k++) {
        cout << "*";
    }
    cout << endl;
}
// Output:
//     *
//    ***
//   *****
//  *******
// *********
```

#### 2D Array Traversal

```cpp
int matrix[3][3] = {
    {1, 2, 3},
    {4, 5, 6},
    {7, 8, 9}
};

// Print matrix
for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
        cout << matrix[i][j] << " ";
    }
    cout << endl;
}
```

### Time Complexity of Nested Loops

- **Single loop:** O(n)
- **Two nested loops:** O(n²)
- **Three nested loops:** O(n³)

---

## 🎮 Loop Control Statements

Loop control statements change the execution flow of loops.

### 1. Break Statement

Terminates the loop immediately and transfers control to the statement after the loop.

```cpp
// Find first number divisible by 7
for (int i = 1; i <= 100; i++) {
    if (i % 7 == 0) {
        cout << "First number divisible by 7: " << i << endl;
        break;  // Exit loop
    }
}
```

#### Break in Nested Loops

```cpp
// Break only exits the innermost loop
for (int i = 1; i <= 3; i++) {
    for (int j = 1; j <= 3; j++) {
        if (j == 2) {
            break;  // Only breaks inner loop
        }
        cout << i << "," << j << " ";
    }
    cout << endl;
}
// Output:
// 1,1
// 2,1
// 3,1
```

### 2. Continue Statement

Skips the rest of the current iteration and moves to the next iteration.

```cpp
// Print odd numbers from 1 to 10
for (int i = 1; i <= 10; i++) {
    if (i % 2 == 0) {
        continue;  // Skip even numbers
    }
    cout << i << " ";
}
// Output: 1 3 5 7 9
```

#### Continue in While Loop

```cpp
int i = 0;
while (i < 10) {
    i++;
    if (i % 2 == 0) {
        continue;  // Skip even numbers
    }
    cout << i << " ";
}
// Output: 1 3 5 7 9
```

### 3. Goto Statement (Not Recommended)

Transfers control to a labeled statement. **Avoid using goto** as it makes code hard to read and maintain.

```cpp
// Example (not recommended)
for (int i = 1; i <= 5; i++) {
    if (i == 3) {
        goto end;  // Jump to label
    }
    cout << i << " ";
}
end:
    cout << "\nJumped to end" << endl;
```

### Break vs Continue

| Feature       | Break                        | Continue                                  |
| ------------- | ---------------------------- | ----------------------------------------- |
| **Action**    | Exits loop completely        | Skips current iteration                   |
| **Next step** | Goes to statement after loop | Goes to next iteration                    |
| **Use case**  | When you want to stop loop   | When you want to skip specific iterations |

---

## ♾️ Infinite Loops

A loop that never terminates is called an infinite loop.

### Intentional Infinite Loops

```cpp
// Infinite for loop
for (;;) {
    cout << "This runs forever!" << endl;
    // Use break to exit
}

// Infinite while loop
while (true) {
    cout << "This runs forever!" << endl;
    // Use break to exit
}

// Infinite do-while loop
do {
    cout << "This runs forever!" << endl;
    // Use break to exit
} while (true);
```

### Practical Use of Infinite Loops

```cpp
// Server-like program
while (true) {
    cout << "Enter command (exit to quit): ";
    string cmd;
    cin >> cmd;

    if (cmd == "exit") {
        break;  // Exit infinite loop
    }

    cout << "Processing: " << cmd << endl;
}
```

### Accidental Infinite Loops (Bugs)

```cpp
// ❌ Bug: Forgot to increment
int i = 1;
while (i <= 5) {
    cout << i << " ";
    // Missing: i++;
}

// ❌ Bug: Wrong condition
for (int i = 1; i >= 1; i++) {  // Always true!
    cout << i << " ";
}

// ❌ Bug: Modifying loop variable incorrectly
for (int i = 0; i < 10; i++) {
    cout << i << " ";
    i--;  // Cancels increment!
}
```

---

## 🆕 Range-Based For Loop (C++11)

Introduced in C++11, the range-based for loop simplifies iteration over containers.

### Syntax

```cpp
for (datatype variable : container) {
    // Use variable
}
```

### Examples

#### Array Iteration

```cpp
int arr[] = {1, 2, 3, 4, 5};

// Traditional for loop
for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
}

// Range-based for loop (simpler!)
for (int num : arr) {
    cout << num << " ";
}
```

#### Vector Iteration

```cpp
#include <vector>

vector<int> vec = {10, 20, 30, 40, 50};

// Range-based for loop
for (int num : vec) {
    cout << num << " ";
}
```

#### String Iteration

```cpp
string str = "Hello";

// Iterate through each character
for (char ch : str) {
    cout << ch << " ";
}
// Output: H e l l o
```

#### Using References (Modify Elements)

```cpp
int arr[] = {1, 2, 3, 4, 5};

// Without reference (can't modify)
for (int num : arr) {
    num = num * 2;  // Doesn't modify array
}

// With reference (can modify)
for (int &num : arr) {
    num = num * 2;  // Modifies array
}
```

#### Using Auto Keyword

```cpp
vector<string> names = {"Alice", "Bob", "Charlie"};

// Auto deduces the type
for (auto name : names) {
    cout << name << endl;
}

// Auto with reference
for (auto &name : names) {
    name = "Mr. " + name;  // Modifies vector
}
```

---

## 🎯 Common Loop Patterns

### 1. Sum of Numbers

```cpp
int sum = 0;
for (int i = 1; i <= 10; i++) {
    sum += i;
}
cout << "Sum: " << sum << endl;  // Output: 55
```

### 2. Factorial

```cpp
int n = 5;
int factorial = 1;
for (int i = 1; i <= n; i++) {
    factorial *= i;
}
cout << n << "! = " << factorial << endl;  // Output: 120
```

### 3. Fibonacci Series

```cpp
int n = 10;
int a = 0, b = 1;
cout << a << " " << b << " ";

for (int i = 2; i < n; i++) {
    int next = a + b;
    cout << next << " ";
    a = b;
    b = next;
}
// Output: 0 1 1 2 3 5 8 13 21 34
```

### 4. Prime Number Check

```cpp
int num = 29;
bool isPrime = true;

for (int i = 2; i <= num / 2; i++) {
    if (num % i == 0) {
        isPrime = false;
        break;
    }
}

cout << num << (isPrime ? " is prime" : " is not prime") << endl;
```

### 5. Reverse a Number

```cpp
int num = 12345;
int reversed = 0;

while (num > 0) {
    int digit = num % 10;
    reversed = reversed * 10 + digit;
    num /= 10;
}
cout << "Reversed: " << reversed << endl;  // Output: 54321
```

### 6. Count Digits

```cpp
int num = 12345;
int count = 0;

while (num > 0) {
    count++;
    num /= 10;
}
cout << "Number of digits: " << count << endl;  // Output: 5
```

### 7. Sum of Digits

```cpp
int num = 12345;
int sum = 0;

while (num > 0) {
    sum += num % 10;
    num /= 10;
}
cout << "Sum of digits: " << sum << endl;  // Output: 15
```

### 8. Palindrome Check

```cpp
int num = 12321;
int original = num;
int reversed = 0;

while (num > 0) {
    reversed = reversed * 10 + (num % 10);
    num /= 10;
}

cout << original << (original == reversed ? " is palindrome" : " is not palindrome") << endl;
```

### 9. GCD (Greatest Common Divisor)

```cpp
int a = 48, b = 18;

while (b != 0) {
    int temp = b;
    b = a % b;
    a = temp;
}
cout << "GCD: " << a << endl;  // Output: 6
```

### 10. Power Calculation

```cpp
int base = 2, exponent = 5;
int result = 1;

for (int i = 0; i < exponent; i++) {
    result *= base;
}
cout << base << "^" << exponent << " = " << result << endl;  // Output: 32
```

---

## ✅ Best Practices

### 1. Choose the Right Loop

```cpp
// ✅ Use for loop when iterations are known
for (int i = 0; i < 10; i++) { }

// ✅ Use while loop when iterations are unknown
while (userInput != "quit") { }

// ✅ Use do-while when you need at least one execution
do { } while (condition);
```

### 2. Avoid Modifying Loop Variable Inside Loop

```cpp
// ❌ Bad: Confusing
for (int i = 0; i < 10; i++) {
    i += 2;  // Don't do this!
}

// ✅ Good: Clear intent
for (int i = 0; i < 10; i += 3) {
    // Loop body
}
```

### 3. Use Meaningful Variable Names

```cpp
// ❌ Bad
for (int x = 0; x < n; x++) { }

// ✅ Good
for (int studentIndex = 0; studentIndex < totalStudents; studentIndex++) { }

// ✅ Acceptable for simple loops
for (int i = 0; i < 10; i++) { }
```

### 4. Avoid Deep Nesting

```cpp
// ❌ Bad: Too many nested loops
for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        for (int k = 0; k < p; k++) {
            for (int l = 0; l < q; l++) {
                // Hard to read and maintain
            }
        }
    }
}

// ✅ Good: Extract to functions
void processData(int i, int j) {
    // Inner loop logic
}

for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
        processData(i, j);
    }
}
```

### 5. Be Careful with Infinite Loops

```cpp
// ✅ Always have an exit condition
while (true) {
    // ... code ...
    if (exitCondition) {
        break;
    }
}
```

### 6. Use Range-Based For Loop When Possible

```cpp
vector<int> numbers = {1, 2, 3, 4, 5};

// ❌ Verbose
for (int i = 0; i < numbers.size(); i++) {
    cout << numbers[i] << " ";
}

// ✅ Cleaner
for (int num : numbers) {
    cout << num << " ";
}
```

---

## 📊 Loop Comparison Table

| Feature                | For Loop         | While Loop             | Do-While Loop          |
| ---------------------- | ---------------- | ---------------------- | ---------------------- |
| **Condition check**    | Before execution | Before execution       | After execution        |
| **Minimum executions** | 0                | 0                      | 1                      |
| **Best for**           | Known iterations | Unknown iterations     | At least one execution |
| **Initialization**     | In loop header   | Before loop            | Before loop            |
| **Use case**           | Arrays, counters | User input, conditions | Menus, validation      |

---

## 🎓 Practice Exercises

### Beginner

1. Print numbers 1 to 100
2. Print even numbers from 1 to 50
3. Calculate sum of first 100 natural numbers
4. Print multiplication table of 7
5. Count from 10 to 1 (reverse)

### Intermediate

6. Check if a number is prime
7. Print Fibonacci series up to n terms
8. Find factorial of a number
9. Reverse a number
10. Check if a number is palindrome
11. Find sum of digits of a number
12. Print all prime numbers between 1 and 100

### Advanced

13. Print Floyd's triangle
14. Print Pascal's triangle
15. Find GCD of two numbers
16. Find LCM of two numbers
17. Print diamond pattern with stars
18. Calculate power (x^n) without using pow()
19. Print all Armstrong numbers between 1 and 1000
20. Generate prime numbers using Sieve of Eratosthenes

---

## 🔗 Next Steps

After mastering loops, move on to:

1. **[Arrays](../08_Arrays/)** - Store multiple values
2. **[Functions](../09_Functions/)** - Reusable code blocks
3. **[Strings](../10_Strings/)** - Text manipulation

---

## 📚 Additional Resources

- **C++ Reference:** https://en.cppreference.com/w/cpp/language/for
- **Learn C++:** https://www.learncpp.com/cpp-tutorial/for-statements/
- **GeeksforGeeks:** https://www.geeksforgeeks.org/loops-in-c-and-cpp/

---

**Master loops and you'll master repetition in programming! 🚀**

Practice is key - try all the examples and exercises!
