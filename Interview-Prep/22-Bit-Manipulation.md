# 🔢 Bit Manipulation - Quick Reference

**Work with bits directly!** 🎯

---

## 📋 Bit Operators

### **Basic Operators:**

```cpp
&   // AND
|   // OR
^   // XOR
~   // NOT
<<  // Left shift
>>  // Right shift
```

### **Truth Tables:**

```
AND (&)     OR (|)      XOR (^)
0 & 0 = 0   0 | 0 = 0   0 ^ 0 = 0
0 & 1 = 0   0 | 1 = 1   0 ^ 1 = 1
1 & 0 = 0   1 | 0 = 1   1 ^ 0 = 1
1 & 1 = 1   1 | 1 = 1   1 ^ 1 = 0
```

---

## 🎯 Common Operations

### **1. Check if ith bit is set:**

```cpp
bool isSet(int n, int i) {
    return (n & (1 << i)) != 0;
}
// Example: n = 5 (101), i = 2
// 101 & 100 = 100 (true)
```

### **2. Set ith bit:**

```cpp
int setBit(int n, int i) {
    return n | (1 << i);
}
// Example: n = 5 (101), i = 1
// 101 | 010 = 111 (7)
```

### **3. Clear ith bit:**

```cpp
int clearBit(int n, int i) {
    return n & ~(1 << i);
}
// Example: n = 7 (111), i = 1
// 111 & 101 = 101 (5)
```

### **4. Toggle ith bit:**

```cpp
int toggleBit(int n, int i) {
    return n ^ (1 << i);
}
// Example: n = 5 (101), i = 1
// 101 ^ 010 = 111 (7)
```

### **5. Count set bits:**

```cpp
int countBits(int n) {
    int count = 0;
    while (n) {
        count += n & 1;
        n >>= 1;
    }
    return count;
}
// Or use: __builtin_popcount(n)
```

### **6. Check if power of 2:**

```cpp
bool isPowerOfTwo(int n) {
    return n > 0 && (n & (n - 1)) == 0;
}
// Theory: Power of 2 has only one bit set
// Example: 8 = 1000, 7 = 0111
// 1000 & 0111 = 0000
```

---

## 💡 XOR Properties

### **Key Properties:**

```cpp
a ^ 0 = a           // XOR with 0 gives same number
a ^ a = 0           // XOR with itself gives 0
a ^ b ^ a = b       // XOR is commutative
```

### **Applications:**

**1. Swap without temp:**

```cpp
void swap(int& a, int& b) {
    a = a ^ b;
    b = a ^ b;  // b = a ^ b ^ b = a
    a = a ^ b;  // a = a ^ b ^ a = b
}
```

**2. Find single number:**

```cpp
int singleNumber(vector<int>& nums) {
    int result = 0;
    for (int num : nums) {
        result ^= num;
    }
    return result;
}
// Theory: All pairs cancel out (a ^ a = 0)
// Only single number remains
```

---

## 💡 Common Problems

### **1. Number of 1 Bits:**

```cpp
int hammingWeight(uint32_t n) {
    int count = 0;
    while (n) {
        n &= (n - 1);  // Remove rightmost 1
        count++;
    }
    return count;
}
// Theory: n & (n-1) removes rightmost set bit
```

### **2. Reverse Bits:**

```cpp
uint32_t reverseBits(uint32_t n) {
    uint32_t result = 0;
    for (int i = 0; i < 32; i++) {
        result = (result << 1) | (n & 1);
        n >>= 1;
    }
    return result;
}
```

### **3. Missing Number:**

```cpp
int missingNumber(vector<int>& nums) {
    int result = nums.size();
    for (int i = 0; i < nums.size(); i++) {
        result ^= i ^ nums[i];
    }
    return result;
}
// Theory: XOR all indices and values
// Pairs cancel, missing number remains
```

---

## 🔥 Bit Tricks

### **1. Get rightmost set bit:**

```cpp
int rightmost = n & -n;
// Example: n = 12 (1100)
// -n = -12 (0100 in 2's complement)
// 1100 & 0100 = 0100 (4)
```

### **2. Turn off rightmost set bit:**

```cpp
n = n & (n - 1);
// Example: n = 12 (1100)
// n-1 = 11 (1011)
// 1100 & 1011 = 1000 (8)
```

### **3. Isolate rightmost 0:**

```cpp
int rightmost0 = ~n & (n + 1);
```

### **4. Check if opposite signs:**

```cpp
bool oppositeSigns(int a, int b) {
    return (a ^ b) < 0;
}
```

---

## 🎯 Bit Masking

### **Theory:**

Use integers to represent sets of elements

```cpp
// Set operations
int set = 0;
set |= (1 << i);        // Add element i
set &= ~(1 << i);       // Remove element i
bool has = set & (1 << i);  // Check if has i

// Iterate all subsets
for (int mask = 0; mask < (1 << n); mask++) {
    // mask represents a subset
    for (int i = 0; i < n; i++) {
        if (mask & (1 << i)) {
            // Element i is in subset
        }
    }
}
```

---

## 🔥 Must Remember

### **Common Patterns:**

1. **XOR for pairs** - Find single/missing element
2. **n & (n-1)** - Remove rightmost 1
3. **n & -n** - Get rightmost 1
4. **Bit masking** - Represent subsets

### **Complexity:**

- Most bit operations: **O(1)**
- Counting bits: **O(log n)** or **O(number of 1s)**

---

**Next:** [Two Pointers →](23-Two-Pointers.md)
