# C++ Operators - Complete Guide

This document covers all types of operators in C++ with detailed explanations and examples.

---

## 📚 Table of Contents

1. [Arithmetic Operators](#arithmetic-operators)
2. [Relational Operators](#relational-operators)
3. [Logical Operators](#logical-operators)
4. [Bitwise Operators](#bitwise-operators)
5. [Assignment Operators](#assignment-operators)
6. [Increment/Decrement Operators](#incrementdecrement-operators)
7. [Conditional (Ternary) Operator](#conditional-ternary-operator)
8. [Comma Operator](#comma-operator)
9. [Sizeof Operator](#sizeof-operator)
10. [Pointer Operators](#pointer-operators)
11. [Member Access Operators](#member-access-operators)
12. [Other Operators](#other-operators)
13. [Operator Precedence](#operator-precedence)

---

## 1. Arithmetic Operators

Used to perform mathematical operations.

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `+` | Addition | Adds two operands | `a + b` |
| `-` | Subtraction | Subtracts second operand from first | `a - b` |
| `*` | Multiplication | Multiplies two operands | `a * b` |
| `/` | Division | Divides first operand by second | `a / b` |
| `%` | Modulus | Returns remainder of division | `a % b` |

### Example:
```cpp
int a = 10, b = 3;
cout << a + b;  // Output: 13
cout << a - b;  // Output: 7
cout << a * b;  // Output: 30
cout << a / b;  // Output: 3 (integer division)
cout << a % b;  // Output: 1 (remainder)
```

### Important Notes:
- **Integer Division**: `10 / 3 = 3` (not 3.33)
- **Float Division**: `10.0 / 3 = 3.333...`
- **Modulus**: Only works with integers
- **Division by Zero**: Undefined behavior (causes runtime error)

---

## 2. Relational Operators

Used to compare two values. Returns `true` (1) or `false` (0).

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `==` | Equal to | Checks if two operands are equal | `a == b` |
| `!=` | Not equal to | Checks if two operands are not equal | `a != b` |
| `>` | Greater than | Checks if left operand is greater | `a > b` |
| `<` | Less than | Checks if left operand is smaller | `a < b` |
| `>=` | Greater than or equal to | Checks if left is greater or equal | `a >= b` |
| `<=` | Less than or equal to | Checks if left is smaller or equal | `a <= b` |

### Example:
```cpp
int a = 5, b = 10;
cout << (a == b);  // Output: 0 (false)
cout << (a != b);  // Output: 1 (true)
cout << (a > b);   // Output: 0 (false)
cout << (a < b);   // Output: 1 (true)
cout << (a >= 5);  // Output: 1 (true)
cout << (a <= 5);  // Output: 1 (true)
```

### Important Notes:
- Use `==` for comparison, not `=` (assignment)
- Result is always boolean (true/false)
- Can be used with numbers, characters, and strings

---

## 3. Logical Operators

Used to combine conditional statements.

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `&&` | Logical AND | Returns true if both operands are true | `a && b` |
| `\|\|` | Logical OR | Returns true if at least one operand is true | `a \|\| b` |
| `!` | Logical NOT | Reverses the logical state | `!a` |

### Truth Table:

**AND (&&)**
| A | B | A && B |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

**OR (||)**
| A | B | A \|\| B |
|---|---|--------|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

**NOT (!)**
| A | !A |
|---|-----|
| 0 | 1 |
| 1 | 0 |

### Example:
```cpp
int a = 5, b = 10, c = 15;

// AND operator
if(a < b && b < c)  // true && true = true
    cout << "Both conditions are true";

// OR operator
if(a > b || b < c)  // false || true = true
    cout << "At least one condition is true";

// NOT operator
if(!(a > b))  // !(false) = true
    cout << "a is not greater than b";
```

### Short-Circuit Evaluation:
- **AND**: If first condition is false, second is not evaluated
- **OR**: If first condition is true, second is not evaluated

```cpp
int x = 0;
if(x != 0 && 10/x > 1)  // Second part not evaluated, no division by zero error
    cout << "Safe!";
```

---

## 4. Bitwise Operators

Operate on bits (binary representation) of integers.

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `&` | Bitwise AND | Sets bit to 1 if both bits are 1 | `a & b` |
| `\|` | Bitwise OR | Sets bit to 1 if at least one bit is 1 | `a \| b` |
| `^` | Bitwise XOR | Sets bit to 1 if bits are different | `a ^ b` |
| `~` | Bitwise NOT | Inverts all bits | `~a` |
| `<<` | Left shift | Shifts bits left, fills with 0 | `a << 2` |
| `>>` | Right shift | Shifts bits right | `a >> 2` |

### Example:
```cpp
int a = 5;   // Binary: 0101
int b = 3;   // Binary: 0011

cout << (a & b);   // Output: 1  (0001)
cout << (a | b);   // Output: 7  (0111)
cout << (a ^ b);   // Output: 6  (0110)
cout << (~a);      // Output: -6 (inverts all bits)
cout << (a << 1);  // Output: 10 (1010) - multiply by 2
cout << (a >> 1);  // Output: 2  (0010) - divide by 2
```

### Common Uses:
- **Check if even/odd**: `n & 1` (returns 1 if odd, 0 if even)
- **Multiply by 2**: `n << 1`
- **Divide by 2**: `n >> 1`
- **Toggle bit**: `n ^ (1 << i)`
- **Set bit**: `n | (1 << i)`
- **Clear bit**: `n & ~(1 << i)`

---

## 5. Assignment Operators

Used to assign values to variables.

| Operator | Name | Description | Example | Equivalent |
|----------|------|-------------|---------|------------|
| `=` | Assignment | Assigns right operand to left | `a = b` | - |
| `+=` | Add and assign | Adds and assigns | `a += b` | `a = a + b` |
| `-=` | Subtract and assign | Subtracts and assigns | `a -= b` | `a = a - b` |
| `*=` | Multiply and assign | Multiplies and assigns | `a *= b` | `a = a * b` |
| `/=` | Divide and assign | Divides and assigns | `a /= b` | `a = a / b` |
| `%=` | Modulus and assign | Modulus and assigns | `a %= b` | `a = a % b` |
| `&=` | Bitwise AND and assign | AND and assigns | `a &= b` | `a = a & b` |
| `\|=` | Bitwise OR and assign | OR and assigns | `a \|= b` | `a = a \| b` |
| `^=` | Bitwise XOR and assign | XOR and assigns | `a ^= b` | `a = a ^ b` |
| `<<=` | Left shift and assign | Left shifts and assigns | `a <<= 2` | `a = a << 2` |
| `>>=` | Right shift and assign | Right shifts and assigns | `a >>= 2` | `a = a >> 2` |

### Example:
```cpp
int a = 10;
a += 5;   // a = 15
a -= 3;   // a = 12
a *= 2;   // a = 24
a /= 4;   // a = 6
a %= 4;   // a = 2
```

---

## 6. Increment/Decrement Operators || Unary Operators

Used to increase or decrease value by 1.

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `++` | Increment | Increases value by 1 | `++a` or `a++` |
| `--` | Decrement | Decreases value by 1 | `--a` or `a--` |

### Pre vs Post Increment/Decrement:

**Pre-increment (++a)**: Increment first, then use
```cpp
int a = 5;
int b = ++a;  // a = 6, b = 6
```

**Post-increment (a++)**: Use first, then increment
```cpp
int a = 5;
int b = a++;  // a = 6, b = 5
```

### Example:
```cpp
int x = 10;

// Pre-increment
cout << ++x;  // Output: 11 (x becomes 11, then printed)
cout << x;    // Output: 11

// Post-increment
x = 10;
cout << x++;  // Output: 10 (printed first, then x becomes 11)
cout << x;    // Output: 11
```

---

## 7. Conditional (Ternary) Operator

A shorthand for if-else statement.

**Syntax**: `condition ? expression1 : expression2`

### Example:
```cpp
int a = 10, b = 20;

// Find maximum
int max = (a > b) ? a : b;  // max = 20

// Check even/odd
string result = (a % 2 == 0) ? "Even" : "Odd";  // result = "Even"

// Nested ternary
int x = 5;
string grade = (x >= 90) ? "A" : 
               (x >= 80) ? "B" : 
               (x >= 70) ? "C" : "F";
```

---

## 8. Comma Operator

Evaluates multiple expressions, returns the last one.

### Example:
```cpp
int a, b, c;
a = (b = 5, c = 10, b + c);  // a = 15

// In for loop
for(int i = 0, j = 10; i < j; i++, j--)
{
    cout << i << " " << j << endl;
}
```

---

## 9. Sizeof Operator

Returns the size (in bytes) of a variable or data type.

### Example:
```cpp
cout << sizeof(int);        // Output: 4 (bytes)
cout << sizeof(char);       // Output: 1
cout << sizeof(double);     // Output: 8
cout << sizeof(bool);       // Output: 1

int arr[10];
cout << sizeof(arr);        // Output: 40 (10 * 4)
cout << sizeof(arr)/sizeof(arr[0]);  // Output: 10 (array length)
```

### Common Data Type Sizes:
| Type | Size (bytes) |
|------|--------------|
| `char` | 1 |
| `bool` | 1 |
| `int` | 4 |
| `float` | 4 |
| `double` | 8 |
| `long long` | 8 |
| `pointer` | 8 (on 64-bit systems) |

---

## 10. Pointer Operators

Used with pointers to access memory addresses.

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `&` | Address-of | Returns memory address of variable | `&a` |
| `*` | Dereference | Accesses value at pointer address | `*ptr` |

### Example:
```cpp
int a = 10;
int* ptr = &a;  // ptr stores address of a

cout << a;      // Output: 10 (value)
cout << &a;     // Output: 0x7ffd... (address)
cout << ptr;    // Output: 0x7ffd... (address stored in ptr)
cout << *ptr;   // Output: 10 (value at address)

*ptr = 20;      // Changes value of a to 20
cout << a;      // Output: 20
```

---

## 11. Member Access Operators

Used to access members of structures and classes.

| Operator | Name | Description | Example |
|----------|------|-------------|---------|
| `.` | Dot | Access member of object | `obj.member` |
| `->` | Arrow | Access member through pointer | `ptr->member` |
| `::` | Scope resolution | Access static/global members | `Class::member` |

### Example:
```cpp
struct Student {
    string name;
    int age;
};

// Dot operator
Student s1;
s1.name = "John";
s1.age = 20;

// Arrow operator
Student* ptr = &s1;
ptr->name = "Jane";
ptr->age = 21;

// Scope resolution
class MyClass {
public:
    static int count;
};
int MyClass::count = 0;  // Define static member
```

---

## 12. Other Operators

### Cast Operator
Converts one data type to another.

```cpp
int a = 10;
double b = (double)a;  // C-style cast
double c = static_cast<double>(a);  // C++ style cast
```

### Type Identification
```cpp
typeid(variable).name()  // Returns type information
```

---

## 13. Operator Precedence

Operators are evaluated in order of precedence (highest to lowest):

| Precedence | Operator | Description |
|------------|----------|-------------|
| 1 | `::` | Scope resolution |
| 2 | `()` `[]` `.` `->` | Function call, array subscript, member access |
| 3 | `++` `--` `!` `~` `*` `&` | Unary operators |
| 4 | `*` `/` `%` | Multiplication, division, modulus |
| 5 | `+` `-` | Addition, subtraction |
| 6 | `<<` `>>` | Bitwise shift |
| 7 | `<` `<=` `>` `>=` | Relational |
| 8 | `==` `!=` | Equality |
| 9 | `&` | Bitwise AND |
| 10 | `^` | Bitwise XOR |
| 11 | `\|` | Bitwise OR |
| 12 | `&&` | Logical AND |
| 13 | `\|\|` | Logical OR |
| 14 | `?:` | Conditional |
| 15 | `=` `+=` `-=` etc. | Assignment |
| 16 | `,` | Comma |

### Example:
```cpp
int result = 5 + 3 * 2;  // Output: 11 (not 16)
// Multiplication has higher precedence than addition

int result2 = (5 + 3) * 2;  // Output: 16
// Parentheses have highest precedence
```

---

## 💡 Important Tips

1. **Use parentheses** for clarity, even when not required
2. **Avoid complex expressions** - break them into multiple lines
3. **Be careful with operator precedence** - when in doubt, use parentheses
4. **Don't confuse `=` with `==`** - common beginner mistake
5. **Use compound assignments** (`+=`, `-=`) for cleaner code
6. **Understand pre vs post increment** - can cause subtle bugs
7. **Bitwise operators** are very useful for optimization and bit manipulation

---

## 🎯 Practice Problems

1. What is the output of `5 + 3 * 2`?
2. What is the difference between `++i` and `i++`?
3. How do you check if a number is even using bitwise operators?
4. What does `a ^= b; b ^= a; a ^= b;` do? (Hint: swap without temp variable)
5. What is the output of `10 / 3` vs `10.0 / 3`?

---

**Happy Learning! 🚀**
