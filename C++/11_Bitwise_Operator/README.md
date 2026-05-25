# ⚡ Bitwise Operators & Data Type Modifiers in C++

## 📚 Overview

Welcome to the **Bitwise Operators & Data Type Modifiers** section! This module covers low-level operations that work directly with bits, data type modifiers that change variable properties, and advanced C++ concepts essential for optimization and system programming.

**Topics Covered:**

- Bitwise Operators (AND, OR, XOR, NOT, Shifts)
- Data Type Modifiers (signed, unsigned, short, long)
- Bit Manipulation Techniques
- Storage Classes
- Type Qualifiers (const, volatile)
- Advanced Operators

---

## 🎯 Table of Contents

1. [Bitwise Operators](#-bitwise-operators)
2. [Data Type Modifiers](#-data-type-modifiers)
3. [Storage Classes](#-storage-classes)
4. [Type Qualifiers](#-type-qualifiers)
5. [Advanced Operators](#-advanced-operators)
6. [Bit Manipulation Tricks](#-bit-manipulation-tricks)
7. [Practice Problems](#-practice-problems)

---

## ⚡ Bitwise Operators

### **What are Bitwise Operators?**

Bitwise operators work on individual bits of data. They perform operations at the binary level, making them extremely fast and efficient.

### **All Bitwise Operators:**

| Operator        | Name        | Symbol | Description           | Example       |
| --------------- | ----------- | ------ | --------------------- | ------------- |
| **AND**         | Bitwise AND | `&`    | Both bits must be 1   | `5 & 3 = 1`   |
| **OR**          | Bitwise OR  | `\|`   | At least one bit is 1 | `5 \| 3 = 7`  |
| **XOR**         | Bitwise XOR | `^`    | Bits are different    | `5 ^ 3 = 6`   |
| **NOT**         | Bitwise NOT | `~`    | Flip all bits         | `~5 = -6`     |
| **Left Shift**  | Left Shift  | `<<`   | Shift bits left       | `5 << 1 = 10` |
| **Right Shift** | Right Shift | `>>`   | Shift bits right      | `5 >> 1 = 2`  |

---

### **1. Bitwise AND (`&`)**

**Operation:** Both bits must be 1 to get 1

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 0101
    int b = 3;  // 0011

    int result = a & b;  // 0001 = 1

    cout << "5 & 3 = " << result << endl;  // Output: 1

    // Truth Table:
    // 0 & 0 = 0
    // 0 & 1 = 0
    // 1 & 0 = 0
    // 1 & 1 = 1

    return 0;
}
```

**Visual Representation:**

```
  5 = 0101
& 3 = 0011
-----------
  1 = 0001
```

**Use Cases:**

- Check if a bit is set: `if (num & (1 << pos))`
- Clear bits: `num & ~mask`
- Extract specific bits
- Check even/odd: `num & 1` (0=even, 1=odd)

---

### **2. Bitwise OR (`|`)**

**Operation:** At least one bit must be 1 to get 1

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 0101
    int b = 3;  // 0011

    int result = a | b;  // 0111 = 7

    cout << "5 | 3 = " << result << endl;  // Output: 7

    // Truth Table:
    // 0 | 0 = 0
    // 0 | 1 = 1
    // 1 | 0 = 1
    // 1 | 1 = 1

    return 0;
}
```

**Visual Representation:**

```
  5 = 0101
| 3 = 0011
-----------
  7 = 0111
```

**Use Cases:**

- Set a bit: `num | (1 << pos)`
- Combine flags
- Merge bit patterns

---

### **3. Bitwise XOR (`^`)**

**Operation:** Bits must be different to get 1

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 0101
    int b = 3;  // 0011

    int result = a ^ b;  // 0110 = 6

    cout << "5 ^ 3 = " << result << endl;  // Output: 6

    // Truth Table:
    // 0 ^ 0 = 0
    // 0 ^ 1 = 1
    // 1 ^ 0 = 1
    // 1 ^ 1 = 0

    return 0;
}
```

**Visual Representation:**

```
  5 = 0101
^ 3 = 0011
-----------
  6 = 0110
```

**Use Cases:**

- Toggle a bit: `num ^ (1 << pos)`
- Swap without temp: `a ^= b; b ^= a; a ^= b;`
- Find unique element (all others appear twice)
- Encryption/Decryption

**XOR Properties:**

- `a ^ a = 0` (same numbers cancel out)
- `a ^ 0 = a` (XOR with 0 gives original)
- `a ^ b ^ b = a` (XOR is reversible)

---

### **4. Bitwise NOT (`~`)**

**Operation:** Flip all bits (0→1, 1→0)

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 00000101 (8-bit)

    int result = ~a;  // 11111010 = -6 (two's complement)

    cout << "~5 = " << result << endl;  // Output: -6

    // In two's complement:
    // ~5 = -6
    // Formula: ~n = -(n+1)

    return 0;
}
```

**Visual Representation:**

```
  5 = 00000101
~ 5 = 11111010 = -6 (in two's complement)
```

**Use Cases:**

- Create bit masks
- Invert all bits
- Clear specific bits: `num & ~(1 << pos)`

---

### **5. Left Shift (`<<`)**

**Operation:** Shift bits to the left, fill with 0s

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 5;  // 0101

    int result1 = a << 1;  // 1010 = 10
    int result2 = a << 2;  // 10100 = 20

    cout << "5 << 1 = " << result1 << endl;  // Output: 10
    cout << "5 << 2 = " << result2 << endl;  // Output: 20

    // Formula: n << k = n × 2^k

    return 0;
}
```

**Visual Representation:**

```
Original:  0101 (5)
<< 1:     01010 (10)
<< 2:    010100 (20)
```

**Use Cases:**

- Fast multiplication by powers of 2: `n << k = n × 2^k`
- Create bit masks: `1 << pos`
- Set specific bits

---

### **6. Right Shift (`>>`)**

**Operation:** Shift bits to the right

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 20;  // 10100

    int result1 = a >> 1;  // 01010 = 10
    int result2 = a >> 2;  // 00101 = 5

    cout << "20 >> 1 = " << result1 << endl;  // Output: 10
    cout << "20 >> 2 = " << result2 << endl;  // Output: 5

    // Formula: n >> k = n ÷ 2^k (integer division)

    return 0;
}
```

**Visual Representation:**

```
Original: 10100 (20)
>> 1:     01010 (10)
>> 2:     00101 (5)
```

**Types of Right Shift:**

- **Logical Shift:** Fill with 0s (unsigned)
- **Arithmetic Shift:** Fill with sign bit (signed)

**Use Cases:**

- Fast division by powers of 2: `n >> k = n ÷ 2^k`
- Extract bits
- Optimize division operations

---

## 📊 Data Type Modifiers

### **What are Data Type Modifiers?**

Modifiers change the properties of basic data types (range, size, sign).

### **All Data Type Modifiers:**

| Modifier      | Description                     | Example         |
| ------------- | ------------------------------- | --------------- |
| **signed**    | Can store negative and positive | `signed int`    |
| **unsigned**  | Only positive values            | `unsigned int`  |
| **short**     | Smaller range                   | `short int`     |
| **long**      | Larger range                    | `long int`      |
| **long long** | Even larger range               | `long long int` |

---

### **1. Signed vs Unsigned**

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // SIGNED (default)
    signed int a = -10;
    cout << "Signed int: " << a << endl;
    cout << "Range: " << INT_MIN << " to " << INT_MAX << endl;
    // Range: -2,147,483,648 to 2,147,483,647

    // UNSIGNED (only positive)
    unsigned int b = 10;
    cout << "Unsigned int: " << b << endl;
    cout << "Range: 0 to " << UINT_MAX << endl;
    // Range: 0 to 4,294,967,295

    return 0;
}
```

**Key Differences:**

| Type            | Size    | Range                           |
| --------------- | ------- | ------------------------------- |
| `signed int`    | 4 bytes | -2,147,483,648 to 2,147,483,647 |
| `unsigned int`  | 4 bytes | 0 to 4,294,967,295              |
| `signed char`   | 1 byte  | -128 to 127                     |
| `unsigned char` | 1 byte  | 0 to 255                        |

**When to use unsigned:**

- When you know value will never be negative
- Need larger positive range
- Working with bit patterns
- Array indices, sizes, counts

---

### **2. Short, Long, Long Long**

```cpp
#include <iostream>
#include <climits>
using namespace std;

int main() {
    // SHORT (smaller range)
    short int a = 32000;
    cout << "Short: " << sizeof(short) << " bytes" << endl;
    cout << "Range: " << SHRT_MIN << " to " << SHRT_MAX << endl;
    // 2 bytes: -32,768 to 32,767

    // INT (standard)
    int b = 2000000000;
    cout << "Int: " << sizeof(int) << " bytes" << endl;
    cout << "Range: " << INT_MIN << " to " << INT_MAX << endl;
    // 4 bytes: -2,147,483,648 to 2,147,483,647

    // LONG (larger range)
    long int c = 2000000000L;
    cout << "Long: " << sizeof(long) << " bytes" << endl;
    cout << "Range: " << LONG_MIN << " to " << LONG_MAX << endl;
    // 4 or 8 bytes (platform dependent)

    // LONG LONG (largest range)
    long long int d = 9000000000000000000LL;
    cout << "Long Long: " << sizeof(long long) << " bytes" << endl;
    cout << "Range: " << LLONG_MIN << " to " << LLONG_MAX << endl;
    // 8 bytes: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807

    return 0;
}
```

**Size Comparison:**

| Type        | Size      | Range (signed)                      |
| ----------- | --------- | ----------------------------------- |
| `short`     | 2 bytes   | -32,768 to 32,767                   |
| `int`       | 4 bytes   | -2.1B to 2.1B                       |
| `long`      | 4/8 bytes | Platform dependent                  |
| `long long` | 8 bytes   | -9.2 quintillion to 9.2 quintillion |

---

### **3. Combining Modifiers**

```cpp
#include <iostream>
using namespace std;

int main() {
    // Valid combinations
    unsigned short int a = 65000;
    unsigned long int b = 4000000000;
    unsigned long long int c = 18000000000000000000ULL;

    signed short int d = -30000;
    signed long long int e = -9000000000000000000LL;

    // Shorthand (int is optional)
    unsigned short f = 60000;
    unsigned long g = 3000000000;
    long long h = 9000000000000000000LL;

    cout << "unsigned short: " << a << endl;
    cout << "unsigned long: " << b << endl;
    cout << "unsigned long long: " << c << endl;

    return 0;
}
```

---

## 🗄️ Storage Classes

### **What are Storage Classes?**

Storage classes define the scope, lifetime, and visibility of variables.

### **All Storage Classes:**

| Storage Class | Keyword    | Scope      | Lifetime | Default Value |
| ------------- | ---------- | ---------- | -------- | ------------- |
| **Automatic** | `auto`     | Block      | Block    | Garbage       |
| **Static**    | `static`   | Block/File | Program  | 0             |
| **External**  | `extern`   | Global     | Program  | 0             |
| **Register**  | `register` | Block      | Block    | Garbage       |

---

### **1. Auto (Automatic)**

```cpp
#include <iostream>
using namespace std;

void function() {
    auto int x = 10;  // 'auto' is default, usually omitted
    int y = 20;       // Same as 'auto int y = 20'

    cout << "x = " << x << ", y = " << y << endl;
}  // x and y destroyed here

int main() {
    function();
    // x and y don't exist here

    return 0;
}
```

**Properties:**

- Default storage class for local variables
- Created when block is entered
- Destroyed when block is exited
- Not initialized by default (garbage value)

---

### **2. Static**

```cpp
#include <iostream>
using namespace std;

void counter() {
    static int count = 0;  // Initialized only once
    count++;
    cout << "Count: " << count << endl;
}

int main() {
    counter();  // Output: Count: 1
    counter();  // Output: Count: 2
    counter();  // Output: Count: 3
    counter();  // Output: Count: 4

    return 0;
}
```

**Properties:**

- Retains value between function calls
- Initialized only once
- Default value is 0
- Lifetime: entire program
- Scope: limited to block/file

**Use Cases:**

- Function call counters
- Caching values
- Singleton pattern
- File-scope variables

---

### **3. External (extern)**

```cpp
// file1.cpp
#include <iostream>
using namespace std;

int globalVar = 100;  // Definition

void display() {
    cout << "Global: " << globalVar << endl;
}

// file2.cpp
#include <iostream>
using namespace std;

extern int globalVar;  // Declaration (defined in file1.cpp)

int main() {
    cout << "Value: " << globalVar << endl;  // Access from file1.cpp
    globalVar = 200;
    display();  // Output: Global: 200

    return 0;
}
```

**Properties:**

- Used for global variables across files
- Declaration vs Definition
- Lifetime: entire program
- Scope: all files

---

### **4. Register**

```cpp
#include <iostream>
using namespace std;

int main() {
    register int counter = 0;  // Hint to store in CPU register

    for (register int i = 0; i < 1000000; i++) {
        counter++;
    }

    cout << "Counter: " << counter << endl;

    // Note: Cannot take address of register variable
    // &counter;  // ERROR!

    return 0;
}
```

**Properties:**

- Hint to compiler to store in CPU register
- Faster access than RAM
- Cannot use `&` (address-of operator)
- Compiler may ignore the hint
- Rarely used in modern C++

---

## 🔒 Type Qualifiers

### **1. const (Constant)**

```cpp
#include <iostream>
using namespace std;

int main() {
    const int MAX = 100;
    // MAX = 200;  // ERROR: Cannot modify const

    const int* ptr1;        // Pointer to const int
    int* const ptr2 = &x;   // Const pointer to int
    const int* const ptr3;  // Const pointer to const int

    // Const with functions
    void display(const int& x);  // Cannot modify x

    return 0;
}
```

**Use Cases:**

- Prevent accidental modification
- Function parameters
- Constants
- Read-only data

---

### **2. volatile**

```cpp
#include <iostream>
using namespace std;

int main() {
    volatile int sensorValue;  // Value can change unexpectedly

    // Compiler won't optimize reads
    int a = sensorValue;
    int b = sensorValue;  // Will read again (not cached)

    return 0;
}
```

**Use Cases:**

- Hardware registers
- Memory-mapped I/O
- Multi-threaded variables
- Signal handlers

---

## 🚀 Advanced Operators

### **1. Sizeof Operator**

```cpp
#include <iostream>
using namespace std;

int main() {
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    cout << "Size of char: " << sizeof(char) << " bytes" << endl;
    cout << "Size of float: " << sizeof(float) << " bytes" << endl;
    cout << "Size of double: " << sizeof(double) << " bytes" << endl;

    int arr[10];
    cout << "Size of array: " << sizeof(arr) << " bytes" << endl;
    cout << "Array length: " << sizeof(arr)/sizeof(arr[0]) << endl;

    return 0;
}
```

---

### **2. Comma Operator**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a, b, c;

    a = (b = 5, c = 10, b + c);  // a = 15

    cout << "a = " << a << endl;  // Output: 15

    // In for loop
    for (int i = 0, j = 10; i < j; i++, j--) {
        cout << i << " " << j << endl;
    }

    return 0;
}
```

---

### **3. Conditional (Ternary) Operator**

```cpp
#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 20;

    int max = (a > b) ? a : b;
    cout << "Max: " << max << endl;  // Output: 20

    // Nested ternary
    int x = 5;
    string result = (x > 0) ? "Positive" :
                    (x < 0) ? "Negative" : "Zero";

    return 0;
}
```

---

## 💡 Bit Manipulation Tricks

### **1. Check if Power of 2**

```cpp
bool isPowerOfTwo(int n) {
    return (n > 0) && ((n & (n - 1)) == 0);
}

// Examples:
// 8 = 1000, 7 = 0111, 8 & 7 = 0000 ✅
// 6 = 0110, 5 = 0101, 6 & 5 = 0100 ❌
```

---

### **2. Count Set Bits**

```cpp
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1);  // Remove rightmost set bit
        count++;
    }
    return count;
}

// Example: 13 = 1101 → 3 set bits
```

---

### **3. Swap Two Numbers**

```cpp
void swap(int& a, int& b) {
    a = a ^ b;
    b = a ^ b;  // b = (a ^ b) ^ b = a
    a = a ^ b;  // a = (a ^ b) ^ a = b
}
```

---

### **4. Get, Set, Clear, Toggle Bit**

```cpp
// Get bit at position
bool getBit(int num, int pos) {
    return (num & (1 << pos)) != 0;
}

// Set bit at position
int setBit(int num, int pos) {
    return num | (1 << pos);
}

// Clear bit at position
int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}

// Toggle bit at position
int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}
```

---

### **5. Find Unique Element**

```cpp
// All elements appear twice except one
int findUnique(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];  // XOR cancels duplicates
    }
    return result;
}
```

---

### **6. Reverse Bits**

```cpp
unsigned int reverseBits(unsigned int n) {
    unsigned int result = 0;
    for (int i = 0; i < 32; i++) {
        result <<= 1;
        result |= (n & 1);
        n >>= 1;
    }
    return result;
}
```

---

## 📊 Complete Reference Table

### **Data Type Sizes & Ranges**

| Type        | Size      | Signed Range       | Unsigned Range     |
| ----------- | --------- | ------------------ | ------------------ |
| `char`      | 1 byte    | -128 to 127        | 0 to 255           |
| `short`     | 2 bytes   | -32,768 to 32,767  | 0 to 65,535        |
| `int`       | 4 bytes   | -2.1B to 2.1B      | 0 to 4.3B          |
| `long`      | 4/8 bytes | Platform dependent | Platform dependent |
| `long long` | 8 bytes   | -9.2E18 to 9.2E18  | 0 to 1.8E19        |

---

## 🎯 Practice Problems

### **Easy:**

1. Check if a number is even or odd using bitwise
2. Multiply a number by 8 using bit shift
3. Swap two numbers without temp variable
4. Count number of 1s in binary representation
5. Check if kth bit is set

### **Medium:**

1. Find the only non-repeating element (Leetcode #136)
2. Reverse bits of a number (Leetcode #190)
3. Power of Two (Leetcode #231)
4. Counting Bits (Leetcode #338)
5. Single Number II (Leetcode #137)

### **Hard:**

1. Maximum XOR of Two Numbers (Leetcode #421)
2. Find two non-repeating elements
3. Count total set bits from 1 to n
4. Divide two integers using bit manipulation

---

## 💡 Pro Tips

### **Performance Tips:**

1. Use bit shifts instead of multiplication/division by powers of 2
2. Use `&` instead of `%` for power of 2 modulo
3. Use XOR for swapping (no temp variable)
4. Use bit masks for multiple flags

### **Common Mistakes:**

- ❌ Confusing `&` (bitwise) with `&&` (logical)
- ❌ Confusing `|` (bitwise) with `||` (logical)
- ❌ Not using parentheses with bitwise operators
- ❌ Forgetting operator precedence
- ❌ Using signed right shift on negative numbers

### **Best Practices:**

- ✅ Use unsigned for bit manipulation
- ✅ Always use parentheses for clarity
- ✅ Comment bit manipulation code
- ✅ Use meaningful variable names
- ✅ Test with edge cases

---

## 📖 Additional Resources

- **Visualizations:** [Bitwise Calculator](https://www.rapidtables.com/calc/math/binary-calculator.html)
- **Practice:** [LeetCode Bit Manipulation](https://leetcode.com/tag/bit-manipulation/)
- **Tutorial:** [GeeksforGeeks Bitwise](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/)
- **Book:** "Hacker's Delight" by Henry S. Warren

---

## ✅ Checklist

- [ ] Understand all 6 bitwise operators
- [ ] Master data type modifiers
- [ ] Learn storage classes
- [ ] Practice bit manipulation tricks
- [ ] Solve at least 10 bitwise problems
- [ ] Understand signed vs unsigned
- [ ] Master bit shifting
- [ ] Learn XOR properties
- [ ] Understand two's complement
- [ ] Practice optimization techniques

---

**Happy Coding! ⚡**

_Remember: Bitwise operations are the fastest operations in computers. Master them for optimization and low-level programming!_
