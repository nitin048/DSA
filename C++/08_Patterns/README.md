# ⭐ Pattern Programming in C++

Pattern programming is an essential skill for mastering nested loops and understanding how to control output formatting. This guide covers all common patterns with detailed explanations.

---

## 📚 Table of Contents

1. [Square Patterns](#square-patterns)
2. [Triangle Patterns](#triangle-patterns)
3. [Inverted Triangle Patterns](#inverted-triangle-patterns)
4. [Pyramid Patterns](#pyramid-patterns)
5. [Diamond Patterns](#diamond-patterns)
6. [Number Patterns](#number-patterns)
7. [Character Patterns](#character-patterns)
8. [Hollow Patterns](#hollow-patterns)
9. [Advanced Patterns](#advanced-patterns)
10. [Pattern Tips & Tricks](#pattern-tips--tricks)

---

## 🟦 Square Patterns

### Pattern 1: Solid Square

```
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Logic:**

- Outer loop: Controls rows (i = 1 to n)
- Inner loop: Controls columns (j = 1 to n)
- Print star in each iteration

---

### Pattern 2: Hollow Square

```
* * * * *
*       *
*       *
*       *
* * * * *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
        if (i == 1 || i == n || j == 1 || j == n) {
            cout << "* ";
        } else {
            cout << "  ";
        }
    }
    cout << endl;
}
```

**Logic:**

- Print star if: first row OR last row OR first column OR last column
- Otherwise print space

---

## 🔺 Triangle Patterns

### Pattern 3: Right-Angled Triangle

```
*
* *
* * *
* * * *
* * * * *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Logic:**

- Row 1: Print 1 star
- Row 2: Print 2 stars
- Row i: Print i stars

---

### Pattern 4: Left-Aligned Triangle

```
        *
      * *
    * * *
  * * * *
* * * * *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    // Print spaces
    for (int j = 1; j <= n - i; j++) {
        cout << "  ";
    }
    // Print stars
    for (int k = 1; k <= i; k++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Logic:**

- Row i: Print (n - i) spaces, then i stars
- Spaces decrease, stars increase

---

### Pattern 5: Right-Angled Triangle (Numbers)

```
1
1 2
1 2 3
1 2 3 4
1 2 3 4 5
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << j << " ";
    }
    cout << endl;
}
```

**Logic:**

- Row i: Print numbers from 1 to i

---

### Pattern 6: Right-Angled Triangle (Same Number)

```
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << i << " ";
    }
    cout << endl;
}
```

**Logic:**

- Row i: Print number i, i times

---

## 🔻 Inverted Triangle Patterns

### Pattern 7: Inverted Right-Angled Triangle

```
* * * * *
* * * *
* * *
* *
*
```

**Code:**

```cpp
int n = 5;
for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= i; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Alternative:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i + 1; j++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Logic:**

- Row 1: Print n stars
- Row 2: Print (n-1) stars
- Row i: Print (n-i+1) stars

---

### Pattern 8: Inverted Left-Aligned Triangle

```
* * * * *
  * * * *
    * * *
      * *
        *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    // Print spaces
    for (int j = 1; j < i; j++) {
        cout << "  ";
    }
    // Print stars
    for (int k = 1; k <= n - i + 1; k++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Logic:**

- Row i: Print (i-1) spaces, then (n-i+1) stars
- Spaces increase, stars decrease

---

## 🔺 Pyramid Patterns

### Pattern 9: Full Pyramid

```
    *
   * *
  * * *
 * * * *
* * * * *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    // Print spaces
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    // Print stars
    for (int k = 1; k <= i; k++) {
        cout << "* ";
    }
    cout << endl;
}
```

**Logic:**

- Row i: Print (n-i) spaces, then i stars with spaces

---

### Pattern 10: Full Pyramid (Continuous Stars)

```
    *
   ***
  *****
 *******
*********
```

**Code:**

```cpp
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
```

**Logic:**

- Row i: Print (n-i) spaces, then (2\*i-1) stars
- Stars: 1, 3, 5, 7, 9...

---

### Pattern 11: Inverted Pyramid

```
*********
 *******
  *****
   ***
    *
```

**Code:**

```cpp
int n = 5;
for (int i = n; i >= 1; i--) {
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
```

**Logic:**

- Row i: Print (n-i) spaces, then (2\*i-1) stars
- Reverse of full pyramid

---

## 💎 Diamond Patterns

### Pattern 12: Diamond

```
    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *
```

**Code:**

```cpp
int n = 5;

// Upper half (pyramid)
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; k++) {
        cout << "*";
    }
    cout << endl;
}

// Lower half (inverted pyramid)
for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; k++) {
        cout << "*";
    }
    cout << endl;
}
```

**Logic:**

- Combine pyramid + inverted pyramid
- Upper half: i from 1 to n
- Lower half: i from (n-1) to 1

---

### Pattern 13: Hollow Diamond

```
    *
   * *
  *   *
 *     *
