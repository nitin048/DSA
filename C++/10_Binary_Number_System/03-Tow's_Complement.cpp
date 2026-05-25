
// Two's Complement - Negative Numbers in Binary

#include <iostream>
using namespace std;

// Function to find 1's complement
int onesComplement(int binary) {
    string binaryStr = "";
    int temp = binary;

    // Convert to string
    while (temp > 0) {
        binaryStr = char('0' + (temp % 10)) + binaryStr;
        temp /= 10;
    }

    // Flip all bits
    for (int i = 0; i < binaryStr.length(); i++) {
        if (binaryStr[i] == '0') {
            binaryStr[i] = '1';
        } else {
            binaryStr[i] = '0';
        }
    }

    // Convert back to integer
    int result = 0;
    for (char c : binaryStr) {
        result = result * 10 + (c - '0');
    }

    return result;
}

// Function to add 1 to binary number
int addOne(int binary) {
    int result = 0;
    int carry = 1;
    int place = 1;

    while (binary > 0 || carry > 0) {
        int bit = binary % 10;
        int sum = bit + carry;

        result = (sum % 2) * place + result;
        carry = sum / 2;

        binary /= 10;
        place *= 10;
    }

    return result;
}

// Function to find 2's complement
int twosComplement(int binary) {
    // Step 1: Find 1's complement
    int onesComp = onesComplement(binary);

    // Step 2: Add 1
    int twosComp = addOne(onesComp);

    return twosComp;
}

int main() {
    int binary = 101;  // Binary for 5

    cout << "Original Binary: " << binary << endl;
    cout << "1's Complement: " << onesComplement(binary) << endl;
    cout << "2's Complement: " << twosComplement(binary) << endl;

    cout << "\n--- More Examples ---\n";

    int examples[] = {1, 10, 11, 100, 101, 110, 111, 1000};

    for (int bin : examples) {
        cout << "Binary: " << bin << " | 1's Comp: " << onesComplement(bin)
             << " | 2's Comp: " << twosComplement(bin) << endl;
    }

    return 0;
}

