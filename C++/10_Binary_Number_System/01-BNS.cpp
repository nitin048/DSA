// How to covert Decimal to Binary

#include <iostream>
using namespace std;

int decToBinary(int decNum) {
    int ans = 0, pow = 1;

    while (decNum > 0) {
        int rem = decNum % 2;
        decNum /= 2;
        ans += (rem * pow);
        pow *= 10;
    }
    return ans;
}
int main() {
    int decNum = 50;
    cout << decToBinary(decNum) << endl;

    for (int i = 0; i <= 10; i++) {
        cout << decToBinary(i) << endl;
    }
    return 0;
}
/*

## 📚 DETAILED EXPLANATION - DECIMAL TO BINARY CONVERSION

```cpp

🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE!
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE DECIMAL TO BINARY CONVERSION? (What is Decimal to Binary Conversion?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Decimal to Binary conversion matlab ek normal number (jo hum roz use karte hain) ko computer ki
language (0 aur 1) mein convert karna!

📖 Kya hota hai?
- Decimal: Normal numbers jo hum use karte hain (0, 1, 2, 3, 4, 5, 6, 7, 8, 9)
- Binary: Computer ki language - sirf 0 aur 1 use hota hai!
- Computer ke andar sab kuch 0 aur 1 mein hi store hota hai! 💻

🎯 Purpose:
- Computers ko samajhne ke liye binary chahiye
- Memory mein data store karne ke liye
- Fast calculations ke liye
- Digital electronics mein use hota hai

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - LIGHT BULBS KI KAHANI! 💡
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine karo tumhare paas 4 light bulbs hain:

💡 💡 💡 💡

Har bulb do states mein ho sakta hai:
- ON (1) = Jal raha hai ✅
- OFF (0) = Bujha hua hai ❌

Ab agar hume number 5 dikhana hai:

Decimal 5 = Binary 0101

💡 💡 💡 💡
OFF ON OFF ON
 0   1   0   1

Aise computer bhi kaam karta hai! Har bit ek switch hai - ON ya OFF! 🔌

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 BINARY NUMBER SYSTEM - CORE CONCEPT
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Binary Number System kya hai?
- Base-2 number system (sirf 2 digits: 0 aur 1)
- Har position ki value 2 ki power hoti hai

📊 Place Values (Right to Left):
Position:  3    2    1    0
Power:     2³   2²   2¹   2⁰
Value:     8    4    2    1

🧮 Example: Decimal 13 ko Binary mein convert karte hain

Method: Divide by 2 and collect remainders (bottom to top)

13 ÷ 2 = 6  remainder 1  ↓
6  ÷ 2 = 3  remainder 0  ↓
3  ÷ 2 = 1  remainder 1  ↓
1  ÷ 2 = 0  remainder 1  ↓

Read from BOTTOM to TOP: 1101

✅ Answer: 13₁₀ = 1101₂

Verification:
1×8 + 1×4 + 0×2 + 1×1 = 8 + 4 + 0 + 1 = 13 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 FUNCTION: decToBinary(int decNum)

int decToBinary(int decNum) {
    decNum = Jo decimal number convert karna hai (e.g., 50)

    int ans = 0;      // Final binary number yahan store hoga
    int pow = 1;      // Place value track karne ke liye (1, 10, 100, 1000...)

    while (decNum > 0) {
        Jab tak number 0 nahi ho jata, loop chalega

        int rem = decNum % 2;
         % 2 se remainder nikalo (0 ya 1)
         Ye batata hai ki current bit 0 hai ya 1

        decNum /= 2;
         Number ko 2 se divide karo (next step ke liye)

        ans += (rem * pow);
         Remainder ko correct position pe add karo
         rem = 0 ya 1, pow = 1, 10, 100, 1000...

        pow *= 10;
         Next position ke liye pow ko 10 se multiply karo
    }

    return ans;  // Final binary number return karo
}

🎯 MAIN FUNCTION:

int main() {
    int decNum = 50;
     Decimal number 50 ko binary mein convert karenge

    cout << decToBinary(50) << endl;
    50 ka binary print hoga: 110010

    for (int i = 0; i <= 10; i++) {
        cout << decToBinary(i) << endl;
    }
     0 se 10 tak sabhi numbers ka binary print hoga

    return 0;
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - DECIMAL 50 KO BINARY MEIN CONVERT KARTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Input: decNum = 50
Initial values: ans = 0, pow = 1

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 1:                                                    │
├─────────────────────────────────────────────────────────────────┤
│ decNum = 50                                                     │
│ rem = 50 % 2 = 0        (50 ÷ 2 = 25, remainder 0)            │
│ decNum = 50 / 2 = 25                                           │
│ ans = 0 + (0 × 1) = 0                                          │
│ pow = 1 × 10 = 10                                              │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 2:                                                    │
├─────────────────────────────────────────────────────────────────┤
│ decNum = 25                                                     │
│ rem = 25 % 2 = 1        (25 ÷ 2 = 12, remainder 1)            │
│ decNum = 25 / 2 = 12                                           │
│ ans = 0 + (1 × 10) = 10                                        │
│ pow = 10 × 10 = 100                                            │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 3:                                                    │
├─────────────────────────────────────────────────────────────────┤
│ decNum = 12                                                     │
│ rem = 12 % 2 = 0        (12 ÷ 2 = 6, remainder 0)             │
│ decNum = 12 / 2 = 6                                            │
│ ans = 10 + (0 × 100) = 10                                      │
│ pow = 100 × 10 = 1000                                          │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 4:                                                    │
├─────────────────────────────────────────────────────────────────┤
│ decNum = 6                                                      │
│ rem = 6 % 2 = 0         (6 ÷ 2 = 3, remainder 0)              │
│ decNum = 6 / 2 = 3                                             │
│ ans = 10 + (0 × 1000) = 10                                     │
│ pow = 1000 × 10 = 10000                                        │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 5:                                                    │
├─────────────────────────────────────────────────────────────────┤
│ decNum = 3                                                      │
│ rem = 3 % 2 = 1         (3 ÷ 2 = 1, remainder 1)              │
│ decNum = 3 / 2 = 1                                             │
│ ans = 10 + (1 × 10000) = 10010                                 │
│ pow = 10000 × 10 = 100000                                      │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ ITERATION 6:                                                    │
├─────────────────────────────────────────────────────────────────┤
│ decNum = 1                                                      │
│ rem = 1 % 2 = 1         (1 ÷ 2 = 0, remainder 1)              │
│ decNum = 1 / 2 = 0                                             │
│ ans = 10010 + (1 × 100000) = 110010                            │
│ pow = 100000 × 10 = 1000000                                    │
└─────────────────────────────────────────────────────────────────┘

Loop ends because decNum = 0

✅ FINAL ANSWER: 110010

Verification: 1×32 + 1×16 + 0×8 + 0×4 + 1×2 + 0×1 = 32 + 16 + 2 = 50 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎬 COMPLETE EXECUTION - STEP BY STEP (Pura Program Kaise Chalta Hai)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Program Start 🚀
    ↓
main() function call
    ↓
decNum = 50 initialize
    ↓
decToBinary(50) call ───────┐
                            ↓
                    ┌───────────────────────┐
                    │ decToBinary Function  │
                    ├───────────────────────┤
                    │ Input: 50             │
                    │ ans = 0, pow = 1      │
                    │                       │
                    │ Loop 6 times:         │
                    │ 50→25→12→6→3→1→0      │
                    │                       │
                    │ Building answer:      │
                    │ 0→10→10→10→10010→     │
                    │ →110010               │
                    │                       │
                    │ Return: 110010        │
                    └───────────────────────┘
                            ↓
Print: 110010 ✅
    ↓
Loop starts (i = 0 to 10)
    ↓
┌─────────────────────────────────────┐
│ i = 0  → decToBinary(0)  → 0        │
│ i = 1  → decToBinary(1)  → 1        │
│ i = 2  → decToBinary(2)  → 10       │
│ i = 3  → decToBinary(3)  → 11       │
│ i = 4  → decToBinary(4)  → 100      │
│ i = 5  → decToBinary(5)  → 101      │
│ i = 6  → decToBinary(6)  → 110      │
│ i = 7  → decToBinary(7)  → 111      │
│ i = 8  → decToBinary(8)  → 1000     │
│ i = 9  → decToBinary(9)  → 1001     │
│ i = 10 → decToBinary(10) → 1010     │
└─────────────────────────────────────┘
    ↓
Program End 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

CALL STACK VISUALIZATION:

┌────────────────────────────────────────────────────────────┐
│                        MAIN FUNCTION                        │
├────────────────────────────────────────────────────────────┤
│  decNum = 50                                               │
│  Calls: decToBinary(50)                                    │
│         ↓                                                  │
│  ┌──────────────────────────────────────────────────────┐ │
│  │         decToBinary(50) FUNCTION                     │ │
│  ├──────────────────────────────────────────────────────┤ │
│  │  Parameters: decNum = 50                             │ │
│  │  Local Variables:                                    │ │
│  │    ans = 0 → 10 → 10010 → 110010                    │ │
│  │    pow = 1 → 10 → 100 → 1000 → 10000 → 100000       │ │
│  │    rem = 0, 1, 0, 0, 1, 1 (in each iteration)       │ │
│  │                                                       │ │
│  │  Returns: 110010                                     │ │
│  └──────────────────────────────────────────────────────┘ │
│         ↓                                                  │
│  Receives: 110010                                          │
│  Prints: 110010                                            │
└────────────────────────────────────────────────────────────┘

MEMORY DIAGRAM FOR DECIMAL 13:

Decimal: 13
    ↓
┌───────────────────────────────────────┐
│ Step 1: 13 % 2 = 1, 13 / 2 = 6       │
│         ans = 0 + (1×1) = 1           │
│         Binary so far: 1              │
├───────────────────────────────────────┤
│ Step 2: 6 % 2 = 0, 6 / 2 = 3         │
│         ans = 1 + (0×10) = 1          │
│         Binary so far: 01             │
├───────────────────────────────────────┤
│ Step 3: 3 % 2 = 1, 3 / 2 = 1         │
│         ans = 1 + (1×100) = 101       │
│         Binary so far: 101            │
├───────────────────────────────────────┤
│ Step 4: 1 % 2 = 1, 1 / 2 = 0         │
│         ans = 101 + (1×1000) = 1101   │
│         Binary so far: 1101           │
└───────────────────────────────────────┘
    ↓
Final Binary: 1101 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🧮 MORE EXAMPLES - AUR EXAMPLES DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 1: Decimal 7 → Binary

7 ÷ 2 = 3  remainder 1  → ans = 0 + (1×1) = 1
3 ÷ 2 = 1  remainder 1  → ans = 1 + (1×10) = 11
1 ÷ 2 = 0  remainder 1  → ans = 11 + (1×100) = 111

✅ Answer: 7₁₀ = 111₂

🍎 Real-life: Tumhare paas 7 apples hain
Binary: 111 = 💡ON 💡ON 💡ON (Teen bulbs jal rahe hain!)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 2: Decimal 10 → Binary

10 ÷ 2 = 5  remainder 0  → ans = 0 + (0×1) = 0
5  ÷ 2 = 2  remainder 1  → ans = 0 + (1×10) = 10
2  ÷ 2 = 1  remainder 0  → ans = 10 + (0×100) = 10
1  ÷ 2 = 0  remainder 1  → ans = 10 + (1×1000) = 1010

✅ Answer: 10₁₀ = 1010₂

🍕 Real-life: Tumhare paas 10 pizza slices hain
Binary: 1010 = 💡ON 💡OFF 💡ON 💡OFF

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 3: Decimal 15 → Binary

15 ÷ 2 = 7  remainder 1  → ans = 0 + (1×1) = 1
7  ÷ 2 = 3  remainder 1  → ans = 1 + (1×10) = 11
3  ÷ 2 = 1  remainder 1  → ans = 11 + (1×100) = 111
1  ÷ 2 = 0  remainder 1  → ans = 111 + (1×1000) = 1111

✅ Answer: 15₁₀ = 1111₂

🎮 Real-life: Tumhare paas 15 game coins hain
Binary: 1111 = 💡ON 💡ON 💡ON 💡ON (Saare bulbs jal rahe hain!)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 4: Decimal 0 → Binary

Special case: 0 ka binary bhi 0 hi hota hai!

✅ Answer: 0₁₀ = 0₂

💡 Real-life: Koi bhi bulb nahi jal raha = 0

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ 1. DIVISION METHOD:
   - Number ko 2 se divide karte raho
   - Har baar remainder (0 ya 1) note karo
   - Jab number 0 ho jaye, stop karo
   - Remainders ko BOTTOM TO TOP read karo

✅ 2. MODULO OPERATOR (% 2):
   - % 2 se hamesha 0 ya 1 milta hai
   - Ye batata hai ki number even hai (0) ya odd hai (1)
   - Ye current bit ka value hai

✅ 3. POWER OF 10:
   - Binary number ko decimal format mein store karne ke liye
   - pow = 1, 10, 100, 1000, 10000... (har step mein ×10)
   - Isse binary digits correct position pe aate hain

✅ 4. LOOP CONDITION:
   - while (decNum > 0) - Jab tak number positive hai
   - Har iteration mein number half ho jata hai (÷ 2)
   - Time Complexity: O(log n) - Bahut fast! 🚀

✅ 5. BUILDING ANSWER:
   - ans += (rem × pow) - Remainder ko correct position pe add karo
   - Right to left build hota hai (LSB to MSB)
   - LSB = Least Significant Bit (rightmost)
   - MSB = Most Significant Bit (leftmost)

✅ 6. SPECIAL CASES:
   - 0 ka binary = 0
   - 1 ka binary = 1
   - Negative numbers ke liye alag method chahiye

✅ 7. COMMON MISTAKES:
   - ❌ Remainders ko top to bottom read karna (WRONG!)
   - ✅ Remainders ko bottom to top read karna (CORRECT!)
   - ❌ pow ko update karna bhool jana
   - ✅ Har step mein pow *= 10 karna

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎪 FUN ANALOGY - BACHON KI BHASHA MEIN (In Kid's Language)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎈 BALLOON DISTRIBUTION STORY! 🎈

Imagine karo tumhare paas 13 balloons hain 🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈🎈

Tumhe apne 2 friends ke beech equally distribute karne hain:

Round 1: 13 balloons
- Friend 1 ko 6 balloons
- Friend 2 ko 6 balloons
- Tumhare paas 1 balloon bacha! → Write down: 1 ✅

Round 2: 6 balloons (jo distribute ho gaye)
- Friend 1 ko 3 balloons
- Friend 2 ko 3 balloons
- Koi balloon nahi bacha! → Write down: 0 ✅

Round 3: 3 balloons
- Friend 1 ko 1 balloon
- Friend 2 ko 1 balloon
- Tumhare paas 1 balloon bacha! → Write down: 1 ✅

Round 4: 1 balloon
- Distribute nahi ho sakta equally
- 1 balloon bacha! → Write down: 1 ✅

Ab jo tumne likha: 1, 0, 1, 1
Isko ULTA read karo (bottom to top): 1101

✅ 13 balloons = Binary 1101! 🎉

Ye exactly wahi hai jo computer karta hai! Har baar 2 se divide karke remainder check karta hai! 💻

━━━━━━━━━━━━━━━━
*/