*       *
 *     *
  *   *
   * *
    *
```

**Code:**

```cpp
int n = 5;

// Upper half
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; k++) {
        if (k == 1 || k == 2 * i - 1) {
            cout << "*";
        } else {
            cout << " ";
        }
    }
    cout << endl;
}

// Lower half
for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = 1; k <= 2 * i - 1; k++) {
        if (k == 1 || k == 2 * i - 1) {
            cout << "*";
        } else {
            cout << " ";
        }
    }
    cout << endl;
}
```

**Logic:**

- Print star only at first and last position of each row
- Otherwise print space

---

## 🔢 Number Patterns

### Pattern 14: Number Pyramid

```
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = 1; k <= i; k++) {
        cout << k << " ";
    }
    cout << endl;
}
```

---

### Pattern 15: Continuous Number Triangle

```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

**Code:**

```cpp
int n = 5;
int num = 1;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << num << " ";
        num++;
    }
    cout << endl;
}
```

**Logic:**

- Use a counter variable that increments continuously

---

### Pattern 16: Floyd's Triangle

```
1
2 3
4 5 6
7 8 9 10
11 12 13 14 15
```

**Code:**

```cpp
int n = 5;
int num = 1;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << num++ << " ";
    }
    cout << endl;
}
```

---

### Pattern 17: Palindrome Number Pyramid

```
    1
   121
  12321
 1234321
123454321
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    // Spaces
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    // Ascending numbers
    for (int k = 1; k <= i; k++) {
        cout << k;
    }
    // Descending numbers
    for (int l = i - 1; l >= 1; l--) {
        cout << l;
    }
    cout << endl;
}
```

**Logic:**

- Print numbers ascending: 1 to i
- Print numbers descending: (i-1) to 1

---

### Pattern 18: Number Diamond

```
    1
   212
  32123
 4321234
543212345
 4321234
  32123
   212
    1
```

**Code:**

```cpp
int n = 5;

// Upper half
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = i; k >= 1; k--) {
        cout << k;
    }
    for (int l = 2; l <= i; l++) {
        cout << l;
    }
    cout << endl;
}

// Lower half
for (int i = n - 1; i >= 1; i--) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = i; k >= 1; k--) {
        cout << k;
    }
    for (int l = 2; l <= i; l++) {
        cout << l;
    }
    cout << endl;
}
```

---

## 🔤 Character Patterns

### Pattern 19: Character Triangle

```
A
A B
A B C
A B C D
A B C D E
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    char ch = 'A';
    for (int j = 1; j <= i; j++) {
        cout << ch << " ";
        ch++;
    }
    cout << endl;
}
```

---

### Pattern 20: Character Pyramid

```
    A
   A B
  A B C
 A B C D
A B C D E
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    char ch = 'A';
    for (int k = 1; k <= i; k++) {
        cout << ch << " ";
        ch++;
    }
    cout << endl;
}
```

---

### Pattern 21: Continuous Character Triangle

```
A
B C
D E F
G H I J
K L M N O
```

**Code:**

```cpp
int n = 5;
char ch = 'A';
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << ch << " ";
        ch++;
    }
    cout << endl;
}
```

---

