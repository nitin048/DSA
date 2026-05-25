# 🔢 Binary Number System

## 📚 Overview

Welcome to the **Binary Number System** section! This module covers the fundamental concepts of binary numbers, bitwise operations, and their applications in computer science. Understanding binary is crucial for low-level programming, optimization, and solving bit manipulation problems.

**Topics Covered:**

- Binary number representation
- Decimal to Binary conversion
- Binary to Decimal conversion
- Bitwise operators
- Bit manipulation techniques
- Common bit manipulation problems

---

## 🎯 Why Learn Binary?

### **Real-World Applications:**

1. **Computer Memory** - All data is stored in binary (0s and 1s)
2. **Network Protocols** - IP addresses, subnet masks
3. **Graphics & Images** - Color representation (RGB)
4. **Cryptography** - Encryption algorithms
5. **Compression** - File compression techniques
6. **Hardware Programming** - Embedded systems, IoT
7. **Optimization** - Fast arithmetic operations

### **Interview Importance:**

- ⭐⭐⭐⭐⭐ Frequently asked in technical interviews
- Used in competitive programming
- Essential for system design questions
- Required for low-level optimization

---

## 📖 Concepts

### **1. Binary Number System Basics**

#### **What is Binary?**

- Binary is a **base-2** number system
- Uses only two digits: **0** and **1**
- Each digit is called a **bit** (binary digit)
- 8 bits = 1 byte

#### **Place Values in Binary:**

```
Position:  7    6    5    4    3    2    1    0
Binary:    1    0    1    1    0    1    0    1
Value:    128  64   32   16   8    4    2    1
```

**Example:** Binary `10110101` = 128 + 32 + 16 + 4 + 1 = **181** (Decimal)

---

### **2. Number System Comparison**

| System          | Base | Digits   | Example      |
| --------------- | ---- | -------- | ------------ |
| **Binary**      | 2    | 0, 1     | 1011₂ = 11₁₀ |
| **Decimal**     | 10   | 0-9      | 11₁₀         |
| **Octal**       | 8    | 0-7      | 13₈ = 11₁₀   |
| **Hexadecimal** | 16   | 0-9, A-F | B₁₆ = 11₁₀   |

---

### **3. Conversion Methods**

#### **A. Decimal to Binary**

**Method 1: Division by 2 (Remainder Method)**

```
Convert 13 to Binary:
13 ÷ 2 = 6  remainder 1  ↓
6  ÷ 2 = 3  remainder 0  ↓
3  ÷ 2 = 1  remainder 1  ↓
1  ÷ 2 = 0  remainder 1  ↓

Read from bottom to top: 1101
Answer: 13₁₀ = 1101₂
```

**Method 2: Subtraction Method**

```
Convert 13 to Binary:
Largest power of 2 ≤ 13 is 8 (2³)
13 - 8 = 5  → bit 3 = 1
5 - 4 = 1   → bit 2 = 1
1 - 1 = 0   → bit 0 = 1

Answer: 1101₂
```

#### **B. Binary to Decimal**

**Method: Multiply by Powers of 2**

```
Convert 1101₂ to Decimal:
Position:  3   2   1   0
Binary:    1   1   0   1
Value:     8 + 4 + 0 + 1 = 13

Answer: 1101₂ = 13₁₀
```

---

### **4. Bitwise Operators**

| Operator        | Symbol | Description           | Example                         |
| --------------- | ------ | --------------------- | ------------------------------- |
| **AND**         | `&`    | Both bits must be 1   | `5 & 3 = 1` (101 & 011 = 001)   |
| **OR**          | `\|`   | At least one bit is 1 | `5 \| 3 = 7` (101 \| 011 = 111) |
| **XOR**         | `^`    | Bits are different    | `5 ^ 3 = 6` (101 ^ 011 = 110)   |
| **NOT**         | `~`    | Flip all bits         | `~5 = -6` (inverts all bits)    |
| **Left Shift**  | `<<`   | Shift bits left       | `5 << 1 = 10` (101 → 1010)      |
| **Right Shift** | `>>`   | Shift bits right      | `5 >> 1 = 2` (101 → 10)         |

#### **Detailed Examples:**

**AND Operator (`&`)**

```
  5 = 0101
& 3 = 0011
-----------
  1 = 0001
```

