// Binary to decimal

#include <iostream>
using namespace std;
int binaryToDecimal(int biNum) {
    int ans = 0, pow = 1;

    while (biNum > 0) {
        int rem = biNum % 10;
        ans += rem * pow;
        biNum /= 10;
        pow *= 2;
    }
    return ans;
}
int main() {
    cout << binaryToDecimal(10100111) << endl;
    return 0;
}

/*
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE!
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE BINARY TO DECIMAL CONVERSION? (What is Binary to Decimal Conversion?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Binary to Decimal conversion matlab computer ki language (0 aur 1) ko normal numbers (jo hum
samajhte hain) mein convert karna!

📖 Kya hota hai?
- Binary: Computer ki language - sirf 0 aur 1 (e.g., 1101)
- Decimal: Normal numbers jo hum roz use karte hain (e.g., 13)
- Computer binary mein sochta hai, hum decimal mein! 💻➡️👨‍💻

🎯 Purpose:
- Computer ke output ko samajhne ke liye
- Binary data ko human-readable format mein convert karne ke liye
- Digital signals ko numbers mein convert karne ke liye
- Programming mein debugging ke liye

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - LIGHT BULBS KO NUMBERS MEIN CONVERT KARO! 💡
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine karo tumhare paas 4 light bulbs hain:

💡 💡 💡 💡
ON OFF ON ON
1   0   1   1

Ab hume pata karna hai ki ye kitne number ko represent kar rahe hain?

Position:  3    2    1    0
Binary:    1    0    1    1
Value:     8    4    2    1

Calculation:
- Position 0: 1 × 1 = 1
- Position 1: 1 × 2 = 2
- Position 2: 0 × 4 = 0
- Position 3: 1 × 8 = 8

Total = 1 + 2 + 0 + 8 = 11 ✅

Binary 1011 = Decimal 11! 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 BINARY TO DECIMAL - CORE CONCEPT
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Binary to Decimal kaise convert karte hain?

Method: Multiply each bit by powers of 2 (RIGHT TO LEFT)

📊 Place Values (Right to Left):
Position:  3    2    1    0
Power:     2³   2²   2¹   2⁰
Value:     8    4    2    1

🧮 Example: Binary 1101 ko Decimal mein convert karte hain

Binary: 1 1 0 1
        ↓ ↓ ↓ ↓
        8 4 2 1  (Powers of 2)

Step by step:
Position 0 (rightmost): 1 × 2⁰ = 1 × 1 = 1
Position 1:             0 × 2¹ = 0 × 2 = 0
Position 2:             1 × 2² = 1 × 4 = 4
Position 3 (leftmost):  1 × 2³ = 1 × 8 = 8

Total = 1 + 0 + 4 + 8 = 13 ✅

✅ Answer: 1101₂ = 13₁₀

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 FUNCTION: binaryToDecimal(int biNum)

int binaryToDecimal(int biNum) {
     biNum = Jo binary number convert karna hai (e.g., 1101)

    int ans = 0;      // Final decimal number yahan store hoga
    int pow = 1;      // Powers of 2 track karne ke liye (1, 2, 4, 8, 16...)

    while (biNum > 0) {
        Jab tak binary number 0 nahi ho jata, loop chalega
         RIGHT TO LEFT process karte hain

        int rem = biNum % 10;
         % 10 se last digit nikalo (rightmost bit)
         Example: 1101 % 10 = 1

        ans += rem * pow;
         Current bit ko uski power of 2 se multiply karke add karo
         rem = 0 ya 1, pow = 1, 2, 4, 8, 16...

        biNum /= 10;
         Last digit remove karo (next bit ke liye)
         Example: 1101 / 10 = 110

        pow *= 2;
         Next power of 2 ke liye pow ko 2 se multiply karo
        1 → 2 → 4 → 8 → 16 → 32...
    }

    return ans;  // Final decimal number return karo
}

🎯 MAIN FUNCTION:

int main() {
    cout << binaryToDecimal(10100111) << endl;
    // Binary 10100111 ko decimal mein convert karke print karo
    // Answer: 167

    return 0;
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - BINARY 1101 KO DECIMAL MEIN CONVERT KARTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Input: biNum = 1101
Initial values: ans = 0, pow = 1

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 1: (Processing rightmost bit)                         │
├─────────────────────────────────────────────────────────────────┤
│ biNum = 1101                                                    │
│ rem = 1101 % 10 = 1     (Last digit = 1)                       │
│ ans = 0 + (1 × 1) = 1   (1 × 2⁰ = 1)                          │
│ biNum = 1101 / 10 = 110 (Remove last digit)                    │
│ pow = 1 × 2 = 2         (Next power of 2)                      │
│                                                                 │
│ Current ans = 1 ✅                                              │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 2:                                                    │
├─────────────────────────────────────────────────────────────────┤
│ biNum = 110                                                     │
│ rem = 110 % 10 = 0      (Last digit = 0)                       │
│ ans = 1 + (0 × 2) = 1   (0 × 2¹ = 0)                          │
│ biNum = 110 / 10 = 11   (Remove last digit)                    │
│ pow = 2 × 2 = 4         (Next power of 2)                      │
│                                                                 │
│ Current ans = 1 ✅                                              │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 3:                                                    │
├─────────────────────────────────────────────────────────────────┤
│ biNum = 11                                                      │
│ rem = 11 % 10 = 1       (Last digit = 1)                       │
│ ans = 1 + (1 × 4) = 5   (1 × 2² = 4)                          │
│ biNum = 11 / 10 = 1     (Remove last digit)                    │
│ pow = 4 × 2 = 8         (Next power of 2)                      │
│                                                                 │
│ Current ans = 5 ✅                                              │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 4: (Processing leftmost bit)                         │
├─────────────────────────────────────────────────────────────────┤
│ biNum = 1                                                       │
│ rem = 1 % 10 = 1        (Last digit = 1)                       │
│ ans = 5 + (1 × 8) = 13  (1 × 2³ = 8)                          │
│ biNum = 1 / 10 = 0      (Remove last digit)                    │
│ pow = 8 × 2 = 16        (Next power of 2)                      │
│                                                                 │
│ Current ans = 13 ✅                                             │
└─────────────────────────────────────────────────────────────────┘

Loop ends because biNum = 0

✅ FINAL ANSWER: 13

Verification:
Binary 1101 = 1×8 + 1×4 + 0×2 + 1×1 = 8 + 4 + 0 + 1 = 13 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎬 COMPLETE EXECUTION - STEP BY STEP (Pura Program Kaise Chalta Hai)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Program Start 🚀
    ↓
main() function call
    ↓
binaryToDecimal(10100111) call ───────┐
                                      ↓
                    ┌─────────────────────────────────────┐
                    │ binaryToDecimal Function            │
                    ├─────────────────────────────────────┤
                    │ Input: 10100111                     │
                    │ ans = 0, pow = 1                    │
                    │                                     │
                    │ Loop 8 times (8 bits):              │
                    │                                     │
                    │ Bit 0: 1 × 1   = 1   → ans = 1     │
                    │ Bit 1: 1 × 2   = 2   → ans = 3     │
                    │ Bit 2: 1 × 4   = 4   → ans = 7     │
                    │ Bit 3: 0 × 8   = 0   → ans = 7     │
                    │ Bit 4: 0 × 16  = 0   → ans = 7     │
                    │ Bit 5: 1 × 32  = 32  → ans = 39    │
                    │ Bit 6: 0 × 64  = 0   → ans = 39    │
                    │ Bit 7: 1 × 128 = 128 → ans = 167   │
                    │                                     │
                    │ Return: 167                         │
                    └─────────────────────────────────────┘
                                      ↓
Print: 167 ✅
    ↓
Program End 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

CALL STACK VISUALIZATION:

┌────────────────────────────────────────────────────────────┐
│                        MAIN FUNCTION                        │
├────────────────────────────────────────────────────────────┤
│  Calls: binaryToDecimal(10100111)                         │
│         ↓                                                  │
│  ┌──────────────────────────────────────────────────────┐ │
│  │         binaryToDecimal(10100111) FUNCTION           │ │
│  ├──────────────────────────────────────────────────────┤ │
│  │  Parameters: biNum = 10100111                        │ │
│  │  Local Variables:                                    │ │
│  │    ans = 0 → 1 → 3 → 7 → 7 → 7 → 39 → 39 → 167     │ │
│  │    pow = 1 → 2 → 4 → 8 → 16 → 32 → 64 → 128 → 256  │ │
│  │    rem = 1, 1, 1, 0, 0, 1, 0, 1 (each iteration)    │ │
│  │                                                       │ │
│  │  Returns: 167                                        │ │
│  └──────────────────────────────────────────────────────┘ │
│         ↓                                                  │
│  Receives: 167                                             │
│  Prints: 167                                               │
└────────────────────────────────────────────────────────────┘

DETAILED MEMORY DIAGRAM FOR BINARY 111:

Binary: 111
    ↓
┌───────────────────────────────────────┐
│ Step 1: rem = 111 % 10 = 1           │
│         ans = 0 + (1×1) = 1           │
│         biNum = 111 / 10 = 11         │
│         pow = 1 × 2 = 2               │
│         Current decimal = 1           │
├───────────────────────────────────────┤
│ Step 2: rem = 11 % 10 = 1            │
│         ans = 1 + (1×2) = 3           │
│         biNum = 11 / 10 = 1           │
│         pow = 2 × 2 = 4               │
│         Current decimal = 3           │
├───────────────────────────────────────┤
│ Step 3: rem = 1 % 10 = 1             │
│         ans = 3 + (1×4) = 7           │
│         biNum = 1 / 10 = 0            │
│         pow = 4 × 2 = 8               │
│         Current decimal = 7           │
└───────────────────────────────────────┘
    ↓
Final Decimal: 7 ✅

Verification: 1×4 + 1×2 + 1×1 = 4 + 2 + 1 = 7 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🧮 MORE EXAMPLES - AUR EXAMPLES DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 1: Binary 101 → Decimal

Binary: 101
Position: 2  1  0
Bit:      1  0  1
Power:    4  2  1

Calculation:
Step 1: 1 × 1 = 1   (ans = 1)
Step 2: 0 × 2 = 0   (ans = 1)
Step 3: 1 × 4 = 4   (ans = 5)

✅ Answer: 101₂ = 5₁₀

🍎 Real-life: Binary 101 = 5 apples 🍎🍎🍎🍎🍎
Light bulbs: 💡ON 💡OFF 💡ON

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 2: Binary 1111 → Decimal

Binary: 1111
Position: 3  2  1  0
Bit:      1  1  1  1
Power:    8  4  2  1

Calculation:
Step 1: 1 × 1 = 1   (ans = 1)
Step 2: 1 × 2 = 2   (ans = 3)
Step 3: 1 × 4 = 4   (ans = 7)
Step 4: 1 × 8 = 8   (ans = 15)

✅ Answer: 1111₂ = 15₁₀

🍕 Real-life: Binary 1111 = 15 pizza slices 🍕
Light bulbs: 💡ON 💡ON 💡ON 💡ON (Saare bulbs jal rahe hain!)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 3: Binary 1010 → Decimal

Binary: 1010
Position: 3  2  1  0
Bit:      1  0  1  0
Power:    8  4  2  1

Calculation:
Step 1: 0 × 1 = 0   (ans = 0)
Step 2: 1 × 2 = 2   (ans = 2)
Step 3: 0 × 4 = 0   (ans = 2)
Step 4: 1 × 8 = 8   (ans = 10)

✅ Answer: 1010₂ = 10₁₀

🎮 Real-life: Binary 1010 = 10 game coins 🪙
Light bulbs: 💡ON 💡OFF 💡ON 💡OFF

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 4: Binary 10000 → Decimal

Binary: 10000
Position: 4  3  2  1  0
Bit:      1  0  0  0  0
Power:   16  8  4  2  1

Calculation:
Step 1: 0 × 1  = 0   (ans = 0)
Step 2: 0 × 2  = 0   (ans = 0)
Step 3: 0 × 4  = 0   (ans = 0)
Step 4: 0 × 8  = 0   (ans = 0)
Step 5: 1 × 16 = 16  (ans = 16)

✅ Answer: 10000₂ = 16₁₀

🎈 Real-life: Binary 10000 = 16 balloons 🎈
Light bulbs: 💡ON 💡OFF 💡OFF 💡OFF 💡OFF

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ 1. RIGHT TO LEFT PROCESSING:
   - Binary number ko RIGHT se LEFT process karte hain
   - % 10 se last digit nikalte hain
   - / 10 se last digit remove karte hain
   - Ye natural order hai!

✅ 2. POWERS OF 2:
   - pow = 1, 2, 4, 8, 16, 32, 64, 128, 256...
   - Har step mein pow × 2 karte hain
   - Ye 2⁰, 2¹, 2², 2³, 2⁴... represent karta hai

✅ 3. MODULO OPERATOR (% 10):
   - % 10 se last digit milta hai
   - Example: 1101 % 10 = 1
   - Example: 110 % 10 = 0

✅ 4. DIVISION OPERATOR (/ 10):
   - / 10 se last digit remove ho jata hai
   - Example: 1101 / 10 = 110
   - Example: 110 / 10 = 11

✅ 5. BUILDING ANSWER:
   - ans += (rem × pow) - Current bit ko power of 2 se multiply karke add karo
   - rem = 0 ya 1 (current bit)
   - pow = 1, 2, 4, 8... (power of 2)

✅ 6. LOOP CONDITION:
   - while (biNum > 0) - Jab tak binary number positive hai
   - Har iteration mein ek digit process hota hai
   - Time Complexity: O(log n) - Number of bits ke barabar

✅ 7. SPECIAL CASES:
   - Binary 0 = Decimal 0
   - Binary 1 = Decimal 1
   - All 1s (like 1111) = 2ⁿ - 1 (where n = number of bits)

✅ 8. COMMON MISTAKES:
   - ❌ Left to right process karna (WRONG!)
   - ✅ Right to left process karna (CORRECT!)
   - ❌ pow ko update karna bhool jana
   - ✅ Har step mein pow *= 2 karna

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎪 FUN ANALOGY - BACHON KI BHASHA MEIN (In Kid's Language)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎁 GIFT BOX STORY! 🎁

Imagine karo tumhare paas 4 gift boxes hain, aur har box mein different value hai:

Box 1 (rightmost): 1 candy 🍬
Box 2: 2 candies 🍬🍬
Box 3: 4 candies 🍬🍬🍬🍬
Box 4 (leftmost): 8 candies 🍬🍬🍬🍬🍬🍬🍬🍬

Ab tumhe binary code diya gaya: 1011

Ye code batata hai ki kaunse boxes OPEN hain (1) aur kaunse CLOSED hain (0):

Binary: 1  0  1  1
Box:    4  3  2  1
        ↓  ↓  ↓  ↓
       OPEN CLOSED OPEN OPEN

Ab count karo kitne candies mile:

Box 1 (OPEN):   1 candy  ✅
Box 2 (OPEN):   2 candies ✅
Box 3 (CLOSED): 0 candies ❌
Box 4 (OPEN):   8 candies ✅

Total candies = 1 + 2 + 0 + 8 = 11 candies! 🍬

✅ Binary 1011 = 11 candies = Decimal 11! 🎉

Ye exactly wahi hai jo computer karta hai! Har bit ek box hai - OPEN (1) ya CLOSED (0)! 💻

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━*/