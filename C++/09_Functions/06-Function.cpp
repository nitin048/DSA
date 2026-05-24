// Write a function to print nth fibonacci number

#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;

    int a = 0, b = 1;
    int fib = 0;

    for (int i = 2; i <= n; i++) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

int main() {
    int n;
    cout << "Enter the position (n) : " << endl;
    cin >> n;
    cout << "-------------------------" << endl;
    cout << "Fibonacci number at position " << n << " is: " << fibonacci(n) << endl;
    return 0;
}

// ═══════════════════════════════════════════════════════════════════════════════════════════════
// 🎯 DETAILED EXPLANATION  🎯
// ═══════════════════════════════════════════════════════════════════════════════════════════════

/*

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE FIBONACCI SEQUENCE? (What is Fibonacci Sequence?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

**Definition:**
Fibonacci sequence ek special number series hai jahan **har number pichle 2 numbers ka sum hota
hai**!

**The Sequence:**
```
Position: 0  1  2  3  4  5  6  7  8  9  10
Number:   0  1  1  2  3  5  8  13 21 34 55
```

**Pattern:**
- Position 0: 0
- Position 1: 1
- Position 2: 0 + 1 = 1
- Position 3: 1 + 1 = 2
- Position 4: 1 + 2 = 3
- Position 5: 2 + 3 = 5
- Position 6: 3 + 5 = 8
- And so on...

**Formula:** F(n) = F(n-1) + F(n-2)


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - RABBIT BREEDING:
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine: Tumhare paas rabbits hain 🐰🐰

**Rules:**
- Month 0: 0 pairs (start)
- Month 1: 1 pair (you get first pair)
- Each pair produces 1 new pair after 1 month
- Rabbits never die

**Month by Month:**

Month 0: 0 pairs
    (No rabbits yet)

Month 1: 1 pair 🐰
    (You get your first pair)

Month 2: 1 pair 🐰
    (Original pair, too young to breed)

Month 3: 2 pairs 🐰🐰
    (Original + 1 new baby pair)

Month 4: 3 pairs 🐰🐰🐰
    (2 old pairs + 1 new baby pair)

Month 5: 5 pairs 🐰🐰🐰🐰🐰
    (3 old pairs + 2 new baby pairs)

Month 6: 8 pairs 🐰🐰🐰🐰🐰🐰🐰🐰
    (5 old pairs + 3 new baby pairs)

Pattern: 0, 1, 1, 2, 3, 5, 8... (Fibonacci!)


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 FIBONACCI IN NATURE - NATURE MEIN FIBONACCI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Fibonacci sequence nature mein bahut jagah milta hai:

1. 🌻 **Sunflower seeds** - Spiral pattern (55, 89 spirals)
2. 🐚 **Seashells** - Spiral shape follows Fibonacci
3. 🌿 **Tree branches** - Branch splitting pattern
4. 🍍 **Pineapple** - Scale arrangement
5. 🌀 **Hurricanes** - Spiral shape
6. 🌌 **Galaxies** - Spiral arms

Nature loves Fibonacci! 🌍✨


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 FUNCTION: fibonacci(int n)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

int fibonacci(int n) {
    if (n == 0) return 0;         // Base case 1: Position 0 = 0
    if (n == 1) return 1;         // Base case 2: Position 1 = 1

    int a = 0, b = 1;             // Start with first two numbers
    int fib = 0;                  // Variable to store result

    for (int i = 2; i <= n; i++) {  // Loop from position 2 to n
        fib = a + b;              // Current = previous two ka sum
        a = b;                    // Shift: a becomes b
        b = fib;                  // Shift: b becomes current
    }

    return fib;                   // Return final result
}

**Line by Line Explanation:**

**Line 1-2:** Base Cases
```cpp
if (n == 0) return 0;
if (n == 1) return 1;
```
- Agar position 0 hai, toh 0 return karo
- Agar position 1 hai, toh 1 return karo
- Ye starting points hain sequence ke

**Line 3:** Initialize Variables
```cpp
int a = 0, b = 1;
```
- a = first number (0)
- b = second number (1)
- Ye dono pichle 2 numbers track karte hain

**Line 4:** Result Variable
```cpp
int fib = 0;
```
- fib mein current Fibonacci number store hoga

**Line 5:** Loop
```cpp
for (int i = 2; i <= n; i++)
```
- Position 2 se start karte hain (0 aur 1 already handled)
- n tak loop chalate hain

**Line 6:** Calculate Current
```cpp
fib = a + b;
```
- Current number = pichle 2 numbers ka sum
- Example: a=0, b=1 → fib=1

**Line 7-8:** Shift Values
```cpp
a = b;
b = fib;
```
- a ko b ki value de do (shift left)
- b ko fib ki value de do (update to current)
- Next iteration ke liye ready!


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎬 COMPLETE EXECUTION - STEP BY STEP (Pura Program Kaise Chalta Hai)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### **Example: n = 6 (Find 6th Fibonacci number)**

```
📍 STEP 1: User enters n = 6
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    n = 6

📍 STEP 2: fibonacci(6) function call
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

    Check base cases:
    ┌─────────────────────────────────┐
    │ n == 0? NO (6 ≠ 0)             │
    │ n == 1? NO (6 ≠ 1)             │
    │ Continue to loop...             │
    └─────────────────────────────────┘

    Initial State:
    ┌─────────────────────────────────┐
    │ a = 0                           │
    │ b = 1                           │
    │ fib = 0                         │
    └─────────────────────────────────┘

    Loop Iteration 1: (i = 2)
    ┌─────────────────────────────────┐
    │ fib = a + b = 0 + 1 = 1        │
    │ a = b = 1                       │
    │ b = fib = 1                     │
    │                                 │
    │ State: a=1, b=1, fib=1         │
    └─────────────────────────────────┘

    Loop Iteration 2: (i = 3)
    ┌─────────────────────────────────┐
    │ fib = a + b = 1 + 1 = 2        │
    │ a = b = 1                       │
    │ b = fib = 2                     │
    │                                 │
    │ State: a=1, b=2, fib=2         │
    └─────────────────────────────────┘

    Loop Iteration 3: (i = 4)
    ┌─────────────────────────────────┐
    │ fib = a + b = 1 + 2 = 3        │
    │ a = b = 2                       │
    │ b = fib = 3                     │
    │                                 │
    │ State: a=2, b=3, fib=3         │
    └─────────────────────────────────┘

    Loop Iteration 4: (i = 5)
    ┌─────────────────────────────────┐
    │ fib = a + b = 2 + 3 = 5        │
    │ a = b = 3                       │
    │ b = fib = 5                     │
    │                                 │
    │ State: a=3, b=5, fib=5         │
    └─────────────────────────────────┘

    Loop Iteration 5: (i = 6)
    ┌─────────────────────────────────┐
    │ fib = a + b = 3 + 5 = 8        │
    │ a = b = 5                       │
    │ b = fib = 8                     │
    │                                 │
    │ State: a=5, b=8, fib=8         │
    └─────────────────────────────────┘

    Loop ends (i = 7 > 6)

    Return: 8 ✅

📍 STEP 3: Print result
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    Output: "Fibonacci number at position 6 is: 8" ✅
```


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### **Sliding Window Approach:**

```
Position: 0  1  2  3  4  5  6
Number:   0  1  1  2  3  5  8

Finding position 6:

Start:    [0][1]
           a  b

Step 1:   [0][1] → fib = 0+1 = 1
           Shift: [1][1]
                   a  b

Step 2:   [1][1] → fib = 1+1 = 2
           Shift: [1][2]
                   a  b

Step 3:   [1][2] → fib = 1+2 = 3
           Shift: [2][3]
                   a  b

Step 4:   [2][3] → fib = 2+3 = 5
           Shift: [3][5]
                   a  b

Step 5:   [3][5] → fib = 3+5 = 8 ✅
           Shift: [5][8]
                   a  b

Answer: 8
```

### **Call Stack:**

```
    ┌──────────────────────────────┐
    │   fibonacci(6)               │
    │   - Base cases: NO           │
    │   - Loop 5 times (2 to 6)    │
    │   - Calculates: 1,2,3,5,8    │
    │   - Returns: 8 ✅            │
    └──────────────────────────────┘
              ↓
    ┌──────────────────────────────┐
    │   main()                     │
    │   - Receives: 8              │
    │   - Prints: "...is: 8"       │
    └──────────────────────────────┘
```


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🧮 MORE EXAMPLES - AUR EXAMPLES DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Example 1: n = 0
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Base case: n == 0
Return: 0 ✅

Real life: Starting point, no rabbits yet!


Example 2: n = 1
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Base case: n == 1
Return: 1 ✅

Real life: First pair of rabbits!


Example 3: n = 10
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Initial: a=0, b=1

i=2:  fib=1,  a=1, b=1
i=3:  fib=2,  a=1, b=2
i=4:  fib=3,  a=2, b=3
i=5:  fib=5,  a=3, b=5
i=6:  fib=8,  a=5, b=8
i=7:  fib=13, a=8, b=13
i=8:  fib=21, a=13, b=21
i=9:  fib=34, a=21, b=34
i=10: fib=55, a=34, b=55

Return: 55 ✅

Sequence: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55


Example 4: n = 2
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Initial: a=0, b=1

i=2: fib = 0 + 1 = 1

Return: 1 ✅

Real life: Second pair of rabbits (same as first, too young to breed)


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1. ✅ **Fibonacci Formula:** F(n) = F(n-1) + F(n-2)
   - Current number = sum of previous 2 numbers
   - Example: F(5) = F(4) + F(3) = 3 + 2 = 5

2. ✅ **Base Cases:** Always handle n=0 and n=1
   - F(0) = 0
   - F(1) = 1
   - These are starting points

3. ✅ **Iterative Approach:** Use loop instead of recursion
   - More efficient (O(n) time)
   - No stack overflow risk
   - Less memory usage

4. ✅ **Sliding Window:** Keep track of last 2 numbers
   - a = previous-previous number
   - b = previous number
   - fib = current number
   - Shift after each calculation

5. ✅ **Time Complexity:** O(n)
   - Loop runs n-1 times
   - Each iteration is O(1)

6. ✅ **Space Complexity:** O(1)
   - Only 3 variables used (a, b, fib)
   - No extra arrays or recursion stack

7. ✅ **Real World Applications:**
   - Nature patterns (flowers, shells)
   - Stock market analysis
   - Computer algorithms
   - Art and architecture
   - Music composition


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎪 FUN ANALOGY - BACHON KI BHASHA MEIN (In Kid's Language)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### 🎮 STAIRCASE CLIMBING GAME:

Imagine: Tum ek staircase climb kar rahe ho! 🪜

**Rules:**
- You can take 1 step OR 2 steps at a time
- How many ways to reach step n?

**Let's Play:**

Step 0: 1 way (don't move)
    []

Step 1: 1 way (one step)
    [1]

Step 2: 2 ways
    [1,1] or [2]
    (two small steps OR one big step)

Step 3: 3 ways
    [1,1,1] or [1,2] or [2,1]

Step 4: 5 ways
    [1,1,1,1] or [1,1,2] or [1,2,1] or [2,1,1] or [2,2]

Step 5: 8 ways
    (combinations of 1s and 2s)

Pattern: 1, 1, 2, 3, 5, 8... (Fibonacci!)

**Why Fibonacci?**
To reach step n, you can come from:
- Step (n-1) with 1 step
- Step (n-2) with 2 steps

Total ways = ways(n-1) + ways(n-2) = Fibonacci! 🎉


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
💡 PRACTICE CHALLENGES - KHUD SE TRY KARO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Challenge 1: What is F(7)?
Hint: Continue the sequence: 0,1,1,2,3,5,8,?

Challenge 2: What is F(8)?
Hint: F(8) = F(7) + F(6)

Challenge 3: If F(n) = 21, what is n?
Hint: Check the sequence

Challenge 4: What is F(12)?
Hint: Keep adding previous two numbers

Challenge 5: Is F(15) even or odd?
Hint: Look at the pattern: even, odd, odd, even, odd, odd...

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### **ANSWERS:**

1. **F(7) = 13** ✅
   - Sequence: 0,1,1,2,3,5,8,13

2. **F(8) = 21** ✅
   - F(8) = F(7) + F(6) = 13 + 8 = 21

3. **n = 8** ✅
   - F(8) = 21

4. **F(12) = 144** ✅
   - Sequence: 0,1,1,2,3,5,8,13,21,34,55,89,144

5. **F(15) = 610 (EVEN)** ✅
   - Pattern: Every 3rd Fibonacci number is even
   - F(0)=0(E), F(1)=1(O), F(2)=1(O), F(3)=2(E), F(4)=3(O), F(5)=5(O), F(6)=8(E)...


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎓 SUMMARY - EK LINE MEIN SAMJHO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

**Fibonacci Sequence:**
"Har number pichle 2 numbers ka sum hota hai!"

**Algorithm:**
1. Base cases: F(0)=0, F(1)=1
2. Start with a=0, b=1
3. Loop: fib = a + b
4. Shift: a=b, b=fib
5. Repeat till position n

**Formula:** F(n) = F(n-1) + F(n-2)

**Sequence:** 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55...

**Example:** F(6) = 8 (because 3 + 5 = 8)

**Nature loves Fibonacci!** 🌻🐚🌀

**Bahut easy hai! Ab tum bhi Fibonacci numbers nikal sakte ho!** 🎉✨

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

*/