**Use:** Check if a bit is set, clear bits

**OR Operator (`|`)**

```
  5 = 0101
| 3 = 0011
-----------
  7 = 0111
```

**Use:** Set bits, combine flags

**XOR Operator (`^`)**

```
  5 = 0101
^ 3 = 0011
-----------
  6 = 0110
```

**Use:** Toggle bits, find unique element, swap without temp

**NOT Operator (`~`)**

```
~5 = ~0101 = 1010 (in 4-bit)
```

**Use:** Flip all bits, create masks

**Left Shift (`<<`)**

```
5 << 1 = 0101 << 1 = 1010 = 10
5 << 2 = 0101 << 2 = 10100 = 20
```

**Use:** Multiply by 2ⁿ, create powers of 2

**Right Shift (`>>`)**

```
5 >> 1 = 0101 >> 1 = 0010 = 2
5 >> 2 = 0101 >> 2 = 0001 = 1
```

**Use:** Divide by 2ⁿ, extract bits

---

## 💻 Code Examples

### **1. Decimal to Binary Conversion**

```cpp
#include <iostream>
using namespace std;

// Method 1: Using division
void decimalToBinary(int n) {
    if (n == 0) {
        cout << "0";
        return;
    }

    int binary[32];
    int i = 0;

    while (n > 0) {
        binary[i] = n % 2;
        n = n / 2;
        i++;
    }

    // Print in reverse order
    for (int j = i - 1; j >= 0; j--) {
        cout << binary[j];
    }
}

// Method 2: Using bitwise operations
void decimalToBinaryBitwise(int n) {
    for (int i = 31; i >= 0; i--) {
        int bit = (n >> i) & 1;
        cout << bit;
    }
}

int main() {
    int num = 13;
    cout << "Decimal: " << num << endl;
    cout << "Binary: ";
    decimalToBinary(num);
    cout << endl;

    return 0;
}

// Output:
// Decimal: 13
// Binary: 1101
```

### **2. Binary to Decimal Conversion**

```cpp
#include <iostream>
using namespace std;

int binaryToDecimal(int binary) {
    int decimal = 0;
    int power = 1;  // 2^0 = 1

    while (binary > 0) {
        int lastDigit = binary % 10;
        decimal += lastDigit * power;
        power *= 2;
        binary /= 10;
    }

    return decimal;
}

int main() {
    int binary = 1101;
    cout << "Binary: " << binary << endl;
    cout << "Decimal: " << binaryToDecimal(binary) << endl;

    return 0;
}

// Output:
// Binary: 1101
// Decimal: 13
```

### **3. Check if Bit is Set**

```cpp
bool isBitSet(int num, int pos) {
    return (num & (1 << pos)) != 0;
}

int main() {
    int num = 5;  // 0101
    cout << "Bit at position 0: " << isBitSet(num, 0) << endl;  // 1
    cout << "Bit at position 1: " << isBitSet(num, 1) << endl;  // 0
    cout << "Bit at position 2: " << isBitSet(num, 2) << endl;  // 1

    return 0;
}
```

### **4. Set a Bit**

```cpp
int setBit(int num, int pos) {
    return num | (1 << pos);
}

int main() {
    int num = 5;  // 0101
    cout << "Original: " << num << endl;
    cout << "After setting bit 1: " << setBit(num, 1) << endl;  // 7 (0111)

    return 0;
}
```

### **5. Clear a Bit**

```cpp
int clearBit(int num, int pos) {
    return num & ~(1 << pos);
}

int main() {
    int num = 5;  // 0101
    cout << "Original: " << num << endl;
    cout << "After clearing bit 2: " << clearBit(num, 2) << endl;  // 1 (0001)

    return 0;
}
```

### **6. Toggle a Bit**

```cpp
int toggleBit(int num, int pos) {
    return num ^ (1 << pos);
}

int main() {
    int num = 5;  // 0101
    cout << "Original: " << num << endl;
    cout << "After toggling bit 1: " << toggleBit(num, 1) << endl;  // 7 (0111)
    cout << "After toggling bit 2: " << toggleBit(num, 2) << endl;  // 1 (0001)

    return 0;
}
```

### **7. Count Set Bits (1s)**

