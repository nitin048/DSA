// Calculate sum of numbers from 1 to n.

#include <iostream>
using namespace std;

// Function definition
int sumOfNumber(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    int result = sumOfNumber(n);
    cout << "Sum = " << result << endl;

    return 0;
}

/*
╔════════════════════════════════════════════════════════════════════════════╗
║                    📚 COMPLETE EXPLANATION - SUM FUNCTION                  ║
╚════════════════════════════════════════════════════════════════════════════╝

🎯 WHAT DOES THIS PROGRAM DO?
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
This program calculates the sum of all numbers from 1 to n.

Example: If n = 5
Sum = 1 + 2 + 3 + 4 + 5 = 15 ✅


🔧 FUNCTION BREAKDOWN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 Function Signature:
   int sumOfNumber(int n)

   ├─ int          → Return type (returns an integer)
   ├─ sumOfNumber  → Function name (what we call it)
   └─ (int n)      → Parameter (input value)


📌 Function Body:

   int sum = 0;
   └─ Creates a variable to store the running total
      Starts at 0 because we haven't added anything yet

   for (int i = 1; i <= n; i++)
   └─ Loop that runs from 1 to n (inclusive)

      Example for n = 5:
      Iteration 1: i = 1
      Iteration 2: i = 2
      Iteration 3: i = 3
      Iteration 4: i = 4
      Iteration 5: i = 5
      Then stops (because i becomes 6, which is > 5)

   sum += i;
   └─ Adds current value of i to sum
      Same as: sum = sum + i

   return sum;
   └─ Sends the final result back to whoever called the function


🎬 STEP-BY-STEP EXECUTION (Example: n = 5)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Step 1: User enters 5
        n = 5

Step 2: Call sumOfNumber(5)
        Function starts executing

Step 3: Inside function
        sum = 0 (initial value)

Step 4: Loop iterations

        🔄 Iteration 1: i = 1
           sum = sum + i
           sum = 0 + 1 = 1

        🔄 Iteration 2: i = 2
           sum = sum + i
           sum = 1 + 2 = 3

        🔄 Iteration 3: i = 3
           sum = sum + i
           sum = 3 + 3 = 6

        🔄 Iteration 4: i = 4
           sum = sum + i
           sum = 6 + 4 = 10

        🔄 Iteration 5: i = 5
           sum = sum + i
           sum = 10 + 5 = 15

        🛑 Loop ends (i becomes 6, which is > 5)

Step 5: Return result
        return 15

Step 6: Back in main()
        result = 15
        Print: "Sum = 15"


📊 MORE EXAMPLES
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Example 1: n = 3
   Sum = 1 + 2 + 3 = 6
   Output: Sum = 6

Example 2: n = 10
   Sum = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10 = 55
   Output: Sum = 55

Example 3: n = 1
   Sum = 1
   Output: Sum = 1

Example 4: n = 100
   Sum = 1 + 2 + 3 + ... + 100 = 5050
   Output: Sum = 5050


🧮 MATHEMATICAL FORMULA
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

There's actually a formula for this!

Sum of 1 to n = n × (n + 1) / 2

Example: n = 5
Sum = 5 × (5 + 1) / 2
    = 5 × 6 / 2
    = 30 / 2
    = 15 ✅

This formula is MUCH faster than using a loop! 🚀


🎯 WHY USE A FUNCTION?
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ Reusability
   Can call sumOfNumber() multiple times with different values

   int sum1 = sumOfNumber(5);   // 15
   int sum2 = sumOfNumber(10);  // 55
   int sum3 = sumOfNumber(100); // 5050

✅ Organization
   Keeps code clean and organized
   Main function doesn't need to know HOW sum is calculated

✅ Readability
   sumOfNumber(5) is easier to understand than a loop in main()

✅ Maintainability
   If you want to change the calculation, change it in ONE place


🌍 REAL-WORLD ANALOGY
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Think of a function like a CALCULATOR 🧮

You give it:     5 (input)
It processes:    1 + 2 + 3 + 4 + 5
It returns:      15 (output)

You don't need to know HOW it calculates internally.
You just use it! 😊


💡 KEY CONCEPTS
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1️⃣ Function Declaration
   Tells compiler the function exists
   Format: return_type function_name(parameters);

2️⃣ Function Definition
   The actual implementation (what it does)

3️⃣ Function Call
   Using the function: sumOfNumber(5)

4️⃣ Parameters
   Input values the function needs (n in this case)

5️⃣ Return Value
   Output the function gives back (sum in this case)


🎓 LEARNING POINTS
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ Functions make code reusable
✅ Functions take input (parameters)
✅ Functions give output (return value)
✅ Loop starts from 1 and goes to n (inclusive)
✅ sum += i is shorthand for sum = sum + i
✅ return sends value back to caller


🚀 TRY IT YOURSELF
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Compile and run:
   ./scripts/cpp C++/09_Functions/01-Fuctions.cpp

Test with different values:
   - Try n = 5   → Should get 15
   - Try n = 10  → Should get 55
   - Try n = 100 → Should get 5050


🎯 PRACTICE CHALLENGES
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Easy:
1. Modify to calculate sum of even numbers only (2 + 4 + 6 + ...)
2. Modify to calculate sum of odd numbers only (1 + 3 + 5 + ...)

Medium:
3. Create a function to calculate sum of squares (1² + 2² + 3² + ...)
4. Use the formula n × (n + 1) / 2 instead of loop

Hard:
5. Create a function to calculate sum from any start to end
   Example: sumRange(5, 10) = 5 + 6 + 7 + 8 + 9 + 10


📚 RELATED CONCEPTS
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

→ Next: Learn about factorial (02-Functions.cpp)
→ Functions with multiple parameters
→ Function overloading
→ Recursive functions


═══════════════════════════════════════════════════════════════════════════════
                        Happy Coding! 🎉💪🚀
═══════════════════════════════════════════════════════════════════════════════
*/
