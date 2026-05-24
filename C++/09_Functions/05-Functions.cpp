// Write a fucntion to check of a number is prime or not.

#include <iostream>
using namespace std;

bool primeChk(int n) {
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << "-----------------" << endl;
    if (primeChk(n) == true) {
        cout << " Number is Prime" << endl;
    } else {
        cout << " Number is Non-Prime" << endl;
    }

    return 0;
}

/*

# 🎯 Prime Number Checker - Complete Explanation

Write a function to check if a number is prime or not.
##Your Code :

#include <iostream>
    using namespace std;

bool primeChk(int n) {
    bool isPrime = true;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            isPrime = false;
            break;
        }
    }
    return isPrime;
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << "-----------------" << endl;
    if (primeChk(n) == true) {
        cout << " Number is Prime" << endl;
    } else {
        cout << " Number is Non-Prime" << endl;
    }
    return 0;
}
```

    -- -
# ═══════════════════════════════════════════════════════════════════════════════════════════════
# 🎯 DETAILED EXPLANATION - SO SIMPLE THAT A 5 - YEAR - OLD CAN UNDERSTAND ! 🎯
# ═══════════════════════════════════════════════════════════════════════════════════════════════

    ## 📚 KYA HAI YE PRIME NUMBER
    ? (What is a Prime Number ?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

           ** Definition : **Prime number ek aisa number hai jo** sirf 2 numbers se divide
               hota hai** : 1. Khud se(itself) 2. Aur 1 se

                   ** Simple Rule : **Agar kisi number ko 1 aur khud ke alawa kisi aur number se
                       divide kar sakte ho,
       toh woh prime NAHI hai !

               **Examples : **-**7 is Prime *
               * ✅ → Sirf 1 aur 7 se divide hota hai -
           **8 is NOT Prime * * ❌ → 1,
       2, 4,
       8 se divide hota hai(2 aur 4 extra hain !)

               -- -

           ## 🍎 REAL LIFE EXAMPLE -
           CHOCOLATE SHARING :
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

               Imagine : Tumhare paas chocolates hain aur tum equally share karna chahte ho.

               ## # *
               *Example 1 : 7 Chocolates 🍫🍫🍫🍫🍫🍫🍫* *
``` Can you divide equally among friends
       ? -2 friends
       ? NO(7÷2 = 3.5) ❌ - 3 friends
       ? NO(7÷3 = 2.33) ❌ - 4 friends
       ? NO(7÷4 = 1.75) ❌ - 5 friends
             ? NO(7÷5 = 1.4) ❌ - 6 friends
                   ? NO(7÷6 = 1.16) ❌

                   Result
                   : 7 chocolates ko equally divide nahi kar sakte !7 is PRIME ! ✅
```

                         ## # *
                         *Example 2
         : 8 Chocolates 🍫🍫🍫🍫🍫🍫🍫🍫* *
``` Can you divide equally among friends
             ? -2 friends ? YES(8÷2 = 4) ✅ - 4 friends
                                ? YES(8÷4 = 2) ✅

                                Result
                                : 8 chocolates ko easily divide kar sakte ho !8 is NOT PRIME ! ❌
```

                                -- -

                                ## 📖 PRIME NUMBERS KI LIST(1 - 20)
                          :
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

``` Prime Numbers
             : 2,
       3, 5, 7, 11, 13, 17,
       19

           Non -
           Prime Numbers
       : 1,
       4, 6, 8, 9, 10, 12, 14, 15, 16, 18,
       20
```

           ** Special Cases
       : **-**1 is NOT Prime**(special rule - needs at least 2 divisors) -
             **2 is Prime**(only even prime number !)

                  -- -

             ## 🔍 CODE KO LINE BY LINE SAMAJHTE HAIN(Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

             ## # 📌 FUNCTION
       : primeChk(int n)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

```cpp bool primeChk(int n) {
    bool isPrime = true;              // Step 1: Assume number is prime
    for (int i = 2; i * i <= n; i++)  // Step 2: Check divisors from 2 to √n
    {
        if (n % i == 0)  // Step 3: If divisible, not prime!
        {
            isPrime = false;  // Step 4: Mark as not prime
            break;            // Step 5: Stop checking (optimization)
        }
    }
    return isPrime;  // Step 6: Return result
}
```

    ** Line by Line Explanation : **

                                      ** Line 1 : ** `bool isPrime = true;
` - Pehle assume karte hain ki number PRIME hai - Agar koi divisor mil gaya,
    toh false kar denge

            **Line 2 : ** `for (int i = 2; i * i <= n; i++)` -
                       2 se start karte hain(1 toh sabko divide karta hai) - **Smart trick : *
        *Sirf √n tak check karte hain !-Why
    ? Kyunki agar n = a × b,
                  toh a ya b mein se ek √n se chhota hoga

                      **Example
    : **n = 36 - √36 = 6 - Divisors : 2,
                  3, 4, 6, 9, 12, 18 - But we only check till 6 : 2, 3, 4,
                  6 ✅ - Agar 2 se divide hota hai,
                  toh 18 bhi divisor hai(36÷2 = 18)

                      **Line 3 : ** `if (n % i == 0)` - Check karte hain : kya n,
                  i se completely divide hota hai
    ? - `%` (modulo)gives remainder - Agar remainder = 0,
                  matlab perfectly divide hua !

                      **Line 4
    : ** `isPrime = false;
` - Agar koi divisor mil gaya, toh NOT PRIME !

    **Line 5 : ** `break;
` - Loop ko turant stop kar do - Kyunki ek divisor mil gaya, ab aur check karne ki zarurat nahi

                                                                 **Line 6 : ** `return isPrime;
` -
    Final answer return karo(true ya false)

        -- -

    ## # 📌 FUNCTION : main()
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

```cpp int main() {
    int n;
    cout << "Enter a number : " << endl;  // User se input lo
    cin >> n;
    cout << "-----------------" << endl;

    if (primeChk(n) == true)  // Function call karke check karo
    {
        cout << " Number is Prime" << endl;
    } else {
        cout << " Number is Non-Prime" << endl;
    }

    return 0;
}
```

---

## 🎬 COMPLETE EXECUTION - STEP BY STEP (Pura Program Kaise Chalta Hai)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### **Example 1: Check if 7 is Prime**

```
📍 STEP 1: User enters n = 7
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    n = 7

📍 STEP 2: primeChk(7) function call
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    isPrime = true (initially)

    Loop condition: i*i <= 7
    √7 ≈ 2.64, so check i = 2 only

    Iteration 1: i = 2
    ┌─────────────────────────────────┐
    │ Check: 7 % 2 = 1 (remainder)   │
    │ 1 ≠ 0, so NOT divisible        │
    │ isPrime remains true            │
    └─────────────────────────────────┘

    Next: i = 3
    But 3*3 = 9 > 7, so loop stops!

    Return: true ✅

📍 STEP 3: Print result
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    Output: "Number is Prime" ✅
```

---

### **Example 2: Check if 12 is Prime**

```
📍 STEP 1: User enters n = 12
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    n = 12

📍 STEP 2: primeChk(12) function call
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    isPrime = true (initially)

    Loop condition: i*i <= 12
    √12 ≈ 3.46, so check i = 2, 3

    Iteration 1: i = 2
    ┌─────────────────────────────────┐
    │ Check: 12 % 2 = 0 (no remainder)│
    │ 0 == 0, DIVISIBLE! ❌          │
    │ isPrime = false                 │
    │ break (stop loop)               │
    └─────────────────────────────────┘

    Return: false ❌

📍 STEP 3: Print result
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    Output: "Number is Non-Prime" ❌
```

---

## 🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### **Call Stack for n = 7:**

```
    ┌──────────────────────────────┐
    │   primeChk(7)                │
    │   - isPrime = true           │
    │   - Loop: i=2                │
    │   - 7%2=1 (not divisible)    │
    │   - Returns: true ✅         │
    └──────────────────────────────┘
              ↓
    ┌──────────────────────────────┐
    │   main()                     │
    │   - Receives: true           │
    │   - Prints: "Prime"          │
    └──────────────────────────────┘
```

### **Call Stack for n = 12:**

```
    ┌──────────────────────────────┐
    │   primeChk(12)               │
    │   - isPrime = true           │
    │   - Loop: i=2                │
    │   - 12%2=0 (divisible!) ❌   │
    │   - isPrime = false          │
    │   - break                    │
    │   - Returns: false ❌        │
    └──────────────────────────────┘
              ↓
    ┌──────────────────────────────┐
    │   main()                     │
    │   - Receives: false          │
    │   - Prints: "Non-Prime"      │
    └──────────────────────────────┘
```

---

## 🧮 MORE EXAMPLES - AUR EXAMPLES DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### **Example 1: n = 2 (Smallest Prime)**
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
```
isPrime = true
Loop: i*i <= 2
      2*2 = 4 > 2, so loop doesn't run!

Return: true ✅

Real life: 2 chocolates ko sirf 1 ya 2 friends mein divide kar sakte ho
```

### **Example 2: n = 9 (Perfect Square)**
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
```
isPrime = true
Loop: i*i <= 9 (check till i=3)

i = 2: 9 % 2 = 1 (not divisible)
i = 3: 9 % 3 = 0 (DIVISIBLE!) ❌
       isPrime = false
       break

Return: false ❌

Real life: 9 chocolates ko 3 friends mein equally divide kar sakte ho (3 each)
```

### **Example 3: n = 17 (Larger Prime)**
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
```
isPrime = true
Loop: i*i <= 17 (check till i=4, because 5*5=25>17)

i = 2: 17 % 2 = 1 (not divisible)
i = 3: 17 % 3 = 2 (not divisible)
i = 4: 17 % 4 = 1 (not divisible)

Loop ends, isPrime still true

Return: true ✅

Real life: 17 chocolates ko equally divide karna mushkil hai!
```

### **Example 4: n = 100 (Large Non-Prime)**
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
```
isPrime = true
Loop: i*i <= 100 (check till i=10)

i = 2: 100 % 2 = 0 (DIVISIBLE!) ❌
       isPrime = false
       break (immediately stop!)

Return: false ❌

Real life: 100 chocolates ko 2, 4, 5, 10, 20, 25, 50 friends mein divide kar sakte ho
```

---

## 🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

1. ✅ **Prime Number:** Sirf 1 aur khud se divide hota hai
   - Example: 2, 3, 5, 7, 11, 13...

2. ✅ **Optimization:** Sirf √n tak check karo, pura n tak nahi!
   - Why? Agar a × b = n, toh a ya b definitely √n se chhota hoga
   - Example: 36 = 6 × 6, so check till 6 only

3. ✅ **Loop condition:** `i*i <= n` is better than `i <= sqrt(n)`
   - Kyunki sqrt() function slow hai
   - i*i calculate karna fast hai

4. ✅ **Break statement:** Jaise hi ek divisor mile, turant stop karo
   - Time bachta hai
   - Unnecessary checking nahi hoti

5. ✅ **Special cases:**
   - 1 is NOT prime (special rule)
   - 2 is the ONLY even prime number
   - All other even numbers are NOT prime

6. ✅ **Modulo operator (%):** Remainder deta hai
   - 7 % 2 = 1 (7 ÷ 2 = 3 remainder 1)
   - 8 % 2 = 0 (8 ÷ 2 = 4 remainder 0)

7. ✅ **Boolean return:** Function true/false return karta hai
   - true = Prime
   - false = Not Prime

---

## 🎪 FUN ANALOGY - BACHON KI BHASHA MEIN (In Kid's Language)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### 🎮 VIDEO GAME ANALOGY:

Imagine you're playing a game where you have to find "Special Numbers" (Prime Numbers).

**Rules of the Game:**
1. A number is "Special" if you can't break it into equal groups
2. You have to check if anyone can steal parts of your number

**Level 1: Number 7**
```
You have 7 gems 💎💎💎💎💎💎💎

Can thieves steal in groups?
- 2 thieves? NO (7÷2 = 3.5, can't split!) ❌
- 3 thieves? NO (7÷3 = 2.33, can't split!) ❌
- 4 thieves? NO (7÷4 = 1.75, can't split!) ❌

Result: Your 7 gems are SAFE! 7 is SPECIAL (Prime)! ✅
```

**Level 2: Number 12**
```
You have 12 gems 💎💎💎💎💎💎💎💎💎💎💎💎

Can thieves steal in groups?
- 2 thieves? YES (12÷2 = 6 each) ❌
  Oh no! They can steal!

Result: Your 12 gems are NOT SAFE! 12 is NOT SPECIAL (Not Prime)! ❌
```

**Game Strategy (Our Code Logic):**
- Start checking from 2 thieves
- Only check up to √n thieves (smart trick!)
- If anyone can steal equally, number is NOT special
- If no one can steal, number IS special!

---

## 💡 PRACTICE CHALLENGES - KHUD SE TRY KARO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

### **Challenge 1:** Is 13 prime?
**Hint:** Check divisors from 2 to √13 (≈3.6)

### **Challenge 2:** Is 15 prime?
**Hint:** Try dividing by 2, 3...

### **Challenge 3:** Is 29 prime?
**Hint:** Check till √29 (≈5.4)

### **Challenge 4:** Is 49 prime?
**Hint:** 49 = 7 × 7

### **Challenge 5:** What's the largest prime less than 20?
**Hint:** Check 19, 18, 17...

---

### **ANSWERS:**

1. **13 is PRIME** ✅
   - Check: 2, 3 (13%2=1, 13%3=1)
   - No divisors found!

2. **15 is NOT PRIME** ❌
   - 15 % 3 = 0 (divisible by 3!)
   - 15 = 3 × 5

3. **29 is PRIME** ✅
   - Check: 2, 3, 4, 5 (none divide 29)
   - No divisors found!

4. **49 is NOT PRIME** ❌
   - 49 % 7 = 0 (divisible by 7!)
   - 49 = 7 × 7

5. **19 is the largest prime < 20** ✅
   - 20 = 2×10 (not prime)
   - 19 has no divisors (prime!)

---

## 🎓 SUMMARY - EK LINE MEIN SAMJHO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

**Prime Number Check:**
"Agar koi number sirf 1 aur khud se divide hota hai, toh woh PRIME hai!"

**Algorithm:**
1. Assume number is prime
2. Check divisors from 2 to √n
3. Agar koi divisor mile, NOT prime!
4. Agar koi divisor na mile, PRIME hai!

**Optimization Trick:**
Sirf √n tak check karo, time bachao! ⚡

**Example:** 7 is prime (no divisors), 12 is not prime (divisible by 2, 3, 4, 6)

**Bahut easy hai! Ab tum bhi prime numbers check kar sakte ho!** 🎉✨

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
*/