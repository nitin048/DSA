// Bitwise Operators in C++ - Complete Guide

#include <iostream>
using namespace std;

// Function to display binary representation
void displayBinary(int num, int bits = 8) {
    for (int i = bits - 1; i >= 0; i--) {
        cout << ((num >> i) & 1);
        if (i % 4 == 0 && i != 0)
            cout << " ";
    }
}

int main() {
    int a = 5;  // 0101
    int b = 3;  // 0011

    cout << "=== BITWISE OPERATORS DEMO ===" << endl << endl;

    // Display original numbers
    cout << "a = " << a << " (Binary: ";
    displayBinary(a, 4);
    cout << ")" << endl;

    cout << "b = " << b << " (Binary: ";
    displayBinary(b, 4);
    cout << ")" << endl << endl;

    // 1. Bitwise AND (&)
    int andResult = a & b;
    cout << "1. AND (a & b) = " << andResult << " (Binary: ";
    displayBinary(andResult, 4);
    cout << ")" << endl;

    // 2. Bitwise OR (|)
    int orResult = a | b;
    cout << "2. OR (a | b) = " << orResult << " (Binary: ";
    displayBinary(orResult, 4);
    cout << ")" << endl;

    // 3. Bitwise XOR (^)
    int xorResult = a ^ b;
    cout << "3. XOR (a ^ b) = " << xorResult << " (Binary: ";
    displayBinary(xorResult, 4);
    cout << ")" << endl;

    // 4. Bitwise NOT (~)
    int notResult = ~a;
    cout << "4. NOT (~a) = " << notResult << " (Binary: ";
    displayBinary(notResult, 8);
    cout << ")" << endl;

    // 5. Left Shift (<<)
    int leftShift = a << 1;
    cout << "5. Left Shift (a << 1) = " << leftShift << " (Binary: ";
    displayBinary(leftShift, 8);
    cout << ")" << endl;
    
    // 6. Right Shift (>>)
    int rightShift = a >> 1;
    cout << "6. Right Shift (a >> 1) = " << rightShift << " (Binary: ";
    displayBinary(rightShift, 4);
    cout << ")" << endl << endl;
    
    // Practical Examples
    cout << "=== PRACTICAL EXAMPLES ===" << endl << endl;
    
    // Check if number is even or odd
    cout << "Check Even/Odd using (n & 1):" << endl;
    cout << "5 & 1 = " << (5 & 1) << " (Odd)" << endl;
    cout << "6 & 1 = " << (6 & 1) << " (Even)" << endl << endl;
    
    // Multiply by 2 using left shift
    cout << "Multiply by 2 using left shift:" << endl;
    cout << "5 << 1 = " << (5 << 1) << " (5 × 2 = 10)" << endl;
    cout << "5 << 2 = " << (5 << 2) << " (5 × 4 = 20)" << endl << endl;
    
    // Divide by 2 using right shift
    cout << "Divide by 2 using right shift:" << endl;
    cout << "20 >> 1 = " << (20 >> 1) << " (20 ÷ 2 = 10)" << endl;
    cout << "20 >> 2 = " << (20 >> 2) << " (20 ÷ 4 = 5)" << endl << endl;
    
    // Swap two numbers without temp
    int x = 10, y = 20;
    cout << "Swap without temp variable:" << endl;
    cout << "Before: x = " << x << ", y = " << y << endl;
    x = x ^ y;
    y = x ^ y;
    x = x ^ y;
    cout << "After: x = " << x << ", y = " << y << endl << endl;
    
    // Check if power of 2
    int num = 8;
    bool isPowerOf2 = (num > 0) && ((num & (num - 1)) == 0);
    cout << "Is " << num << " a power of 2? " << (isPowerOf2 ? "Yes" : "No") << endl;
    
    return 0;
}