```cpp
// Method 1: Simple loop
int countSetBits(int n) {
    int count = 0;
    while (n > 0) {
        count += (n & 1);
        n >>= 1;
    }
    return count;
}

// Method 2: Brian Kernighan's Algorithm (Optimal)
int countSetBitsOptimal(int n) {
    int count = 0;
    while (n > 0) {
        n = n & (n - 1);  // Removes rightmost set bit
        count++;
    }
    return count;
}

int main() {
    int num = 13;  // 1101
    cout << "Number: " << num << endl;
    cout << "Set bits: " << countSetBits(num) << endl;  // 3

    return 0;
}
```

### **8. Check if Power of 2**

```cpp
bool isPowerOfTwo(int n) {
    if (n <= 0) return false;
    return (n & (n - 1)) == 0;
}

int main() {
    cout << "Is 8 power of 2? " << isPowerOfTwo(8) << endl;   // 1 (true)
    cout << "Is 10 power of 2? " << isPowerOfTwo(10) << endl; // 0 (false)

    return 0;
}

// Explanation:
// Power of 2 has only one set bit
// 8 = 1000, 8-1 = 0111
// 1000 & 0111 = 0000
```

### **9. Swap Two Numbers without Temp**

```cpp
void swapWithoutTemp(int &a, int &b) {
    a = a ^ b;
    b = a ^ b;  // b = (a ^ b) ^ b = a
    a = a ^ b;  // a = (a ^ b) ^ a = b
}

int main() {
    int x = 5, y = 10;
    cout << "Before: x = " << x << ", y = " << y << endl;
    swapWithoutTemp(x, y);
    cout << "After: x = " << x << ", y = " << y << endl;

    return 0;
}
```

### **10. Find Unique Element (All others appear twice)**

```cpp
int findUnique(int arr[], int n) {
    int result = 0;
    for (int i = 0; i < n; i++) {
        result ^= arr[i];  // XOR cancels out duplicates
    }
    return result;
}

int main() {
    int arr[] = {2, 3, 4, 2, 3, 4, 5};
    int n = 7;
    cout << "Unique element: " << findUnique(arr, n) << endl;  // 5

    return 0;
}

// Explanation:
// 2 ^ 2 = 0, 3 ^ 3 = 0, 4 ^ 4 = 0
// 0 ^ 5 = 5
```

---

## 🎯 Common Bit Manipulation Tricks

### **1. Multiply/Divide by Powers of 2**

```cpp
int multiply_by_2(int n) { return n << 1; }      // n * 2
int multiply_by_4(int n) { return n << 2; }      // n * 4
int multiply_by_8(int n) { return n << 3; }      // n * 8

int divide_by_2(int n) { return n >> 1; }        // n / 2
int divide_by_4(int n) { return n >> 2; }        // n / 4
int divide_by_8(int n) { return n >> 3; }        // n / 8
```

### **2. Check Even/Odd**

```cpp
bool isEven(int n) { return (n & 1) == 0; }
bool isOdd(int n) { return (n & 1) == 1; }
```

### **3. Get Rightmost Set Bit**

```cpp
int getRightmostSetBit(int n) {
    return n & -n;
}
// Example: 12 (1100) → 4 (0100)
```

### **4. Clear Rightmost Set Bit**

```cpp
int clearRightmostSetBit(int n) {
    return n & (n - 1);
}
// Example: 12 (1100) → 8 (1000)
```

### **5. Get All Set Bits**

```cpp
int getAllSetBits(int n) {
    return (1 << n) - 1;
}
// Example: n=4 → 15 (1111)
```

---

## 📊 Time Complexity Analysis

| Operation                | Time Complexity         | Space Complexity |
| ------------------------ | ----------------------- | ---------------- |
| Decimal to Binary        | O(log n)                | O(1)             |
| Binary to Decimal        | O(log n)                | O(1)             |
| Count Set Bits           | O(log n)                | O(1)             |
| Count Set Bits (Optimal) | O(k) where k = set bits | O(1)             |
| Check Power of 2         | O(1)                    | O(1)             |
| Set/Clear/Toggle Bit     | O(1)                    | O(1)             |
| Find Unique Element      | O(n)                    | O(1)             |

---

## 🎯 Practice Problems

### **Easy:**

