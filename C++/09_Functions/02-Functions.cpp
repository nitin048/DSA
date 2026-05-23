// Calculate N Factorial
#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    for (int i = 1; i <= num; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int result = factorial(n);
    cout << "Factorial of " << n << " : " << result << endl;
    return 0;
}

/*
╔════════════════════════════════════════════════════════════════════════════╗
║                  📚 COMPLETE EXPLANATION - FACTORIAL FUNCTION              ║
╚════════════════════════════════════════════════════════════════════════════╝

🎯 WHAT IS FACTORIAL?
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Factorial (written as n!) is the product of all positive integers from 1 to n.

Formula: n! = n × (n-1) × (n-2) × ... × 3 × 2 × 1

Example: 5! = 5 × 4 × 3 × 2 × 1 = 120 ✅

Special Cases:
   0! = 1 (by definition)
   1! = 1


🔧 FUNCTION BREAKDOWN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 Function Signature:
   int factorial(int num)

   ├─ int        → Return type (returns an integer)
   ├─ factorial  → Function name (what we call it)
   └─ (int num)  → Parameter (the number to calculate factorial for)


📌 Function Body:

   int fact = 1;
   └─ Creates a variable to store the result
      Starts at 1 (NOT 0!) because:
      - Multiplying by 0 would make everything 0
      - 1 is the multiplicative identity (1 × anything = anything)

   for (int i = 1; i <= num; i++)
   └─ Loop that runs from 1 to num (inclusive)

      Example for num = 5:
      Iteration 1: i = 1
      Iteration 2: i = 2
      Iteration 3: i = 3
      Iteration 4: i = 4
      Iteration 5: i = 5
      Then stops

   fact = fact * i;
   └─ Multiplies current value of i with fact
      Same as: fact *= i

   return fact;
   └─ Sends the final result back to caller


🎬 STEP-BY-STEP EXECUTION (Example: n = 5)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Step 1: User enters 5
        n = 5

Step 2: Call factorial(5)
        Function starts executing

Step 3: Inside function
        fact = 1 (initial value)

Step 4: Loop iterations

        🔄 Iteration 1: i = 1
           fact = fact × i
           fact = 1 × 1 = 1

        🔄 Iteration 2: i = 2
           fact = fact × i
           fact = 1 × 2 = 2

        🔄 Iteration 3: i = 3
           fact = fact × i
           fact = 2 × 3 = 6

        🔄 Iteration 4: i = 4
           fact = fact × i
           fact = 6 × 4 = 24

        🔄 Iteration 5: i = 5
           fact = fact × i
           fact = 24 × 5 = 120

        🛑 Loop ends (i becomes 6, which is > 5)

Step 5: Return result
        return 120

Step 6: Back in main()
        result = 120
        Print: "Factorial of 5 : 120"


📊 FACTORIAL TABLE (1 to 20)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

n  | n! (Factorial)
───┼────────────────────────────
1  | 1
2  | 2
3  | 6
4  | 24
5  | 120
6  | 720
7  | 5,040
8  | 40,320
9  | 362,880
10 | 3,628,800
11 | 39,916,800
12 | 479,001,600
13 | 6,227,020,800
14 | 87,178,291,200
15 | 1,307,674,368,000
16 | 20,922,789,888,000
17 | 355,687,428,096,000
18 | 6,402,373,705,728,000
19 | 121,645,100,408,832,000
20 | 2,432,902,008,176,640,000

⚠️ Notice: Factorials grow EXTREMELY fast! 📈
   For n > 20, you'll need long long or special libraries


📊 MORE EXAMPLES
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Example 1: n = 3
   3! = 3 × 2 × 1 = 6
   Output: Factorial of 3 : 6

Example 2: n = 4
   4! = 4 × 3 × 2 × 1 = 24
   Output: Factorial of 4 : 24

Example 3: n = 6
   6! = 6 × 5 × 4 × 3 × 2 × 1 = 720
   Output: Factorial of 6 : 720

Example 4: n = 10
   10! = 10 × 9 × 8 × 7 × 6 × 5 × 4 × 3 × 2 × 1 = 3,628,800
   Output: Factorial of 10 : 3628800


🌍 REAL-WORLD USES OF FACTORIAL
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1️⃣ Permutations (Arrangements)
   How many ways can you arrange n items?

   Example: 3 books on a shelf
   Answer: 3! = 6 ways

   Arrangements: ABC, ACB, BAC, BCA, CAB, CBA

2️⃣ Combinations
   Choosing items from a group
   Formula uses factorials: nCr = n! / (r! × (n-r)!)

3️⃣ Probability
   Calculating chances in card games, lotteries

4️⃣ Mathematics
   Taylor series, calculus, algebra

5️⃣ Computer Science
   Algorithm analysis, complexity calculations


🎯 WHY START fact = 1 (NOT 0)?
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

❌ If we start with fact = 0:
   fact = 0
   fact = 0 × 1 = 0
   fact = 0 × 2 = 0
   fact = 0 × 3 = 0
   Result: Always 0! ❌

✅ Starting with fact = 1:
   fact = 1
   fact = 1 × 1 = 1
   fact = 1 × 2 = 2
   fact = 2 × 3 = 6
   Result: Correct! ✅

💡 Key Point: 1 is the multiplicative identity
   (1 × anything = anything)


🔄 COMPARISON: SUM vs FACTORIAL
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

For n = 5:

SUM (Addition):
   sum = 0 (start with 0 for addition)
   sum = 0 + 1 = 1
   sum = 1 + 2 = 3
   sum = 3 + 3 = 6
   sum = 6 + 4 = 10
   sum = 10 + 5 = 15 ✅

FACTORIAL (Multiplication):
   fact = 1 (start with 1 for multiplication)
   fact = 1 × 1 = 1
   fact = 1 × 2 = 2
   fact = 2 × 3 = 6
   fact = 6 × 4 = 24
   fact = 24 × 5 = 120 ✅


🎓 TWO WAYS TO CALCULATE FACTORIAL
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Method 1: ITERATIVE (Using Loop) - Current Code ✅

   int factorial(int n) {
       int fact = 1;
       for (int i = 1; i <= n; i++) {
           fact *= i;
       }
       return fact;
   }

   Pros: Fast, uses less memory
   Cons: More code


Method 2: RECURSIVE (Function Calls Itself) 🔄

   int factorial(int n) {
       if (n <= 1) return 1;      // Base case
       return n * factorial(n-1);  // Recursive call
   }

   How it works for n = 5:
   factorial(5) = 5 × factorial(4)
                = 5 × 4 × factorial(3)
                = 5 × 4 × 3 × factorial(2)
                = 5 × 4 × 3 × 2 × factorial(1)
                = 5 × 4 × 3 × 2 × 1
                = 120

   Pros: Elegant, less code
   Cons: Slower, uses more memory (stack)


💡 KEY CONCEPTS
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1️⃣ Factorial = Product of all numbers from 1 to n

2️⃣ Start with 1 (not 0) for multiplication

3️⃣ Loop multiplies each number

4️⃣ Factorials grow VERY fast

5️⃣ Used in permutations, combinations, probability

6️⃣ Can be calculated iteratively or recursively


⚠️ IMPORTANT NOTES
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1. Integer Overflow
   For n > 12, result exceeds int range (2,147,483,647)
   Solution: Use long long

   long long factorial(int n) {
       long long fact = 1;
       for (int i = 1; i <= n; i++) {
           fact *= i;
       }
       return fact;
   }

2. Negative Numbers
   Factorial is only defined for non-negative integers
   Add validation:

   if (n < 0) {
       cout << "Factorial not defined for negative numbers!" << endl;
       return -1;
   }

3. Large Numbers
   For n > 20, even long long overflows
   Need special libraries (BigInteger)


🚀 TRY IT YOURSELF
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Compile and run:
   ./scripts/cpp C++/09_Functions/02-Functions.cpp

Test with different values:
   - Try n = 5   → Should get 120
   - Try n = 6   → Should get 720
   - Try n = 10  → Should get 3628800


🎯 PRACTICE CHALLENGES
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Easy:
1. Add validation for negative numbers
2. Modify to use long long for larger numbers
3. Print factorial table from 1 to 10

Medium:
4. Implement recursive factorial
5. Calculate nPr (permutation): n! / (n-r)!
6. Calculate nCr (combination): n! / (r! × (n-r)!)

Hard:
7. Handle factorial of 0 (should return 1)
8. Create a function to calculate double factorial (n!!)
   Example: 5!! = 5 × 3 × 1 = 15
9. Optimize using memoization (store calculated values)


🧮 MATHEMATICAL PROPERTIES
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1. n! = n × (n-1)!
   Example: 5! = 5 × 4! = 5 × 24 = 120

2. 0! = 1 (by definition)

3. n! / (n-1)! = n
   Example: 5! / 4! = 120 / 24 = 5

4. (n+1)! = (n+1) × n!
   Example: 6! = 6 × 5! = 6 × 120 = 720


🌟 FUN FACTS
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎲 52! (deck of cards)
   The number of ways to arrange a deck of 52 cards is:
   52! ≈ 8 × 10⁶⁷ (80 unvigintillion!)
   That's more than atoms in the observable universe! 🤯

🎯 Factorial grows faster than exponential!
   10! = 3,628,800
   2¹⁰ = 1,024
   Factorial wins! 📈

🔢 100! has 158 digits!
   You'd need special libraries to calculate it


📚 RELATED CONCEPTS
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

→ Permutations (nPr)
→ Combinations (nCr)
→ Recursive functions
→ Dynamic programming
→ Memoization


═══════════════════════════════════════════════════════════════════════════════
                        Happy Coding! 🎉💪🚀
═══════════════════════════════════════════════════════════════════════════════
*/