/*
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE! 
🎉��🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉��🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE BITWISE OPERATORS? (What are Bitwise Operators?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Bitwise operators wo operators hain jo DIRECTLY bits (0 aur 1) pe kaam karte hain!
Ye sabse FAST operations hain computer mein! ⚡

📖 Kya hota hai?
- Normal operators: Numbers pe kaam karte hain (5 + 3 = 8)
- Bitwise operators: Individual bits pe kaam karte hain (0101 & 0011 = 0001)
- Computer ke andar sab kuch bits mein hi hota hai!

🎯 Purpose:
- Super fast calculations ke liye
- Memory efficient operations
- Low-level programming (hardware, graphics, networking)
- Optimization aur performance improvement
- Flags aur permissions manage karne ke liye

🔑 6 Main Bitwise Operators:
1. AND (&) - Dono bits 1 honi chahiye
2. OR (|) - Kam se kam ek bit 1 honi chahiye
3. XOR (^) - Bits different honi chahiye
4. NOT (~) - Sabhi bits flip karo
5. Left Shift (<<) - Bits ko left mein shift karo
6. Right Shift (>>) - Bits ko right mein shift karo

/*
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE! 
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉��🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉��🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE BITWISE OPERATORS? (What are Bitwise Operators?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Bitwise operators wo operators hain jo DIRECTLY bits (0 aur 1) pe kaam karte hain!
Ye computer ki sabse FASTEST operations hain! ⚡

📖 Kya hota hai?
- Normal operators: Numbers pe kaam karte hain (5 + 3 = 8)
- Bitwise operators: Individual bits pe kaam karte hain (0101 & 0011 = 0001)
- Computer ke andar sab kuch bits mein hi hota hai! 💻

🎯 Purpose:
- Super fast calculations ke liye
- Memory efficient operations
- Low-level programming (hardware, graphics, networking)
- Optimization aur performance improvement
- Flags aur permissions manage karne ke liye

🔑 6 Main Bitwise Operators:
1️⃣ AND (&) - Dono 1 chahiye
2️⃣ OR (|) - Koi ek 1 chahiye
3️⃣ XOR (^) - Different chahiye
4️⃣ NOT (~) - Flip karo sab bits
5️⃣ Left Shift (<<) - Left mein shift karo
6️⃣ Right Shift (>>) - Right mein shift karo

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - LIGHT SWITCHES! 💡
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine karo tumhare paas 4 light switches hain:

Switch A: 💡ON  ��OFF  💡ON  💡OFF  (5 = 0101)
Switch B: 💡OFF 💡OFF  💡ON  💡ON   (3 = 0011)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 AND (&) - DONO ON CHAHIYE!
Rule: Dono switches ON hone chahiye tabhi result ON hoga

Switch A: 💡ON  💡OFF  💡ON  💡OFF
Switch B: 💡OFF 💡OFF  💡ON  💡ON
         ─────────────────────────
Result:   💡OFF 💡OFF  💡ON  💡OFF  (1 = 0001)

Sirf position 2 pe dono ON the, isliye sirf wahi ON hai! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 OR (|) - KOI EK ON CHAHIYE!
Rule: Kam se kam ek switch ON ho to result ON

Switch A: 💡ON  💡OFF  💡ON  💡OFF
Switch B: ��OFF 💡OFF  💡ON  💡ON
         ─────────────────────────
Result:   💡ON  💡OFF  💡ON  💡ON   (7 = 0111)

Position 0, 2, 3 pe koi na koi ON tha! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 XOR (^) - DIFFERENT CHAHIYE!
Rule: Dono switches DIFFERENT hone chahiye (ek ON, ek OFF)

Switch A: ��ON  💡OFF  💡ON  💡OFF
Switch B: 💡OFF 💡OFF  💡ON  💡ON
         ─────────────────────────
Result:   💡ON  💡OFF  💡OFF 💡ON   (6 = 0110)

Position 0 aur 3 pe different the! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 NOT (~) - ULTA KARO!
Rule: Jo ON hai wo OFF, jo OFF hai wo ON

Switch A: 💡ON  💡OFF  💡ON  💡OFF  (5 = 0101)
         ─────────────────────────
Result:   💡OFF 💡ON  💡OFF 💡ON   (~5 = 1010 in 4-bit)

Sabhi switches ulte ho gaye! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT - BITWISE OPERATORS IN DETAIL
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 OPERATOR 1: AND (&)

Truth Table:
0 & 0 = 0
0 & 1 = 0
1 & 0 = 0
1 & 1 = 1  ← Sirf yahi 1 deta hai!

Example: 5 & 3
  0101  (5)
& 0011  (3)
──────
  0001  (1)

Use Cases:
✅ Check if bit is set: num & (1 << pos)
✅ Check even/odd: num & 1 (0=even, 1=odd)
✅ Clear bits
✅ Extract specific bits

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 OPERATOR 2: OR (|)

Truth Table:
0 | 0 = 0  ← Sirf yahi 0 deta hai!
0 | 1 = 1
1 | 0 = 1
1 | 1 = 1

Example: 5 | 3
  0101  (5)
| 0011  (3)
──────
  0111  (7)

Use Cases:
✅ Set a bit: num | (1 << pos)
✅ Combine flags
✅ Merge bit patterns

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 OPERATOR 3: XOR (^)

Truth Table:
0 ^ 0 = 0
0 ^ 1 = 1
1 ^ 0 = 1
1 ^ 1 = 0

Example: 5 ^ 3
  0101  (5)
^ 0011  (3)
──────
  0110  (6)

Magic Properties:
✨ a ^ a = 0 (same numbers cancel out!)
✨ a ^ 0 = a (XOR with 0 gives original)
✨ a ^ b ^ b = a (reversible!)

Use Cases:
✅ Toggle a bit: num ^ (1 << pos)
✅ Swap without temp: a^=b; b^=a; a^=b;
✅ Find unique element
✅ Encryption/Decryption

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 OPERATOR 4: NOT (~)

Operation: Flip all bits (0→1, 1→0)

Example: ~5 (in 8-bit)
  00000101  (5)
~ ────────
  11111010  (-6 in two's complement)

Formula: ~n = -(n+1)
~5 = -6
~10 = -11
~0 = -1

Use Cases:
✅ Create bit masks
✅ Invert all bits
✅ Clear specific bits: num & ~(1 << pos)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 OPERATOR 5: LEFT SHIFT (<<)

Operation: Bits ko left mein shift karo, right se 0 add karo

Example: 5 << 1
Original:  0101  (5)
<< 1:     01010  (10)
<< 2:    010100  (20)

Formula: n << k = n × 2^k
5 << 1 = 5 × 2 = 10
5 << 2 = 5 × 4 = 20
5 << 3 = 5 × 8 = 40

Use Cases:
✅ Fast multiplication by powers of 2
✅ Create bit masks: 1 << pos
✅ Set specific bits

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 OPERATOR 6: RIGHT SHIFT (>>)

Operation: Bits ko right mein shift karo

Example: 20 >> 1
Original: 10100  (20)
>> 1:     01010  (10)
>> 2:     00101  (5)

Formula: n >> k = n ÷ 2^k (integer division)
20 >> 1 = 20 ÷ 2 = 10
20 >> 2 = 20 ÷ 4 = 5
20 >> 3 = 20 ÷ 8 = 2

Use Cases:
✅ Fast division by powers of 2
✅ Extract bits
✅ Optimize division operations

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 FUNCTION: displayBinary(int num, int bits = 8)

void displayBinary(int num, int bits = 8) {
    // Ye function number ko binary mein print karta hai
    
    for (int i = bits - 1; i >= 0; i--) {
        // Left se right print karne ke liye (MSB to LSB)
        
        cout << ((num >> i) & 1);
        // num >> i: Number ko i positions right shift karo
        // & 1: Last bit nikalo (0 ya 1)
        
        if (i % 4 == 0 && i != 0) cout << " ";
        // Har 4 bits ke baad space (readability ke liye)
    }
}

Example: displayBinary(5, 4)
i=3: (5 >> 3) & 1 = 0
i=2: (5 >> 2) & 1 = 1
i=1: (5 >> 1) & 1 = 0
i=0: (5 >> 0) & 1 = 1
Output: 0101

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 MAIN FUNCTION - BITWISE OPERATIONS

int main() {
    int a = 5;  // 0101 in binary
    int b = 3;  // 0011 in binary
    
    // 1. AND Operation
    int andResult = a & b;  // 0101 & 0011 = 0001 = 1
    
    // 2. OR Operation
    int orResult = a | b;   // 0101 | 0011 = 0111 = 7
    
    // 3. XOR Operation
    int xorResult = a ^ b;  // 0101 ^ 0011 = 0110 = 6
    
    // 4. NOT Operation
    int notResult = ~a;     // ~0101 = 1010 (in 4-bit) = -6 (in two's complement)
    
    // 5. Left Shift
    int leftShift = a << 1; // 0101 << 1 = 1010 = 10 (5 × 2)
    
    // 6. Right Shift
    int rightShift = a >> 1; // 0101 >> 1 = 0010 = 2 (5 ÷ 2)
    
    return 0;
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 PRACTICAL EXAMPLES

1️⃣ Check Even/Odd:
   num & 1
   - If result is 0 → Even
   - If result is 1 → Odd
   
   Example: 5 & 1 = 1 (Odd)
           6 & 1 = 0 (Even)

2️⃣ Multiply by 2:
   num << 1
   
   Example: 5 << 1 = 10 (5 × 2)

3️⃣ Divide by 2:
   num >> 1
   
   Example: 10 >> 1 = 5 (10 ÷ 2)

4️⃣ Swap without temp:
   a = a ^ b;
   b = a ^ b;  // b = (a^b) ^ b = a
   a = a ^ b;  // a = (a^b) ^ a = b

5️⃣ Check Power of 2:
   (num > 0) && ((num & (num-1)) == 0)
   
   Example: 8 & 7 = 1000 & 0111 = 0000 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - SWAP WITHOUT TEMP VARIABLE
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Initial Values:
x = 10 (1010)
y = 20 (10100)

┌─────────────────────────────────────────────────────────────────┐
│ STEP 1: x = x ^ y                                               │
├─────────────────────────────────────────────────────────────────┤
│   01010  (10)                                                   │
│ ^ 10100  (20)                                                   │
│ ────────                                                        │
│   11110  (30)                                                   │
│                                                                 │
│ x = 30, y = 20                                                  │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ STEP 2: y = x ^ y                                               │
├─────────────────────────────────────────────────────────────────┤
│   11110  (30 = x)                                               │
│ ^ 10100  (20 = old y)                                           │
│ ────────                                                        │
│   01010  (10 = old x!)                                          │
│                                                                 │
│ x = 30, y = 10  ← y ab old x ban gaya! ✅                       │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ STEP 3: x = x ^ y                                               │
├─────────────────────────────────────────────────────────────────┤
│   11110  (30 = old x^y)                                         │
│ ^ 01010  (10 = old x)                                           │
│ ────────                                                        │
│   10100  (20 = old y!)                                          │
│                                                                 │
│ x = 20, y = 10  ← Swap complete! 🎉                             │
└─────────────────────────────────────────────────────────────────┘

✅ FINAL RESULT:
Before: x = 10, y = 20
After:  x = 20, y = 10

Magic! Bina temp variable ke swap ho gaya! ✨

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎬 COMPLETE EXECUTION - STEP BY STEP (Pura Program Kaise Chalta Hai)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Program Start 🚀
    ↓
main() function call
    ↓
Initialize: a = 5 (0101), b = 3 (0011)
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ Display Original Numbers                                        │
├─────────────────────────────────────────────────────────────────┤
│ a = 5 (Binary: 0101)                                            │
│ b = 3 (Binary: 0011)                                            │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ Perform All Bitwise Operations                                  │
├─────────────────────────────────────────────────────────────────┤
│ 1. AND:  5 & 3 = 1  (0101 & 0011 = 0001)                       │
│ 2. OR:   5 | 3 = 7  (0101 | 0011 = 0111)                       │
│ 3. XOR:  5 ^ 3 = 6  (0101 ^ 0011 = 0110)                       │
│ 4. NOT:  ~5 = -6    (~0101 = 1010 in two's complement)         │
│ 5. <<:   5 << 1 = 10 (0101 → 1010)                             │
│ 6. >>:   5 >> 1 = 2  (0101 → 0010)                             │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ Practical Examples                                              │
├─────────────────────────────────────────────────────────────────┤
│ • Check Even/Odd: 5 & 1 = 1 (Odd), 6 & 1 = 0 (Even)           │
│ • Multiply by 2: 5 << 1 = 10, 5 << 2 = 20                      │
│ • Divide by 2: 20 >> 1 = 10, 20 >> 2 = 5                       │
│ • Swap: x=10, y=20 → x=20, y=10 (using XOR)                    │
│ • Power of 2: 8 & 7 = 0 (Yes, it's power of 2!)               │
└─────────────────────────────────────────────────────────────────┘
    ↓
Program End 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

BITWISE AND OPERATION VISUALIZATION:

     Position: 3  2  1  0
            a: 0  1  0  1  (5)
            b: 0  0  1  1  (3)
               ─  ─  ─  ─
    a & b:     0  0  0  1  (1)
               ↓  ↓  ↓  ↓
    Check:     ❌ ❌ ❌ ✅
    
    Position 0: 1 & 1 = 1 ✅ (Dono 1 hain!)
    Position 1: 0 & 1 = 0 ❌
    Position 2: 1 & 0 = 0 ❌
    Position 3: 0 & 0 = 0 ❌

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

LEFT SHIFT VISUALIZATION:

Original: 5 = 0101

<< 1 (Shift left by 1):
  0101  →  1010  (10)
  ↓        ↓
  Add 0 from right

<< 2 (Shift left by 2):
  0101  →  10100  (20)
  ↓         ↓↓
  Add 00 from right

Formula: 5 << n = 5 × 2^n
5 << 1 = 5 × 2¹ = 10
5 << 2 = 5 × 2² = 20
5 << 3 = 5 × 2³ = 40

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

RIGHT SHIFT VISUALIZATION:

Original: 20 = 10100

>> 1 (Shift right by 1):
  10100  →  01010  (10)
           ↑
  Remove rightmost bit

>> 2 (Shift right by 2):
  10100  →  00101  (5)
           ↑↑
  Remove 2 rightmost bits

Formula: 20 >> n = 20 ÷ 2^n
20 >> 1 = 20 ÷ 2¹ = 10
20 >> 2 = 20 ÷ 2² = 5
20 >> 3 = 20 ÷ 2³ = 2


/*
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE! 
🎉��🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉��🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE BITWISE OPERATORS? (What are Bitwise Operators?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Bitwise operators wo operators hain jo DIRECTLY bits (0 aur 1) pe kaam karte hain!
Computer ke andar sab kuch bits mein hi hota hai, aur ye operators us level pe kaam karte hain! 💻

📖 Kya hota hai?
- Normal operators: Numbers pe kaam karte hain (5 + 3 = 8)
- Bitwise operators: Bits pe kaam karte hain (0101 & 0011 = 0001)
- Ye sabse FAST operations hain computer mein! ⚡

🎯 Purpose:
- Super fast calculations ke liye
- Memory efficient operations
- Low-level programming (hardware, graphics, networking)
- Optimization aur performance improvement
- Flags aur permissions manage karne ke liye

🔑 6 Main Bitwise Operators:
1️⃣ AND (&) - Dono 1 chahiye
2️⃣ OR (|) - Koi ek 1 chahiye
3️⃣ XOR (^) - Different chahiye
4️⃣ NOT (~) - Flip karo sab
5️⃣ Left Shift (<<) - Left mein shift karo
6️⃣ Right Shift (>>) - Right mein shift karo

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - LIGHT SWITCHES KI KAHANI! 💡
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine karo tumhare paas 4 light switches hain:

Switch A: 💡ON  💡OFF  💡ON  💡OFF  (5 = 0101)
Switch B: 💡OFF  💡OFF  💡ON  💡ON   (3 = 0011)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 AND (&) - DONO ON CHAHIYE!

Rule: Dono switches ON hone chahiye tabhi result ON hoga!

Switch A: 💡ON  💡OFF  💡ON  💡OFF
Switch B: 💡OFF  💡OFF  💡ON  💡ON
         ─────  ─────  ────  ────
Result:  💡OFF  💡OFF  💡ON  💡OFF  (1 = 0001)

Sirf position 2 pe dono ON the, isliye result mein sirf wahi ON hai! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 OR (|) - KOI EK ON CHAHIYE!

Rule: Kam se kam ek switch ON ho, result ON hoga!

Switch A: 💡ON  💡OFF  💡ON  💡OFF
Switch B: 💡OFF  💡OFF  💡ON  💡ON
         ─────  ─────  ────  ────
Result:  💡ON  💡OFF  💡ON  💡ON  (7 = 0111)

Teen positions pe koi na koi ON tha, isliye result mein teen ON hain! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 XOR (^) - DIFFERENT CHAHIYE!

Rule: Dono switches DIFFERENT hone chahiye tabhi result ON!

Switch A: 💡ON  💡OFF  💡ON  💡OFF
Switch B: 💡OFF  💡OFF  💡ON  💡ON
         ─────  ─────  ────  ────
Result:  💡ON  💡OFF  💡OFF  💡ON  (6 = 0110)

Position 0 aur 3 pe different the, isliye result mein ON hain! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 NOT (~) - ULTA KAR DO!

Rule: Jo ON hai wo OFF, jo OFF hai wo ON!

Switch A: 💡ON  💡OFF  💡ON  💡OFF  (5 = 0101)
         ─────  ─────  ────  ────
Result:  💡OFF  💡ON  💡OFF  💡ON  (~5 = -6 in two's complement)

Sabhi switches ulte ho gaye! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT - BITWISE OPERATORS KAISE KAAM KARTE HAIN?
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Truth Tables (Sach Ki Table):

📊 AND (&) Truth Table:
┌───┬───┬─────┐
│ A │ B │ A&B │
├───┼───┼─────┤
│ 0 │ 0 │  0  │
│ 0 │ 1 │  0  │
│ 1 │ 0 │  0  │
│ 1 │ 1 │  1  │ ← Sirf yahan 1!
└───┴───┴─────┘

📊 OR (|) Truth Table:
┌───┬───┬─────┐
│ A │ B │ A|B │
├───┼───┼─────┤
│ 0 │ 0 │  0  │ ← Sirf yahan 0!
│ 0 │ 1 │  1  │
│ 1 │ 0 │  1  │
│ 1 │ 1 │  1  │
└───┴───┴─────┘

📊 XOR (^) Truth Table:
┌───┬───┬─────┐
│ A │ B │ A^B │
├───┼───┼─────┤
│ 0 │ 0 │  0  │
│ 0 │ 1 │  1  │ ← Different = 1
│ 1 │ 0 │  1  │ ← Different = 1
│ 1 │ 1 │  0  │
└───┴───┴─────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Shift Operators:

🔹 LEFT SHIFT (<<) - Left mein khisko!

5 << 1 means: 5 ko 1 position left shift karo

Original:  0 1 0 1  (5)
<< 1:     1 0 1 0  (10)

Har left shift = × 2
5 << 1 = 5 × 2 = 10 ✅
5 << 2 = 5 × 4 = 20 ✅

🔹 RIGHT SHIFT (>>) - Right mein khisko!

20 >> 1 means: 20 ko 1 position right shift karo

Original: 1 0 1 0 0  (20)
>> 1:     0 1 0 1 0  (10)

Har right shift = ÷ 2
20 >> 1 = 20 ÷ 2 = 10 ✅
20 >> 2 = 20 ÷ 4 = 5 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 FUNCTION: displayBinary(int num, int bits)

void displayBinary(int num, int bits = 8) {
    // Ye function number ko binary mein print karta hai
    
    for (int i = bits - 1; i >= 0; i--) {
        // Left se right print karne ke liye (MSB to LSB)
        
        cout << ((num >> i) & 1);
        // num >> i: Number ko i positions right shift karo
        // & 1: Last bit nikalo (0 ya 1)
        
        if (i % 4 == 0 && i != 0) cout << " ";
        // Har 4 bits ke baad space (readability ke liye)
    }
}

Example: displayBinary(5, 4)
- i=3: (5 >> 3) & 1 = 0
- i=2: (5 >> 2) & 1 = 1
- i=1: (5 >> 1) & 1 = 0
- i=0: (5 >> 0) & 1 = 1
Output: 0101 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 MAIN FUNCTION - BITWISE OPERATIONS:

int a = 5;  // 0101 in binary
int b = 3;  // 0011 in binary

// 1. AND Operation
int andResult = a & b;
// 0101 & 0011 = 0001 = 1

// 2. OR Operation
int orResult = a | b;
// 0101 | 0011 = 0111 = 7

// 3. XOR Operation
int xorResult = a ^ b;
// 0101 ^ 0011 = 0110 = 6

// 4. NOT Operation
int notResult = ~a;
// ~0101 = 1010 (in 4-bit) = -6 (in two's complement)

// 5. Left Shift
int leftShift = a << 1;
// 0101 << 1 = 1010 = 10 (5 × 2)

// 6. Right Shift
int rightShift = a >> 1;
// 0101 >> 1 = 0010 = 2 (5 ÷ 2)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 PRACTICAL EXAMPLES:

// Check Even/Odd
int num = 5;
if (num & 1) {
    cout << "Odd";  // Last bit 1 = Odd
} else {
    cout << "Even"; // Last bit 0 = Even
}

// Swap without temp
int x = 10, y = 20;
x = x ^ y;  // x = 10 ^ 20
y = x ^ y;  // y = (10 ^ 20) ^ 20 = 10
x = x ^ y;  // x = (10 ^ 20) ^ 10 = 20

// Check Power of 2
bool isPowerOf2 = (num > 0) && ((num & (num - 1)) == 0);
// Power of 2 has only one bit set
// 8 = 1000, 7 = 0111, 8 & 7 = 0000 ✅


/*
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE! 
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉��🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉��🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE BITWISE OPERATORS? (What are Bitwise Operators?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Bitwise operators wo operators hain jo DIRECTLY bits (0 aur 1) ke saath kaam karte hain!
Computer ki sabse fastest operations hain ye! ⚡

📖 Kya hota hai?
- Normal operators: Numbers ke saath kaam karte hain (5 + 3 = 8)
- Bitwise operators: Individual bits ke saath kaam karte hain (0101 & 0011 = 0001)
- Computer ke andar sab kuch bits mein hi hota hai! 💻

🎯 6 Main Bitwise Operators:
1. AND (&)  - Dono bits 1 honi chahiye
2. OR (|)   - Kam se kam ek bit 1 honi chahiye
3. XOR (^)  - Bits different honi chahiye
4. NOT (~)  - Sabhi bits ko flip karo
5. Left Shift (<<)  - Bits ko left mein shift karo
6. Right Shift (>>) - Bits ko right mein shift karo

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - LIGHT SWITCHES KI KAHANI! 💡
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine karo tumhare paas 4 light switches hain:

Switch A: 💡ON  💡OFF  💡ON  💡OFF  (5 = 0101)
Switch B: 💡OFF 💡OFF  💡ON  💡ON   (3 = 0011)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 AND (&) - DONO ON CHAHIYE!

Rule: Dono switches ON hone chahiye tabhi result ON hoga!

Switch A: 💡ON  💡OFF  💡ON  💡OFF
Switch B: 💡OFF 💡OFF  💡ON  💡ON
         ─────────────────────────
Result:   💡OFF 💡OFF  💡ON  💡OFF  (1 = 0001)

Sirf position 2 pe dono ON the, isliye sirf wahi ON hai! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 OR (|) - KOI BHI EK ON HO!

Rule: Kam se kam ek switch ON ho to result ON!

Switch A: 💡ON  💡OFF  💡ON  ��OFF
Switch B: 💡OFF 💡OFF  💡ON  💡ON
         ─────────────────────────
Result:   💡ON  💡OFF  💡ON  💡ON   (7 = 0111)

Position 0, 2, 3 pe koi na koi ON tha! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔹 XOR (^) - DIFFERENT CHAHIYE!

Rule: Dono switches DIFFERENT hone chahiye!

Switch A: 💡ON  💡OFF  💡ON  💡OFF
Switch B: 💡OFF 💡OFF  ��ON  💡ON
         ─────────────────────────
Result:   💡ON  💡OFF  💡OFF 💡ON   (6 = 0110)

Position 0 aur 3 pe different the! ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT - HAR OPERATOR KI DETAIL
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 1. AND OPERATOR (&)

Truth Table:
0 & 0 = 0  ❌ Dono OFF
0 & 1 = 0  ❌ Ek OFF
1 & 0 = 0  ❌ Ek OFF
1 & 1 = 1  ✅ Dono ON

Example: 5 & 3
  0101  (5)
& 0011  (3)
──────
  0001  (1)

Use Cases:
- Check if bit is set
- Check even/odd: num & 1 (0=even, 1=odd)
- Clear specific bits

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 2. OR OPERATOR (|)

Truth Table:
0 | 0 = 0  ❌ Dono OFF
0 | 1 = 1  ✅ Ek ON
1 | 0 = 1  ✅ Ek ON
1 | 1 = 1  ✅ Dono ON

Example: 5 | 3
  0101  (5)
| 0011  (3)
──────
  0111  (7)

Use Cases:
- Set a specific bit
- Combine flags
- Merge bit patterns

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 3. XOR OPERATOR (^)

Truth Table:
0 ^ 0 = 0  ❌ Same
0 ^ 1 = 1  ✅ Different
1 ^ 0 = 1  ✅ Different
1 ^ 1 = 0  ❌ Same

Example: 5 ^ 3
  0101  (5)
^ 0011  (3)
──────
  0110  (6)

Magic Properties:
- a ^ a = 0  (Same numbers cancel out!)
- a ^ 0 = a  (XOR with 0 gives original!)
- a ^ b ^ b = a  (Reversible!)

Use Cases:
- Swap without temp variable
- Find unique element
- Toggle bits
- Simple encryption

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

�� 4. NOT OPERATOR (~)

Operation: Flip ALL bits (0→1, 1→0)

Example: ~5
  00000101  (5)
~ ────────
  11111010  (-6 in two's complement)

Formula: ~n = -(n+1)

Use Cases:
- Invert all bits
- Create bit masks
- Clear specific bits

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 5. LEFT SHIFT (<<)

Operation: Bits ko LEFT mein shift karo, RIGHT se 0 add karo

Example: 5 << 1
  0101  (5)
<<  1
──────
 01010  (10)

Formula: n << k = n × 2^k

Examples:
5 << 1 = 10  (5 × 2 = 10)
5 << 2 = 20  (5 × 4 = 20)
5 << 3 = 40  (5 × 8 = 40)

Use Cases:
- Fast multiplication by powers of 2
- Create bit masks
- Set specific bits

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 6. RIGHT SHIFT (>>)

Operation: Bits ko RIGHT mein shift karo, LEFT se 0 add karo

Example: 20 >> 1
 10100  (20)
>>   1
──────
  01010  (10)

Formula: n >> k = n ÷ 2^k

Examples:
20 >> 1 = 10  (20 ÷ 2 = 10)
20 >> 2 = 5   (20 ÷ 4 = 5)
20 >> 3 = 2   (20 ÷ 8 = 2)

Use Cases:
- Fast division by powers of 2
- Extract bits
- Optimize division operations

*/