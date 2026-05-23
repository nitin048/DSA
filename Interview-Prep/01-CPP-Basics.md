# 💻 C++ Basics - Quick Reference

**Essential C++ concepts for interviews!** 🎯

---

## 📋 Table of Contents

1. [Data Types](#-data-types)
2. [Variables](#-variables)
3. [Operators](#-operators)
4. [Input/Output](#-inputoutput)
5. [Control Structures](#-control-structures)
6. [Common Interview Questions](#-common-interview-questions)

---

## 🔢 Data Types

### **Primitive Types:**

| Type        | Size    | Range         | Use              |
| ----------- | ------- | ------------- | ---------------- |
| `int`       | 4 bytes | -2³¹ to 2³¹-1 | Integers         |
| `long long` | 8 bytes | -2⁶³ to 2⁶³-1 | Large integers   |
| `float`     | 4 bytes | ~7 digits     | Decimals         |
| `double`    | 8 bytes | ~15 digits    | Precise decimals |
| `char`      | 1 byte  | -128 to 127   | Characters       |
| `bool`      | 1 byte  | true/false    | Boolean          |

### **🔥 Interview Tip:**

- Use `long long` for large numbers (> 10⁹)
- Use `double` for precise calculations
- `int` overflow: 2147483647 + 1 = -2147483648

---

## 📦 Variables

### **Declaration:**

```cpp
int x;              // Declaration
int y = 10;         // Initialization
const int z = 20;   // Constant (cannot change)
```

### **Scope:**

```cpp
int global = 100;   // Global scope

int main() {
    int local = 50; // Local scope
    {
        int block = 25; // Block scope
    }
    // block not accessible here
}
```

### **🔥 Interview Questions:**

- **Q:** Difference between declaration and initialization?
- **A:** Declaration creates variable, initialization assigns value

---

## ➕ Operators

### **Arithmetic:**

```cpp
+  // Addition
-  // Subtraction
*  // Multiplication
/  // Division
%  // Modulo (remainder)
```

### **Comparison:**

```cpp
==  // Equal to
!=  // Not equal to
<   // Less than
>   // Greater than
<=  // Less than or equal
>=  // Greater than or equal
```

### **Logical:**

```cpp
&&  // AND
||  // OR
!   // NOT
```

### **Bitwise:**

```cpp
&   // AND
|   // OR
^   // XOR
~   // NOT
<<  // Left shift
>>  // Right shift
```

### **🔥 Common Tricks:**

```cpp
// Swap without temp
a = a ^ b;
b = a ^ b;
a = a ^ b;

// Check if power of 2
(n & (n-1)) == 0

// Get ith bit
(n >> i) & 1

// Set ith bit
n | (1 << i)

// Clear ith bit
n & ~(1 << i)
```

---

## 📥 Input/Output

### **Basic I/O:**

```cpp
#include <iostream>
using namespace std;

int main() {
    int x;
    cin >> x;           // Input
    cout << x << endl;  // Output
    return 0;
}
```

### **Fast I/O (for competitive programming):**

```cpp
ios_base::sync_with_stdio(false);
cin.tie(NULL);
```

### **🔥 Interview Tip:**

Always use `endl` or `\n` for new line in output!

---

## 🔄 Control Structures

### **If-Else:**

```cpp
if (condition) {
    // code
} else if (condition) {
    // code
} else {
    // code
}
```

### **Ternary Operator:**

```cpp
int max = (a > b) ? a : b;
```

### **Switch:**

```cpp
switch(variable) {
    case 1:
        // code
        break;
    case 2:
        // code
        break;
    default:
        // code
}
```

### **For Loop:**

```cpp
for (int i = 0; i < n; i++) {
    // code
}
```

### **While Loop:**

```cpp
while (condition) {
    // code
}
```

### **Do-While Loop:**

```cpp
do {
    // code
} while (condition);
```

---

## 💡 Common Interview Questions

### **Q1: What is the difference between `++i` and `i++`?**

```cpp
int i = 5;
int a = ++i;  // a = 6, i = 6 (pre-increment)
int b = i++;  // b = 6, i = 7 (post-increment)
```

### **Q2: What is integer overflow?**

```cpp
int max = 2147483647;
max = max + 1;  // Overflow! Becomes -2147483648
```

### **Q3: How to avoid integer overflow?**

```cpp
// Use long long
long long x = 2147483647LL;
x = x + 1;  // No overflow!
```

### **Q4: Difference between `=` and `==`?**

```cpp
int x = 5;   // Assignment
if (x == 5)  // Comparison
```

### **Q5: What is short-circuit evaluation?**

```cpp
// AND: If first is false, second not evaluated
if (false && expensive_function()) // expensive_function() not called

// OR: If first is true, second not evaluated
if (true || expensive_function())  // expensive_function() not called
```

---

## 🎯 Quick Tips

### **Do's:**

- ✅ Use meaningful variable names
- ✅ Initialize variables before use
- ✅ Use `const` for constants
- ✅ Check for overflow in calculations

### **Don'ts:**

- ❌ Don't use global variables unnecessarily
- ❌ Don't forget to initialize variables
- ❌ Don't use magic numbers (use constants)
- ❌ Don't ignore compiler warnings

---

## 🔥 Must Remember

1. **Integer overflow** - Use `long long` for large numbers
2. **Division by zero** - Always check before dividing
3. **Modulo with negative** - Result can be negative
4. **Bitwise operators** - Very useful for optimization
5. **Fast I/O** - Use for competitive programming

---

**Next:** [Functions →](02-Functions.md)
