# 📝 Strings & 2D Arrays

## 📚 Complete Section Overview

This section contains **9 comprehensive lectures** covering string manipulation, mathematical algorithms, and 2D array operations.

---

## 📂 Folder Structure

### **22. Strings & Character Arrays in C++ - Part 1**

- String fundamentals
- Character arrays
- String input/output
- String operations
- C-style strings vs C++ strings

### **23. Valid Palindrome & Remove all Occurrences | Strings Part 2**

- Palindrome checking
- Two pointer technique
- Remove occurrences problem
- String manipulation
- Edge cases handling

### **24. Strings - Part 3 | Permutation in String**

- Permutation concept
- Sliding window technique
- Frequency counting
- Anagram detection
- Optimal solution

### **25. Strings - Part 4 | Reverse Words in String**

- Word reversal
- In-place reversal
- Space handling
- Two pointer approach
- String tokenization

### **26. String Compression problem | Leetcode 443**

- Run-length encoding
- In-place compression
- Two pointer technique
- Leetcode 443 solution
- Optimal approach

### **27. Maths for DSA - One Shot**

- Euclid's Algorithm (GCD)
- Sieve of Eratosthenes (Prime numbers)
- Modular Arithmetic
- Fast exponentiation
- Number theory basics

### **28. 2D Arrays in C++ | Part 1**

- 2D array fundamentals
- Memory layout
- Row-major vs Column-major
- 2D array operations
- Input/output

### **29. Search a 2D Matrix - Variation I & II**

- Matrix searching techniques
- Binary search in 2D
- Staircase search
- Variation I (sorted rows & columns)
- Variation II (sorted matrix)

### **30. Spiral Matrix | 2D Arrays - Part 3 | Leetcode 54**

- Spiral traversal
- Boundary management
- Direction handling
- Leetcode 54 solution
- Pattern recognition

---

## 🎯 Key Concepts Covered

### **Strings:**

✅ String fundamentals  
✅ Palindrome problems  
✅ Permutation & Anagrams  
✅ String reversal  
✅ String compression  
✅ Sliding window technique

### **Mathematics:**