1. Convert decimal to binary
2. Convert binary to decimal
3. Count number of 1s in binary representation
4. Check if a number is power of 2
5. Find the only odd occurring element
6. Swap two numbers using XOR
7. Check if kth bit is set

### **Medium:**

1. Find two unique numbers (all others appear twice) - Leetcode #260
2. Reverse bits of a number - Leetcode #190
3. Number of 1 Bits - Leetcode #191
4. Single Number - Leetcode #136
5. Power of Two - Leetcode #231
6. Counting Bits - Leetcode #338
7. Sum of Two Integers (without +/-) - Leetcode #371

### **Hard:**

1. Maximum XOR of Two Numbers - Leetcode #421
2. Find XOR of all subsets
3. Count total set bits from 1 to n
4. Divide two integers using bit manipulation - Leetcode #29

---

## 💡 Pro Tips

### **Interview Tips:**

1. **Always think bitwise** for optimization problems
2. **XOR properties** are frequently tested
3. **Power of 2 check** is a common trick
4. **Bit masking** is useful for subset problems
5. **Left/Right shift** for fast multiplication/division

### **Common Patterns:**

- **XOR for finding unique** - Cancels duplicates
- **AND for checking bits** - Mask operations
- **OR for setting bits** - Turn bits on
- **Shift for powers of 2** - Fast arithmetic
- **n & (n-1)** - Remove rightmost set bit

### **Common Mistakes:**

- ❌ Forgetting operator precedence (use parentheses!)
- ❌ Not handling negative numbers in right shift
- ❌ Confusing `&` (bitwise) with `&&` (logical)
- ❌ Not considering integer overflow
- ❌ Using wrong shift direction

---

## 🌟 Real-World Examples

### **1. Permissions in Unix/Linux**

```cpp
// File permissions: rwxrwxrwx (owner, group, others)
#define READ    4  // 100
#define WRITE   2  // 010
#define EXECUTE 1  // 001

int permission = READ | WRITE;  // 110 = 6 (rw-)
```

### **2. Feature Flags**

```cpp
#define FEATURE_A 1  // 0001
#define FEATURE_B 2  // 0010
#define FEATURE_C 4  // 0100
#define FEATURE_D 8  // 1000

int enabledFeatures = FEATURE_A | FEATURE_C;  // 0101
bool isFeatureAEnabled = enabledFeatures & FEATURE_A;
```

### **3. IP Address Subnet Mask**

```cpp
// IP: 192.168.1.10
// Subnet: 255.255.255.0
// Network: IP & Subnet = 192.168.1.0
```

---

## 📖 Additional Resources

- **Visualizations:** [Binary Calculator](https://www.rapidtables.com/convert/number/decimal-to-binary.html)
- **Practice:** [LeetCode Bit Manipulation](https://leetcode.com/tag/bit-manipulation/)
- **Tutorial:** [GeeksforGeeks Bitwise Operators](https://www.geeksforgeeks.org/bitwise-operators-in-c-cpp/)
- **Video:** [Binary Number System Explained](https://www.youtube.com/results?search_query=binary+number+system)

---

## ✅ Checklist

- [ ] Understand binary number system
- [ ] Master decimal to binary conversion
- [ ] Master binary to decimal conversion
- [ ] Learn all bitwise operators
- [ ] Practice bit manipulation techniques
- [ ] Solve count set bits problem
- [ ] Understand XOR properties
- [ ] Master power of 2 check
- [ ] Solve at least 10 bit manipulation problems
- [ ] Understand real-world applications

---

## 🚀 Quick Reference Card

```cpp
// Conversions
Decimal to Binary: Divide by 2, read remainders bottom-up
Binary to Decimal: Multiply by powers of 2, sum up

// Operators
&  : AND    - Both 1 → 1
|  : OR     - Any 1 → 1
^  : XOR    - Different → 1
~  : NOT    - Flip bits
<< : Left   - Multiply by 2
>> : Right  - Divide by 2

// Common Tricks
n & 1           : Check odd/even
n & (n-1)       : Clear rightmost set bit
n & -n          : Get rightmost set bit
(1 << k)        : 2^k
n ^ n           : 0
n ^ 0           : n
a ^ b ^ b       : a
```

---

**Happy Coding! 🔢**

_Remember: Everything in computers is binary. Master it, and you'll understand how computers really work!_
