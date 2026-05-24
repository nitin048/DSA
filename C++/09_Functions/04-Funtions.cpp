// Calculate nCr binomial coefficient for n & r

#include <iostream>
using namespace std;

int Factorial(int x) {
    int fact = 1;
    for (int i = 1; i <= x; i++) {
        fact = fact * i;
    }
    return fact;
}

int nCr(int n, int r) {
    int fact_n = Factorial(n);
    int fact_r = Factorial(r);
    int fact_nmr = Factorial(n - r);

    return fact_n / (fact_r * fact_nmr);
}

int main() {
    int n;
    int r;
    cout << "Enter n values" << endl;
    cin >> n;
    cout << "Enter r values" << endl;
    cin >> r;
    int result = nCr(n, r);
    cout << "-------------------------" << endl;
    cout << "nCr Result is : " << result << endl;
    return 0;
}

// ═══════════════════════════════════════════════════════════════════════════════════════════════
// 🎯 DETAILED EXPLANATION 🎯
// ═══════════════════════════════════════════════════════════════════════════════════════════════

/*

📚 KYA HAI YE nCr? (What is nCr?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🍎 REAL LIFE EXAMPLE - APPLES KI KAHANI:
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine: Tumhare paas 5 apples hain 🍎🍎🍎🍎🍎
Question: Tum 2 apples choose karna chahte ho. Kitne different ways mein choose kar sakte ho?

Apple 1 = 🍎 (Red)
Apple 2 = 🍏 (Green)
Apple 3 = 🍊 (Orange)
Apple 4 = 🍋 (Yellow)
Apple 5 = 🍉 (Pink)

Possible combinations (2 apples choose karne ke):
1. 🍎🍏 (Red + Green)
2. 🍎🍊 (Red + Orange)
3. 🍎🍋 (Red + Yellow)
4. 🍎🍉 (Red + Pink)
5. 🍏🍊 (Green + Orange)
6. 🍏🍋 (Green + Yellow)
7. 🍏🍉 (Green + Pink)
8. 🍊🍋 (Orange + Yellow)
9. 🍊🍉 (Orange + Pink)
10. 🍋🍉 (Yellow + Pink)

Total = 10 ways! ✨

Yahi calculate karta hai nCr formula:
nCr = n! / (r! × (n-r)!)
5C2 = 5! / (2! × 3!) = 120 / (2 × 6) = 120 / 12 = 10 ✅


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 FACTORIAL KYA HOTA HAI? (What is Factorial?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Factorial matlab: Ek number se lekar 1 tak sabko multiply karo!

5! (5 factorial) = 5 × 4 × 3 × 2 × 1 = 120
4! (4 factorial) = 4 × 3 × 2 × 1 = 24
3! (3 factorial) = 3 × 2 × 1 = 6
2! (2 factorial) = 2 × 1 = 2
1! (1 factorial) = 1
0! (0 factorial) = 1 (special case)

🎯 Example: 5! ko calculate karte hain step by step:
Step 1: fact = 1
Step 2: fact = 1 × 1 = 1
Step 3: fact = 1 × 2 = 2
Step 4: fact = 2 × 3 = 6
Step 5: fact = 6 × 4 = 24
Step 6: fact = 24 × 5 = 120 ✅


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 FUNCTION 1: Factorial(int x)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

int Factorial(int x) {
    int fact = 1;                    // Step 1: fact ko 1 se start karo
    for (int i = 1; i <= x; i++) {   // Step 2: 1 se lekar x tak loop chalao
        fact = fact * i;              // Step 3: fact ko i se multiply karo
    }
    return fact;                      // Step 4: Final answer return karo
}

🎯 Example: Factorial(5) ko calculate karte hain:

Initial: fact = 1

Loop iteration 1: i = 1
    fact = 1 × 1 = 1

Loop iteration 2: i = 2
    fact = 1 × 2 = 2

Loop iteration 3: i = 3
    fact = 2 × 3 = 6

Loop iteration 4: i = 4
    fact = 6 × 4 = 24

Loop iteration 5: i = 5
    fact = 24 × 5 = 120

Return: 120 ✅


📌 FUNCTION 2: nCr(int n, int r)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

int nCr(int n, int r) {
    int fact_n = Factorial(n);        // Step 1: n ka factorial calculate karo
    int fact_r = Factorial(r);        // Step 2: r ka factorial calculate karo
    int fact_nmr = Factorial(n - r);  // Step 3: (n-r) ka factorial calculate karo

    return fact_n / (fact_r * fact_nmr);  // Step 4: Formula apply karo
}

🎯 Example: nCr(5, 2) ko calculate karte hain:

Step 1: fact_n = Factorial(5) = 120
Step 2: fact_r = Factorial(2) = 2
Step 3: fact_nmr = Factorial(5-2) = Factorial(3) = 6

Step 4: nCr = 120 / (2 × 6)
            = 120 / 12
            = 10 ✅


📌 FUNCTION 3: main()
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

int main() {
    int n, r;
    cout << "Enter n values" << endl;  // User se n input lo
    cin >> n;
    cout << "Enter r values" << endl;  // User se r input lo
    cin >> r;

    int result = nCr(n, r);            // nCr function call karo

    cout << "-------------------------" << endl;
    cout << "nCr Result is : " << result << endl;  // Result print karo
    return 0;
}


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎬 COMPLETE EXECUTION - STEP BY STEP (Pura Program Kaise Chalta Hai)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Let's say user enters: n = 5, r = 2

📍 STEP 1: main() function start hota hai
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    n = 5 (user input)
    r = 2 (user input)

📍 STEP 2: nCr(5, 2) function call hota hai
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

    📞 Call 1: Factorial(5)
    ┌─────────────────────────────────┐
    │ fact = 1                        │
    │ Loop: 1×2×3×4×5 = 120          │
    │ Return: 120                     │
    └─────────────────────────────────┘
    fact_n = 120 ✅

    📞 Call 2: Factorial(2)
    ┌─────────────────────────────────┐
    │ fact = 1                        │
    │ Loop: 1×2 = 2                   │
    │ Return: 2                       │
    └─────────────────────────────────┘
    fact_r = 2 ✅

    📞 Call 3: Factorial(3)  [because 5-2=3]
    ┌─────────────────────────────────┐
    │ fact = 1                        │
    │ Loop: 1×2×3 = 6                 │
    │ Return: 6                       │
    └─────────────────────────────────┘
    fact_nmr = 6 ✅

    📊 Final Calculation:
    ┌─────────────────────────────────┐
    │ nCr = 120 / (2 × 6)            │
    │     = 120 / 12                  │
    │     = 10                        │
    └─────────────────────────────────┘

📍 STEP 3: Result print hota hai
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    Output: "nCr Result is : 10"


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

CALL STACK (Function calls ka order):

    ┌──────────────────────────────┐
    │   Factorial(3) returns 6     │  ← 3rd call
    └──────────────────────────────┘
              ↓
    ┌──────────────────────────────┐
    │   Factorial(2) returns 2     │  ← 2nd call
    └──────────────────────────────┘
              ↓
    ┌──────────────────────────────┐
    │   Factorial(5) returns 120   │  ← 1st call
    └──────────────────────────────┘
              ↓
    ┌──────────────────────────────┐
    │   nCr(5,2) returns 10        │  ← Main calculation
    └──────────────────────────────┘
              ↓
    ┌──────────────────────────────┐
    │   main() prints result       │  ← Final output
    └──────────────────────────────┘


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🧮 MORE EXAMPLES - AUR EXAMPLES DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Example 1: nCr(4, 2) - 4 items mein se 2 choose karo
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    fact_n = 4! = 24
    fact_r = 2! = 2
    fact_nmr = 2! = 2

    nCr = 24 / (2 × 2) = 24 / 4 = 6 ✅

    Real life: 4 friends mein se 2 ko party mein invite karna hai
    Combinations: AB, AC, AD, BC, BD, CD = 6 ways


Example 2: nCr(6, 3) - 6 items mein se 3 choose karo
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    fact_n = 6! = 720
    fact_r = 3! = 6
    fact_nmr = 3! = 6

    nCr = 720 / (6 × 6) = 720 / 36 = 20 ✅

    Real life: 6 colors mein se 3 colors choose karke painting banana hai
    Total 20 different combinations possible hain!


Example 3: nCr(10, 1) - 10 items mein se 1 choose karo
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    fact_n = 10! = 3628800
    fact_r = 1! = 1
    fact_nmr = 9! = 362880

    nCr = 3628800 / (1 × 362880) = 10 ✅

    Real life: 10 ice cream flavors mein se 1 choose karna hai
    Obviously 10 ways hain! (har flavor ek way hai)


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1. ✅ nCr = Combinations (order doesn't matter)
   Example: AB aur BA same hain

2. ✅ Formula: nCr = n! / (r! × (n-r)!)

3. ✅ Factorial = Number se 1 tak sabko multiply karo
   Example: 5! = 5×4×3×2×1 = 120

4. ✅ Function reusability: Factorial function ko 3 baar use kiya
   - Ek baar n ke liye
   - Ek baar r ke liye
   - Ek baar (n-r) ke liye

5. ✅ Important: return fact; (not return x;)
   - fact mein calculation hai
   - x toh sirf input hai

6. ✅ Real life use:
   - Lottery numbers choose karna
   - Team selection
   - Menu combinations
   - Password possibilities


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎪 FUN ANALOGY - BACHON KI BHASHA MEIN (In Kid's Language)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🍕 PIZZA PARTY ANALOGY:

Tumhare paas 5 friends hain: Amit, Bharat, Chetan, Dinesh, Esha
Tum 2 friends ko pizza party mein bulana chahte ho.

Question: Kitne different pairs bana sakte ho?

Possible pairs:
1. Amit + Bharat
2. Amit + Chetan
3. Amit + Dinesh
4. Amit + Esha
5. Bharat + Chetan
6. Bharat + Dinesh
7. Bharat + Esha
8. Chetan + Dinesh
9. Chetan + Esha
10. Dinesh + Esha

Total = 10 pairs! 🎉

Yahi calculate karta hai: nCr(5, 2) = 10 ✅

Note: Amit+Bharat aur Bharat+Amit SAME hain (order doesn't matter in combinations)


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
💡 PRACTICE CHALLENGES - KHUD SE TRY KARO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Challenge 1: Calculate nCr(7, 3) manually
Challenge 2: Calculate nCr(8, 2) manually
Challenge 3: What is nCr(5, 5)? (Hint: All items choose karna)
Challenge 4: What is nCr(10, 0)? (Hint: Kuch bhi choose nahi karna)

Answers:
1. nCr(7,3) = 35
2. nCr(8,2) = 28
3. nCr(5,5) = 1 (only one way to choose all)
4. nCr(10,0) = 1 (only one way to choose nothing)


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎓 SUMMARY - EK LINE MEIN SAMJHO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

nCr = "n items mein se r items choose karne ke kitne tarike hain?"

Formula: nCr = n! / (r! × (n-r)!)

Example: 5 apples mein se 2 choose karo = 5C2 = 10 ways

Simple! 🎉✨

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

*/