### Pattern 22: Same Character Triangle

```
A
B B
C C C
D D D D
E E E E E
```

**Code:**

```cpp
int n = 5;
char ch = 'A';
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        cout << ch << " ";
    }
    ch++;
    cout << endl;
}
```

---

## ⬜ Hollow Patterns

### Pattern 23: Hollow Right Triangle

```
*
* *
*   *
*     *
* * * * *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= i; j++) {
        if (j == 1 || j == i || i == n) {
            cout << "* ";
        } else {
            cout << "  ";
        }
    }
    cout << endl;
}
```

**Logic:**

- Print star if: first column OR last column OR last row

---

### Pattern 24: Hollow Pyramid

```
    *
   * *
  *   *
 *     *
* * * * *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = 1; k <= i; k++) {
        if (k == 1 || k == i || i == n) {
            cout << "* ";
        } else {
            cout << "  ";
        }
    }
    cout << endl;
}
```

---

## 🌟 Advanced Patterns

### Pattern 25: Butterfly Pattern

```
*        *
**      **
***    ***
****  ****
**********
**********
****  ****
***    ***
**      **
*        *
```

**Code:**

```cpp
int n = 5;

// Upper half
for (int i = 1; i <= n; i++) {
    // Left stars
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
    // Spaces
    for (int k = 1; k <= 2 * (n - i); k++) {
        cout << " ";
    }
    // Right stars
    for (int l = 1; l <= i; l++) {
        cout << "*";
    }
    cout << endl;
}

// Lower half
for (int i = n; i >= 1; i--) {
    // Left stars
    for (int j = 1; j <= i; j++) {
        cout << "*";
    }
    // Spaces
    for (int k = 1; k <= 2 * (n - i); k++) {
        cout << " ";
    }
    // Right stars
    for (int l = 1; l <= i; l++) {
        cout << "*";
    }
    cout << endl;
}
```

---

### Pattern 26: Hourglass Pattern

```
* * * * *
 * * * *
  * * *
   * *
    *
   * *
  * * *
 * * * *
* * * * *
```

**Code:**

```cpp
int n = 5;

// Upper half (inverted pyramid)
for (int i = n; i >= 1; i--) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = 1; k <= i; k++) {
        cout << "* ";
    }
    cout << endl;
}

// Lower half (pyramid without first row)
for (int i = 2; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = 1; k <= i; k++) {
        cout << "* ";
    }
    cout << endl;
}
```

---

### Pattern 27: Pascal's Triangle

```
    1
   1 1
  1 2 1
 1 3 3 1
1 4 6 4 1
```

**Code:**

```cpp
int n = 5;
for (int i = 0; i < n; i++) {
    // Spaces
    for (int j = 0; j < n - i - 1; j++) {
        cout << " ";
    }

    int num = 1;
    for (int k = 0; k <= i; k++) {
        cout << num << " ";
        num = num * (i - k) / (k + 1);
    }
    cout << endl;
}
```

**Logic:**

- Uses binomial coefficient formula
- Each number is sum of two numbers above it

---

### Pattern 28: Zigzag Pattern

```
    *     *
  *   *  *  *
*      *      *
```

**Code:**

```cpp
int n = 3;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= 3 * n; j++) {
        if ((i + j) % 4 == 0 || (i == 2 && j % 4 == 0)) {
            cout << "*";
        } else {
            cout << " ";
        }
    }
    cout << endl;
}
```

---

### Pattern 29: Cross Pattern

```
*       *
 *     *
  *   *
   * *
    *
   * *
  *   *
 *     *
*       *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= 2 * n - 1; i++) {
    for (int j = 1; j <= 2 * n - 1; j++) {
        if (i == j || i + j == 2 * n) {
            cout << "*";
        } else {
            cout << " ";
        }
    }
    cout << endl;
}
```

**Logic:**

- Print star when: i == j (main diagonal) OR i + j == 2\*n (anti-diagonal)

---

### Pattern 30: Rhombus Pattern

```
    * * * * *
   * * * * *
  * * * * *
 * * * * *
* * * * *
```

**Code:**

