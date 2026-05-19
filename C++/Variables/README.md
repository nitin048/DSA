# C++ Variables - Complete Guide

This document covers everything about variables in C++ including data types, declarations, scope, and best practices.

---

## 📚 Table of Contents

1. [What is a Variable?](#what-is-a-variable)
2. [Variable Declaration and Initialization](#variable-declaration-and-initialization)
3. [Data Types](#data-types)
4. [Type Modifiers](#type-modifiers)
5. [Constants](#constants)
6. [Variable Scope](#variable-scope)
7. [Storage Classes](#storage-classes)
8. [Type Conversion](#type-conversion)
9. [Naming Conventions](#naming-conventions)
10. [Best Practices](#best-practices)

---

## 1. What is a Variable?

A **variable** is a named storage location in memory that holds a value. The value can be changed during program execution.

### Syntax:
```cpp
data_type variable_name = value;
```

### Example:
```cpp
int age = 25;           // Integer variable
double price = 99.99;   // Floating-point variable
char grade = 'A';       // Character variable
bool isActive = true;   // Boolean variable
```

---

## 2. Variable Declaration and Initialization

### Declaration
Declaring a variable reserves memory but doesn't assign a value.

```cpp
int age;        // Declaration only
double salary;  // Declaration only
```

### Initialization
Assigning a value to a variable.

```cpp
// Method 1: Assignment initialization
int age = 25;

// Method 2: Uniform initialization (C++11)
int age{25};

// Method 3: Constructor initialization
int age(25);

// Method 4: Declaration then assignment
int age;
age = 25;
```

### Multiple Variable Declaration
```cpp
// Same type, multiple variables
int a, b, c;

// Declaration with initialization
int x = 5, y = 10, z = 15;

// Mixed (not recommended)
int a = 5, b, c = 10;  // b is uninitialized
```

---

## 3. Data Types

C++ has several built-in data types:

### Primitive Data Types

| Data Type | Size (bytes) | Range | Description |
|-----------|--------------|-------|-------------|
| `char` | 1 | -128 to 127 | Single character |
| `unsigned char` | 1 | 0 to 255 | Unsigned character |
| `short` | 2 | -32,768 to 32,767 | Short integer |
| `unsigned short` | 2 | 0 to 65,535 | Unsigned short |
| `int` | 4 | -2,147,483,648 to 2,147,483,647 | Integer |
| `unsigned int` | 4 | 0 to 4,294,967,295 | Unsigned integer |
| `long` | 4 or 8 | Platform dependent | Long integer |
| `long long` | 8 | -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807 | Very long integer |
| `float` | 4 | ±3.4e-38 to ±3.4e+38 | Single precision float |
| `double` | 8 | ±1.7e-308 to ±1.7e+308 | Double precision float |
| `long double` | 12 or 16 | Extended precision | Long double |
| `bool` | 1 | true or false | Boolean |
| `void` | 0 | No value | Represents no type |

### Integer Types

```cpp
// Signed integers (can be positive or negative)
int a = -10;
short b = 100;
long c = 1000000L;
long long d = 9223372036854775807LL;

// Unsigned integers (only positive)
unsigned int x = 4000000000U;
unsigned short y = 65535;
```

### Floating-Point Types

```cpp
float price = 99.99f;           // 'f' suffix for float
double distance = 12345.6789;   // Default for decimals
long double precise = 3.14159265358979323846L;
```

### Character Type

```cpp
char letter = 'A';              // Single character
char digit = '5';               // Character, not number 5
char newline = '\n';            // Escape sequence
char tab = '\t';                // Tab character

// ASCII values
char ch = 65;                   // Same as 'A'
cout << ch;                     // Output: A
```

### Boolean Type

```cpp
bool isTrue = true;             // true = 1
bool isFalse = false;           // false = 0

bool result = (5 > 3);          // result = true
```

### String Type (from std library)

```cpp
#include <string>

string name = "John Doe";
string greeting = "Hello, World!";
string empty = "";              // Empty string
```

---

## 4. Type Modifiers

Modifiers change the meaning of base data types.

### Signed vs Unsigned

```cpp
// Signed (default) - can be positive or negative
signed int a = -100;
int b = -100;                   // Same as signed int

// Unsigned - only positive values
unsigned int c = 4000000000;    // Can store larger positive values
```

### Short and Long

```cpp
short int x = 32767;            // 2 bytes
int y = 2147483647;             // 4 bytes
long int z = 2147483647L;       // 4 or 8 bytes
long long int w = 9223372036854775807LL;  // 8 bytes
```

### Size Comparison

```cpp
#include <iostream>
using namespace std;

int main()
{
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;
    cout << "Size of long long: " << sizeof(long long) << " bytes" << endl;
    
    return 0;
}
```

---

## 5. Constants

Constants are variables whose values cannot be changed after initialization.

### Using `const` Keyword

```cpp
const int MAX_SIZE = 100;
const double PI = 3.14159;
const char GRADE = 'A';

// MAX_SIZE = 200;  // ERROR: Cannot modify const variable
```

### Using `#define` Preprocessor

```cpp
#define MAX_SIZE 100
#define PI 3.14159

// Not recommended in modern C++ (use const instead)
```

### Using `constexpr` (C++11)

```cpp
constexpr int MAX_SIZE = 100;
constexpr double PI = 3.14159;

// Evaluated at compile time
constexpr int square(int x) { return x * x; }
constexpr int result = square(5);  // Computed at compile time
```

### Difference between const and constexpr

```cpp
const int a = 10;           // Runtime constant
constexpr int b = 10;       // Compile-time constant

const int x = rand();       // OK - runtime value
// constexpr int y = rand(); // ERROR - must be compile-time
```

---

## 6. Variable Scope

Scope determines where a variable can be accessed.

### Local Variables

Declared inside a function or block. Only accessible within that block.

```cpp
void myFunction()
{
    int x = 10;  // Local to myFunction
    cout << x;   // OK
}

int main()
{
    // cout << x;  // ERROR: x not accessible here
    return 0;
}
```

### Global Variables

Declared outside all functions. Accessible throughout the program.

```cpp
int globalVar = 100;  // Global variable

void function1()
{
    cout << globalVar;  // OK - accessible
}

void function2()
{
    globalVar = 200;    // OK - can modify
    cout << globalVar;  // OK - accessible
}

int main()
{
    cout << globalVar;  // OK - accessible
    return 0;
}
```

### Block Scope

Variables declared inside `{}` are only accessible within that block.

```cpp
int main()
{
    int x = 10;
    
    {
        int y = 20;
        cout << x;  // OK
        cout << y;  // OK
    }
    
    cout << x;  // OK
    // cout << y;  // ERROR: y not accessible here
    
    return 0;
}
```

### Shadowing

Local variable hides global variable with same name.

```cpp
int x = 100;  // Global

int main()
{
    int x = 50;      // Local (shadows global)
    cout << x;       // Output: 50 (local)
    cout << ::x;     // Output: 100 (global, using scope resolution)
    
    return 0;
}
```

---

## 7. Storage Classes

Storage classes define the scope, visibility, and lifetime of variables.

### auto (default)

```cpp
auto int x = 10;  // Rarely used explicitly
int y = 20;       // Same as auto int y = 20;
```

### register

Suggests storing variable in CPU register for faster access.

```cpp
register int counter = 0;  // Hint to compiler (may be ignored)
```

### static

Preserves variable value between function calls.

```cpp
void counter()
{
    static int count = 0;  // Initialized only once
    count++;
    cout << count << endl;
}

int main()
{
    counter();  // Output: 1
    counter();  // Output: 2
    counter();  // Output: 3
    return 0;
}
```

### extern

Declares a variable defined in another file.

```cpp
// file1.cpp
int globalVar = 100;

// file2.cpp
extern int globalVar;  // Declaration (not definition)
cout << globalVar;     // Can access globalVar from file1.cpp
```

### mutable

Allows modification of const object members.

```cpp
class MyClass
{
    mutable int counter = 0;
    
public:
    void increment() const
    {
        counter++;  // OK - mutable allows modification
    }
};
```

---

## 8. Type Conversion

### Implicit Conversion (Automatic)

```cpp
int x = 10;
double y = x;  // int to double (automatic)

char ch = 'A';
int ascii = ch;  // char to int (ASCII value)

float f = 3.14f;
int i = f;  // float to int (loses decimal part) - i = 3
```

### Explicit Conversion (Type Casting)

#### C-Style Cast
```cpp
double pi = 3.14159;
int x = (int)pi;  // x = 3
```

#### C++ Style Casts

**static_cast** (compile-time cast)
```cpp
double pi = 3.14159;
int x = static_cast<int>(pi);  // x = 3
```

**dynamic_cast** (runtime cast for polymorphism)
```cpp
Base* basePtr = new Derived();
Derived* derivedPtr = dynamic_cast<Derived*>(basePtr);
```

**const_cast** (remove const qualifier)
```cpp
const int x = 10;
int* ptr = const_cast<int*>(&x);
```

**reinterpret_cast** (low-level reinterpretation)
```cpp
int x = 65;
char* ch = reinterpret_cast<char*>(&x);
```

### Type Promotion in Expressions

```cpp
int a = 5;
double b = 2.5;
double result = a + b;  // a promoted to double, result = 7.5

char ch = 'A';  // ASCII 65
int x = ch + 1;  // ch promoted to int, x = 66
```

---

## 9. Naming Conventions

### Rules (Must Follow)

1. **Must start with** letter (a-z, A-Z) or underscore (_)
2. **Can contain** letters, digits (0-9), and underscores
3. **Cannot use** C++ keywords (int, if, while, etc.)
4. **Case-sensitive** (age, Age, AGE are different)
5. **No spaces** allowed

### Valid Names
```cpp
int age;
int _count;
int student1;
int totalAmount;
int MAX_SIZE;
```

### Invalid Names
```cpp
int 1student;    // Cannot start with digit
int total-amount; // Cannot use hyphen
int int;         // Cannot use keyword
int total amount; // Cannot have space
```

### Best Practices

**camelCase** (for variables and functions)
```cpp
int studentAge;
double totalPrice;
string firstName;
```

**PascalCase** (for classes and structs)
```cpp
class StudentRecord;
struct PersonInfo;
```

**UPPER_CASE** (for constants)
```cpp
const int MAX_SIZE = 100;
const double PI = 3.14159;
#define BUFFER_SIZE 1024
```

**snake_case** (alternative style)
```cpp
int student_age;
double total_price;
string first_name;
```

---

## 10. Best Practices

### 1. Always Initialize Variables

```cpp
// Bad
int x;
cout << x;  // Undefined behavior (garbage value)

// Good
int x = 0;
cout << x;  // Output: 0
```

### 2. Use Meaningful Names

```cpp
// Bad
int a, b, c;
double x;

// Good
int studentAge, totalMarks, numberOfStudents;
double averageScore;
```

### 3. Declare Variables Close to Usage

```cpp
// Bad
int x, y, z;
// ... 100 lines of code ...
x = 10;

// Good
// ... code ...
int x = 10;  // Declare when needed
```

### 4. Use const for Values That Don't Change

```cpp
// Bad
int maxSize = 100;
// ... code that might accidentally modify maxSize ...

// Good
const int MAX_SIZE = 100;
// MAX_SIZE = 200;  // Compiler error - prevents accidents
```

### 5. Choose Appropriate Data Types

```cpp
// Bad - wastes memory
long long age = 25;  // 8 bytes for small value

// Good
int age = 25;  // 4 bytes sufficient

// Bad - loses precision
int price = 99.99;  // Becomes 99

// Good
double price = 99.99;
```

### 6. Avoid Global Variables

```cpp
// Bad
int counter = 0;  // Global - can be modified anywhere

void increment() { counter++; }
void decrement() { counter--; }

// Good - use parameters and return values
int increment(int counter) { return counter + 1; }
int decrement(int counter) { return counter - 1; }
```

### 7. Use auto for Complex Types (C++11)

```cpp
// Bad - verbose
std::vector<std::string>::iterator it = myVector.begin();

// Good - cleaner
auto it = myVector.begin();
```

### 8. Avoid Magic Numbers

```cpp
// Bad
if(age > 18) { /* ... */ }
double area = 3.14159 * r * r;

// Good
const int LEGAL_AGE = 18;
const double PI = 3.14159;

if(age > LEGAL_AGE) { /* ... */ }
double area = PI * r * r;
```

---

## 🎯 Common Mistakes to Avoid

### 1. Uninitialized Variables
```cpp
int x;
cout << x;  // Undefined behavior - could be any value
```

### 2. Integer Division
```cpp
int result = 5 / 2;  // result = 2 (not 2.5)
double result = 5.0 / 2;  // result = 2.5
```

### 3. Overflow
```cpp
int x = 2147483647;  // Maximum int value
x = x + 1;  // Overflow - undefined behavior
```

### 4. Comparing Floating-Point Numbers
```cpp
double a = 0.1 + 0.2;
if(a == 0.3)  // May be false due to precision errors
{
    // Use epsilon comparison instead
}

// Better approach
const double EPSILON = 0.0001;
if(abs(a - 0.3) < EPSILON)
{
    // Close enough
}
```

### 5. Shadowing Variables
```cpp
int x = 10;
{
    int x = 20;  // Shadows outer x
    cout << x;   // Output: 20 (inner x)
}
cout << x;  // Output: 10 (outer x)
```

---

## 📝 Practice Problems

1. Declare variables to store: student name, age, GPA, and pass/fail status
2. What is the output of: `int x = 5; double y = x / 2;`?
3. Find the size of all primitive data types on your system
4. Create a program that swaps two variables without using a third variable
5. What's wrong with: `int 2ndNumber = 20;`?
6. Explain the difference between `const` and `#define`
7. What is variable shadowing? Give an example.
8. Why should you avoid global variables?

---

## 🔗 Related Topics

- [Operators](../Operators/README.md)
- [Input/Output](../Inputs/README.md)
- Control Structures (if, switch, loops)
- Functions and Parameters
- Arrays and Pointers

---

**Happy Learning! 🚀**
