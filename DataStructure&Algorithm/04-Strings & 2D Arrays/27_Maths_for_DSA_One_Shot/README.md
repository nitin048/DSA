# 🔢 Maths for DSA One Shot - Complete Guide from Scratch

## 📚 Table of Contents

1. [What is Maths for DSA One Shot?](#-what-is-maths-for-dsa-one-shot)
2. [Why Maths for DSA One Shot?](#-why-maths-for-dsa-one-shot)
3. [Core Concepts](#-core-concepts)
4. [C++ Implementation Reference](#-c-implementation-reference)
5. [Algorithmic Complexity](#-algorithmic-complexity)
6. [Best Practices & Gotchas](#-best-practices--gotchas)
7. [Practice Problems](#-practice-problems)
8. [Checklist](#-checklist)

---

## 🎯 What is Maths for DSA One Shot?

### **Concept Overview:**
Mathematical Primes, Greatest Common Divisors, and Primes Finder.

### **Real-Life Analogy:**
Think of prime checking like finding **prime numbers** using a **mesh strainer**. You drop numbers in, and Sieve of Eratosthenes filters out all multiples of composite numbers, leaving only the pure prime seeds behind.

---

## 💡 Why Maths for DSA One Shot?

### **Advantages:**
- Vastly accelerates primality checking on ranges
- Avoids brute force divisions loops

### **Disadvantages / Challenges:**
- Takes O(N) memory space to maintain boolean sieve arrays

### **When to Use:**
- When counting prime counts up to limit N
- For encryption math and modular divisibility problems

---

## 📖 Core Concepts

- **Sieve of Eratosthenes:** Tracks primes by marking out composite multiples.
- **GCD:** Euclidean division algorithm: `gcd(a, b) = gcd(b, a % b)`.

---

## 💻 C++ Implementation Reference

```cpp
int gcd(int a, int b) {
    return b == 0 ? a : gcd(b, a % b);
}
// Sieve: vector<bool> prime(N, true); mark multiples up to sqrt(N)
```

---

## ⏱️ Algorithmic Complexity

| Aspect / Operation | Complexity |
| ------------------ | ---------- |
| Sieve of Eratosthenes | O(N log(log N)) time, O(N) space |
| GCD Euclidean | O(log(min(a,b))) |

---

## 💡 Best Practices & Gotchas

- **Outer loop of Sieve can terminate safely at `sqrt(N)`.**
- **Boundary Checks:** Always check edge cases (empty inputs, single items, or extreme parameter ranges).
- **Resource Management:** Optimize storage usage to prevent memory leaks and minimize runtime overhead.

---

## 🎯 Practice Problems

### **Easy Problems:**
- [ ] Primality test using O(sqrt(N)) scan
- [ ] Greatest Common Divisor using Euclidean Algorithm

### **Medium Problems:**
- [ ] Sieve of Eratosthenes up to N
- [ ] Prime factorization of a number

### **Hard Problems:**
- [ ] Segmented Sieve for very large limits
- [ ] Count of primes in range [L, R]

---

## ✅ Checklist

- [ ] Optimize basic checks (skip even numbers after checking 2)
- [ ] Compute loop limits up to i*i <= N
- [ ] Implement sieve with space-efficient bool vectors

---

**Happy Coding! 🔢**