/*
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE!
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE TWO'S COMPLEMENT? (What is Two's Complement?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Two's Complement ek method hai NEGATIVE NUMBERS ko binary mein represent karne ka!
Computer negative numbers ko isi tarike se store karta hai! 💻

📖 Kya hota hai?
- Positive numbers: Normal binary (e.g., 5 = 101)
- Negative numbers: Two's complement use karte hain (e.g., -5 = 1011 in 4-bit)
- Computer ke andar -5, -10, -100 sab two's complement mein store hote hain!

🎯 Purpose:
- Negative numbers ko represent karne ke liye
- Addition aur subtraction ko easy banane ke liye
- Computer hardware ko simple banane ke liye
- Ek hi circuit se addition aur subtraction dono kar sakte hain!

🔑 Two Important Concepts:

1️⃣ **1's Complement (One's Complement)**
   - Sabhi bits ko FLIP karo (0→1, 1→0)
   - Example: 101 ka 1's complement = 010

2️⃣ **2's Complement (Two's Complement)**
   - 1's complement nikalo
   - Usme 1 add karo
   - Example: 101 → 010 (1's comp) → 011 (2's comp)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - LIGHT SWITCH STORY! 💡
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine karo tumhare paas 4 light switches hain:

Original (Number 5):
💡ON  💡OFF  💡ON  💡OFF
  1     0     1     0

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 STEP 1: 1's Complement (Sabhi switches ko FLIP karo!)

💡OFF  💡ON  💡OFF  💡ON
  0     1     0     1

Sab switches jo ON the wo OFF, jo OFF the wo ON! ✨

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

➕ STEP 2: 2's Complement (Ab 1 add karo!)

  0 1 0 1  (1's complement)
+     0 1  (Add 1)
─────────
  0 1 1 0  (2's complement)

💡OFF  💡ON  💡ON  💡OFF
  0     1     1     0

✅ Ye hai -5 ka representation! (in 4-bit system)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT - TWO'S COMPLEMENT KAISE NIKALE?
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Formula:
2's Complement = 1's Complement + 1

📝 Steps:
1. Original binary number likho
2. Sabhi bits ko flip karo (0→1, 1→0) → 1's Complement
3. Result mein 1 add karo → 2's Complement

🧮 Example: Binary 1010 (Decimal 10)

Step 1: Original Binary
1 0 1 0

Step 2: 1's Complement (Flip all bits)
0 1 0 1

Step 3: Add 1
  0 1 0 1
+     0 1
─────────
  0 1 1 0

✅ 2's Complement = 0110

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 WHY TWO'S COMPLEMENT?

✅ Advantage 1: Addition aur Subtraction same circuit se!
   5 + (-5) = 0
   0101 + 1011 = 0000 (in 4-bit, carry ignored)

✅ Advantage 2: Sirf ek zero representation!
   1's complement mein: +0 aur -0 dono hote hain
   2's complement mein: Sirf ek 0 hai!

✅ Advantage 3: Range symmetric hai!
   4-bit mein: -8 to +7
   8-bit mein: -128 to +127

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 FUNCTION 1: onesComplement(int binary)

int onesComplement(int binary) {
    string binaryStr = "";
    int temp = binary;

    Binary number ko string mein convert karo
    while (temp > 0) {
        binaryStr = char('0' + (temp % 10)) + binaryStr;
        temp /= 10;
    }

     Sabhi bits ko flip karo (0→1, 1→0)
    for (int i = 0; i < binaryStr.length(); i++) {
        if (binaryStr[i] == '0') {
            binaryStr[i] = '1';  // 0 ko 1 banao
        } else {
            binaryStr[i] = '0';  // 1 ko 0 banao
        }
    }

     String ko wapas integer mein convert karo
    int result = 0;
    for (char c : binaryStr) {
        result = result * 10 + (c - '0');
    }

    return result;  // 1's complement return karo
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 FUNCTION 2: addOne(int binary)

int addOne(int binary) {
    int result = 0;
    int carry = 1;      // Pehle 1 add karna hai
    int place = 1;      // Place value track karne ke liye

    while (binary > 0 || carry > 0) {
        int bit = binary % 10;      // Last bit nikalo
        int sum = bit + carry;      // Bit + carry add karo

        result = (sum % 2) * place + result;  // Result bit
        carry = sum / 2;            // Carry for next position

        binary /= 10;
        place *= 10;
    }

    return result;  // Binary + 1 return karo
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 FUNCTION 3: twosComplement(int binary)

int twosComplement(int binary) {
    // Step 1: 1's complement nikalo
    int onesComp = onesComplement(binary);

    // Step 2: 1's complement mein 1 add karo
    int twosComp = addOne(onesComp);

    return twosComp;  // 2's complement return karo
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - BINARY 101 (DECIMAL 5)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Input: binary = 101 (Decimal 5)

┌─────────────────────────────────────────────────────────────────┐
│ STEP 1: Find 1's Complement                                     │
├─────────────────────────────────────────────────────────────────┤
│ Original:        1  0  1                                        │
│ Flip all bits:   0  1  0                                        │
│                                                                 │
│ 1's Complement = 010                                            │
└─────────────────────────────────────────────────────────────────┘

┌─────────────────────────────────────────────────────────────────┐
│ STEP 2: Add 1 to 1's Complement                                │
├─────────────────────────────────────────────────────────────────┤
│   0 1 0  (1's complement)                                       │
│ +   0 1  (Add 1)                                                │
│ ───────                                                         │
│   0 1 1  (2's complement)                                       │
│                                                                 │
│ Detailed Addition:                                              │
│ Position 0: 0 + 1 = 1, carry = 0                              │
│ Position 1: 1 + 0 = 1, carry = 0                              │
│ Position 2: 0 + 0 = 0, carry = 0                              │
│                                                                 │
│ 2's Complement = 011                                            │
└─────────────────────────────────────────────────────────────────┘

✅ FINAL ANSWER:
Original Binary: 101 (Decimal +5)
1's Complement: 010
2's Complement: 011 (Represents -5 in 3-bit system)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎬 COMPLETE EXECUTION - STEP BY STEP (Pura Program Kaise Chalta Hai)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Program Start 🚀
    ↓
main() function call
    ↓
binary = 101 initialize
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ Call: onesComplement(101)                                       │
├─────────────────────────────────────────────────────────────────┤
│ 1. Convert 101 to string: "101"                                │
│ 2. Flip each bit:                                              │
│    '1' → '0'                                                   │
│    '0' → '1'                                                   │
│    '1' → '0'                                                   │
│ 3. Result string: "010"                                        │
│ 4. Convert to int: 010                                         │
│ Return: 010 ✅                                                  │
└─────────────────────────────────────────────────────────────────┘
    ↓
Print: 1's Complement = 010
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ Call: twosComplement(101)                                       │
├─────────────────────────────────────────────────────────────────┤
│ Step 1: onesComp = onesComplement(101) = 010                  │
│ Step 2: twosComp = addOne(010)                                │
│         ↓                                                       │
│    ┌────────────────────────────────────────────────────────┐ │
│    │ addOne(010) Function                                   │ │
│    ├────────────────────────────────────────────────────────┤ │
│    │ binary = 010, carry = 1                                │ │
│    │                                                         │ │
│    │ Iteration 1: bit=0, sum=0+1=1, result=1, carry=0      │ │
│    │ Iteration 2: bit=1, sum=1+0=1, result=11, carry=0     │ │
│    │ Iteration 3: bit=0, sum=0+0=0, result=011, carry=0    │ │
│    │                                                         │ │
│    │ Return: 011                                            │ │
│    └────────────────────────────────────────────────────────┘ │
│                                                                 │
│ Return: 011 ✅                                                  │
└─────────────────────────────────────────────────────────────────┘
    ↓
Print: 2's Complement = 011
    ↓
Program End 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

CALL STACK VISUALIZATION:

┌────────────────────────────────────────────────────────────┐
│                        MAIN FUNCTION                        │
├────────────────────────────────────────────────────────────┤
│  binary = 101                                              │
│  Calls: twosComplement(101)                                │
│         ↓                                                  │
│  ┌──────────────────────────────────────────────────────┐ │
│  │         twosComplement(101) FUNCTION                 │ │
│  ├──────────────────────────────────────────────────────┤ │
│  │  Calls: onesComplement(101)                          │ │
│  │         ↓                                             │ │
│  │  ┌────────────────────────────────────────────────┐  │ │
│  │  │    onesComplement(101) FUNCTION                │  │ │
│  │  ├────────────────────────────────────────────────┤  │ │
│  │  │  binaryStr = "101"                             │  │ │
│  │  │  Flip: "101" → "010"                           │  │ │
│  │  │  Return: 010                                   │  │ │
│  │  └────────────────────────────────────────────────┘  │ │
│  │         ↓                                             │ │
│  │  onesComp = 010                                      │ │
│  │                                                       │ │
│  │  Calls: addOne(010)                                  │ │
│  │         ↓                                             │ │
│  │  ┌────────────────────────────────────────────────┐  │ │
│  │  │    addOne(010) FUNCTION                        │  │ │
│  │  ├────────────────────────────────────────────────┤  │ │
│  │  │  010 + 1 = 011                                 │  │ │
│  │  │  Return: 011                                   │  │ │
│  │  └────────────────────────────────────────────────┘  │ │
│  │         ↓                                             │ │
│  │  twosComp = 011                                      │ │
│  │  Return: 011                                         │ │
│  └──────────────────────────────────────────────────────┘ │
│         ↓                                                  │
│  Result: 011                                               │
└────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🧮 MORE EXAMPLES - AUR EXAMPLES DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 1: Binary 1 (Decimal 1)

Original:        1
1's Complement:  0
Add 1:          0 + 1 = 1
2's Complement:  1

✅ Answer: 1 → 1's Comp: 0 → 2's Comp: 1

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 2: Binary 110 (Decimal 6)

Original:        1  1  0
1's Complement:  0  0  1
Add 1:          001 + 1 = 010
2's Complement:  0  1  0

✅ Answer: 110 → 1's Comp: 001 → 2's Comp: 010

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 3: Binary 1111 (Decimal 15)

Original:        1  1  1  1
1's Complement:  0  0  0  0
Add 1:          0000 + 1 = 0001
2's Complement:  0  0  0  1

✅ Answer: 1111 → 1's Comp: 0000 → 2's Comp: 0001

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📌 EXAMPLE 4: Binary 1000 (Decimal 8)

Original:        1  0  0  0
1's Complement:  0  1  1  1
Add 1:          0111 + 1 = 1000
2's Complement:  1  0  0  0

✅ Answer: 1000 → 1's Comp: 0111 → 2's Comp: 1000

Special case: 2's complement same as original! 🎯

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ 1. TWO'S COMPLEMENT FORMULA:
   2's Complement = 1's Complement + 1
   - Pehle sabhi bits flip karo (1's complement)
   - Phir 1 add karo (2's complement)

✅ 2. 1'S COMPLEMENT:
   - Sabhi 0 ko 1 banao
   - Sabhi 1 ko 0 banao
   - Example: 101 → 010

✅ 3. NEGATIVE NUMBERS:
   - Computer negative numbers ko 2's complement mein store karta hai
   - MSB (leftmost bit) = sign bit
   - 0 = positive, 1 = negative

✅ 4. RANGE IN N-BIT SYSTEM:
   - 4-bit: -8 to +7
   - 8-bit: -128 to +127
   - 16-bit: -32768 to +32767
   - Formula: -2^(n-1) to 2^(n-1) - 1

✅ 5. SPECIAL PROPERTY:
   - Agar number ka 2's complement nikalo
   - Phir us result ka 2's complement nikalo
   - Original number wapas aa jayega!
   - Example: 5 → -5 → 5

✅ 6. ADDITION WITH 2'S COMPLEMENT:
   - 5 + (-5) = 0
   - Binary mein: 0101 + 1011 = 0000 (carry ignore)
   - Subtraction ko addition mein convert kar sakte hain!

✅ 7. WHY NOT 1'S COMPLEMENT?
   - 1's complement mein +0 aur -0 dono hote hain
   - 2's complement mein sirf ek 0 hai
   - Hardware simple ho jata hai!

✅ 8. COMMON MISTAKES:
   - ❌ 1's complement ko hi 2's complement samajh lena
   - ✅ 1's complement + 1 = 2's complement
   - ❌ Carry ko ignore karna bhool jana
   - ✅ Final carry ko hamesha ignore karo

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
*/