```cpp
int n = 5;
for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }
    for (int k = 1; k <= n; k++) {
        cout << "* ";
    }
    cout << endl;
}
```

---

## 💡 Pattern Tips & Tricks

### Understanding Pattern Logic

1. **Identify the structure:**
   - How many rows? (outer loop)
   - How many columns per row? (inner loop)
   - What changes in each row?

2. **Break down complex patterns:**
   - Spaces + Stars
   - Upper half + Lower half
   - Left side + Right side

3. **Common formulas:**
   - Stars in row i: `i`
   - Spaces before stars: `n - i`
   - Stars in pyramid row i: `2 * i - 1`
   - Total width of pyramid: `2 * n - 1`

### Debugging Patterns

```cpp
// Add row/column numbers to debug
for (int i = 1; i <= n; i++) {
    cout << "Row " << i << ": ";
    for (int j = 1; j <= i; j++) {
        cout << "(" << i << "," << j << ") ";
    }
    cout << endl;
}
```

### Pattern Template

```cpp
int n = 5;  // Size of pattern

for (int i = 1; i <= n; i++) {  // Rows

    // Step 1: Print leading spaces (if needed)
    for (int j = 1; j <= n - i; j++) {
        cout << " ";
    }

    // Step 2: Print main content (stars/numbers/chars)
    for (int k = 1; k <= i; k++) {
        cout << "* ";
    }

    // Step 3: Move to next line
    cout << endl;
}
```

---

## 🎯 Practice Exercises

### Beginner Level

1. Print a 5x5 square of stars
2. Print a right-angled triangle
3. Print an inverted right-angled triangle
4. Print a number triangle (1, 12, 123...)
5. Print a character triangle (A, AB, ABC...)

### Intermediate Level

6. Print a full pyramid
7. Print an inverted pyramid
8. Print a diamond pattern
9. Print Floyd's triangle
10. Print a hollow square
11. Print a hollow triangle
12. Print a palindrome number pyramid

### Advanced Level

13. Print a butterfly pattern
14. Print an hourglass pattern
15. Print Pascal's triangle
16. Print a zigzag pattern
17. Print a cross pattern
18. Print a hollow diamond
19. Print a number diamond
20. Print a character diamond

---

## 📊 Pattern Complexity

| Pattern Type  | Loops | Difficulty | Time Complexity |
| ------------- | ----- | ---------- | --------------- |
| **Square**    | 2     | Easy       | O(n²)           |
| **Triangle**  | 2     | Easy       | O(n²)           |
| **Pyramid**   | 2-3   | Medium     | O(n²)           |
| **Diamond**   | 4     | Medium     | O(n²)           |
| **Hollow**    | 2-3   | Medium     | O(n²)           |
| **Butterfly** | 4     | Hard       | O(n²)           |
| **Pascal's**  | 2     | Hard       | O(n²)           |

---

## 🎓 Key Concepts

### 1. Nested Loops

- Outer loop: Controls rows
- Inner loop(s): Controls columns/content

### 2. Space Management

- Leading spaces: `n - i`
- Trailing spaces: Usually not needed
- Internal spaces: Depends on pattern

### 3. Symmetry

- Vertical: Mirror left and right
- Horizontal: Mirror top and bottom
- Both: Diamond patterns

### 4. Conditions

- Use if-else for hollow patterns
- Check boundaries (first/last row/column)
- Check diagonals for cross patterns

---

## 🔗 Next Steps

After mastering patterns, move on to:

1. **[Arrays](../09_Arrays/)** - Store multiple values
2. **[Functions](../10_Functions/)** - Reusable code blocks
3. **[Strings](../11_Strings/)** - Text manipulation

---

## 📚 Additional Resources

- **Pattern Practice:** https://www.geeksforgeeks.org/pattern-printing-in-c/
- **More Patterns:** https://www.programiz.com/c-programming/examples
- **Visual Patterns:** https://www.tutorialspoint.com/cprogramming/c_patterns.htm

---

**Master patterns and you'll master nested loops! 🌟**

Practice each pattern until you can write it without looking at the solution!