✅ GCD (Euclid's Algorithm)  
✅ Prime numbers (Sieve)  
✅ Modular arithmetic  
✅ Fast exponentiation

### **2D Arrays:**

✅ 2D array operations  
✅ Matrix searching  
✅ Spiral traversal  
✅ Binary search in 2D

---

## 📊 Progress Tracker

- [ ] 22. Strings & Character Arrays - Part 1
- [ ] 23. Valid Palindrome & Remove Occurrences
- [ ] 24. Permutation in String
- [ ] 25. Reverse Words in String
- [ ] 26. String Compression (Leetcode 443)
- [ ] 27. Maths for DSA - One Shot
- [ ] 28. 2D Arrays in C++ - Part 1
- [ ] 29. Search 2D Matrix - Variation I & II
- [ ] 30. Spiral Matrix (Leetcode 54)

**Progress: 0/9 completed** 🎯

---

## 📝 Practice Problems

### **String Problems:**

- Valid Palindrome
- Remove Occurrences
- Permutation in String
- Reverse Words
- String Compression (Leetcode 443)

### **Math Problems:**

- GCD calculation
- Prime number generation
- Modular exponentiation

### **2D Array Problems:**

- Search in 2D Matrix I
- Search in 2D Matrix II
- Spiral Matrix (Leetcode 54)

---

## 💡 Important Algorithms

### **1. Palindrome Check (Two Pointer):**

```cpp
bool isPalindrome(string s) {
    int left = 0, right = s.length() - 1;

    while (left < right) {
        if (s[left] != s[right]) return false;
        left++;
        right--;
    }

    return true;
}
```

### **2. Euclid's Algorithm (GCD):**

```cpp
int gcd(int a, int b) {
    if (b == 0) return a;
    return gcd(b, a % b);
}

// Iterative
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
```

### **3. Sieve of Eratosthenes:**

```cpp
vector<bool> sieve(int n) {
    vector<bool> isPrime(n + 1, true);
    isPrime[0] = isPrime[1] = false;

    for (int i = 2; i * i <= n; i++) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }

    return isPrime;
}
```

### **4. Search in 2D Matrix (Staircase Search):**

```cpp
bool searchMatrix(vector<vector<int>>& matrix, int target) {
    int m = matrix.size();
    int n = matrix[0].size();

    int row = 0, col = n - 1;

    while (row < m && col >= 0) {
        if (matrix[row][col] == target) return true;
        else if (matrix[row][col] > target) col--;
        else row++;
    }

    return false;
}
```

### **5. Spiral Matrix Traversal:**

```cpp
vector<int> spiralOrder(vector<vector<int>>& matrix) {
    vector<int> result;
    if (matrix.empty()) return result;

    int top = 0, bottom = matrix.size() - 1;
    int left = 0, right = matrix[0].size() - 1;

    while (top <= bottom && left <= right) {
        // Right
        for (int i = left; i <= right; i++)
            result.push_back(matrix[top][i]);
        top++;

        // Down
        for (int i = top; i <= bottom; i++)
            result.push_back(matrix[i][right]);
        right--;

        // Left
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                result.push_back(matrix[bottom][i]);
            bottom--;
        }

        // Up
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                result.push_back(matrix[i][left]);
            left++;
        }
    }

    return result;
}
```

---

## 🎓 Learning Path

### **Phase 1: String Fundamentals (Lectures 22-26)**

1. Master string basics
2. Practice palindrome problems
3. Learn sliding window
4. Solve permutation problems
5. Master string manipulation

### **Phase 2: Mathematics (Lecture 27)**

6. Euclid's Algorithm
7. Sieve of Eratosthenes
8. Modular arithmetic
9. Fast exponentiation

### **Phase 3: 2D Arrays (Lectures 28-30)**

10. 2D array operations
11. Matrix searching techniques
12. Spiral traversal patterns

---

## 📈 Complexity Analysis

### **String Operations:**

| Operation          | Time | Space |
| ------------------ | ---- | ----- |
| Palindrome Check   | O(n) | O(1)  |
| Permutation Check  | O(n) | O(26) |
| Reverse Words      | O(n) | O(1)  |
| String Compression | O(n) | O(1)  |

### **Math Operations:**

| Operation    | Time            | Space |
| ------------ | --------------- | ----- |
| GCD (Euclid) | O(log min(a,b)) | O(1)  |
| Sieve        | O(n log log n)  | O(n)  |
| Modular Exp  | O(log n)        | O(1)  |

### **2D Array Operations:**

| Operation          | Time         | Space |
| ------------------ | ------------ | ----- |
| Search (Staircase) | O(m + n)     | O(1)  |
| Binary Search 2D   | O(log(m\*n)) | O(1)  |
| Spiral Traversal   | O(m \* n)    | O(1)  |

---

## 🔥 Pro Tips

### **Strings:**

- Use two pointers for palindrome/reversal
- Sliding window for substring problems
- Hash map for frequency counting
- StringBuilder for multiple concatenations

### **Mathematics:**

- Memorize GCD formula
- Sieve for multiple prime queries
- Use modular arithmetic for large numbers
- Fast exponentiation for power calculations

### **2D Arrays:**

- Treat as 1D for binary search
- Staircase search from top-right
- Track boundaries for spiral traversal
- Consider row-major order

---

## 🚀 Quick Reference

### **String Methods:**

```cpp
string s = "hello";
s.length();           // Size
s.substr(0, 3);       // Substring
s.find("ll");         // Find substring
s.erase(0, 2);        // Erase
s.insert(0, "Hi");    // Insert
reverse(s.begin(), s.end());  // Reverse
```

### **Math Formulas:**

```cpp
// GCD
gcd(a, b) = gcd(b, a % b)

// LCM
lcm(a, b) = (a * b) / gcd(a, b)

// Modular Exponentiation
(a^b) % m = ((a % m)^b) % m
```

---

**Happy Learning! 🎉✨**
