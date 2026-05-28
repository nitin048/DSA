// Loops on array
// find smallest /largest in array

#include <algorithm>
#include <climits>
#include <iostream>
using namespace std;

int main() {
    int arr[5] = {444, 22, 3, 4, 555};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_idx = 0;
    int largest_idx = 0;
    for (int i = 0; i < 5; i++) {
        smallest = min(arr[i], smallest);
        largest = max(arr[i], largest);
        if (arr[i] < arr[smallest_idx]) {
            smallest_idx = i;
        }
        if (arr[i] > arr[largest_idx]) {
            largest_idx = i;
        }
    }
    cout << "smallest value : " << smallest << endl;
    cout << "largest value : " << largest << endl;
    cout << "----------------------------" << endl;
    cout << "idx of smallest value is : " << smallest_idx << endl;
    cout << "idx of largest value is : " << largest_idx << endl;
    return 0;
}

/*
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE!
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE PROGRAM? (What is this Program?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Ye program array mein se SMALLEST aur LARGEST value dhoondhta hai!
Aur saath mein unki INDEX (position) bhi batata hai! 🔍

📖 Kya karta hai ye program?
- Array mein loop chalata hai
- Sabse CHHOTA number dhoondhta hai (smallest)
- Sabse BADA number dhoondhta hai (largest)
- Dono ki VALUES print karta hai
- Dono ki INDEX (position) bhi print karta hai

🎯 Purpose:
- Array mein minimum aur maximum value nikalna
- Unki position (index) track karna
- Real life mein: Highest score, lowest price, etc. dhoondhne ke liye

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - EXAM MARKS KI KAHANI! 📝
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine karo tumhare class mein 5 students hain aur unke marks hain:

Student 0: 444 marks 📚
Student 1: 22 marks  📚
Student 2: 3 marks   📚
Student 3: 4 marks   📚
Student 4: 555 marks 📚

Teacher ko chahiye:
1. Sabse ZYADA marks (Highest) = 555 ✅
2. Sabse KAM marks (Lowest) = 3 ✅
3. Highest marks kis student ke hain? = Student 4 ✅
4. Lowest marks kis student ke hain? = Student 2 ✅

Yahi kaam ye program karta hai! 🎯

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT - MIN/MAX FINDING ALGORITHM
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Algorithm Steps:

Step 1: Initialize smallest = INT_MAX (sabse bada possible value)
Step 2: Initialize largest = INT_MIN (sabse chhota possible value)
Step 3: Initialize smallest_idx = 0, largest_idx = 0
Step 4: Array ke har element pe loop chalao
Step 5: Har element ko smallest aur largest se compare karo
Step 6: Agar chhota mila to smallest update karo aur index save karo
Step 7: Agar bada mila to largest update karo aur index save karo
Step 8: Print results


🔑 Key Concepts:

INT_MAX: C++ mein sabse BADA integer value (2147483647)
INT_MIN: C++ mein sabse CHHOTA integer value (-2147483648)

Kyun use karte hain?
- smallest ko INT_MAX se start karte hain taaki koi bhi array element usse chhota ho
- largest ko INT_MIN se start karte hain taaki koi bhi array element usse bada ho

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

int arr[5] = {444, 22, 3, 4, 555};
// Array banaya 5 elements ke saath
// Index:  0    1   2  3   4
// Value: 444  22   3  4  555

int smallest = INT_MAX;
// smallest ko sabse BADE value se start karo
// INT_MAX = 2147483647 (bahut bada number!)
// Kyun? Taaki array ka koi bhi element isse chhota ho

int largest = INT_MIN;
// largest ko sabse CHHOTE value se start karo
// INT_MIN = -2147483648 (bahut chhota number!)
// Kyun? Taaki array ka koi bhi element isse bada ho

int smallest_idx = 0;
// Smallest value ki position store karenge yahan
// Initially 0 se start karte hain

int largest_idx = 0;
// Largest value ki position store karenge yahan
// Initially 0 se start karte hain

for (int i = 0; i < 5; i++) {
    // Loop chalao 0 se 4 tak (5 elements ke liye)
    // i = 0, 1, 2, 3, 4

    smallest = min(arr[i], smallest);
    // Current element aur smallest mein se jo chhota hai wo smallest ban jaye
    // min() function C++ ka built-in function hai

    largest = max(arr[i], largest);
    // Current element aur largest mein se jo bada hai wo largest ban jaye
    // max() function C++ ka built-in function hai

    if(arr[i] < arr[smallest_idx]) {
        // Agar current element, smallest_idx wale element se chhota hai
        smallest_idx = i;
        // To current index ko smallest_idx bana do
    }

    if(arr[i] > arr[largest_idx]) {
        // Agar current element, largest_idx wale element se bada hai
        largest_idx = i;
        // To current index ko largest_idx bana do
    }
}

cout << "smallest value : " << smallest << endl;
// Sabse chhoti value print karo

cout << "largest value : " << largest << endl;
// Sabse badi value print karo

cout << "idx of smallest value is : " << smallest_idx << endl;
// Smallest value ki position print karo

cout << "idx of largest value is : " << largest_idx << endl;
// Largest value ki position print karo


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - STEP BY STEP EXECUTION
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Array: {444, 22, 3, 4, 555}
Index:   0    1   2  3   4

Initial Values:
smallest = INT_MAX (2147483647)
largest = INT_MIN (-2147483648)
smallest_idx = 0
largest_idx = 0

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 1: i = 0, arr[0] = 444

┌─────────────────────────────────────────────────────────────────┐
│ smallest = min(444, 2147483647) = 444 ✅                        │
│ largest = max(444, -2147483648) = 444 ✅                        │
│                                                                 │
│ arr[0] < arr[0]? → 444 < 444? NO ❌                            │
│ arr[0] > arr[0]? → 444 > 444? NO ❌                            │
│                                                                 │
│ After: smallest=444, largest=444                                │
│        smallest_idx=0, largest_idx=0                            │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 2: i = 1, arr[1] = 22

┌─────────────────────────────────────────────────────────────────┐
│ smallest = min(22, 444) = 22 ✅ (22 chhota hai!)                │
│ largest = max(22, 444) = 444 ✅ (444 bada hai!)                 │
│                                                                 │
│ arr[1] < arr[0]? → 22 < 444? YES ✅                            │
│ smallest_idx = 1 ✅                                             │
│                                                                 │
│ arr[1] > arr[0]? → 22 > 444? NO ❌                             │
│                                                                 │
│ After: smallest=22, largest=444                                 │
│        smallest_idx=1, largest_idx=0                            │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 3: i = 2, arr[2] = 3

┌─────────────────────────────────────────────────────────────────┐
│ smallest = min(3, 22) = 3 ✅ (3 sabse chhota!)                  │
│ largest = max(3, 444) = 444 ✅                                  │
│                                                                 │
│ arr[2] < arr[1]? → 3 < 22? YES ✅                              │
│ smallest_idx = 2 ✅                                             │
│                                                                 │
│ arr[2] > arr[0]? → 3 > 444? NO ❌                              │
│                                                                 │
│ After: smallest=3, largest=444                                  │
│        smallest_idx=2, largest_idx=0                            │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 4: i = 3, arr[3] = 4

┌─────────────────────────────────────────────────────────────────┐
│ smallest = min(4, 3) = 3 ✅ (3 abhi bhi chhota!)                │
│ largest = max(4, 444) = 444 ✅                                  │
│                                                                 │
│ arr[3] < arr[2]? → 4 < 3? NO ❌                                │
│                                                                 │
│ arr[3] > arr[0]? → 4 > 444? NO ❌                              │
│                                                                 │
│ After: smallest=3, largest=444                                  │
│        smallest_idx=2, largest_idx=0                            │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 5: i = 4, arr[4] = 555

┌─────────────────────────────────────────────────────────────────┐
│ smallest = min(555, 3) = 3 ✅                                   │
│ largest = max(555, 444) = 555 ✅ (555 sabse bada!)              │
│                                                                 │
│ arr[4] < arr[2]? → 555 < 3? NO ❌                              │
│                                                                 │
│ arr[4] > arr[0]? → 555 > 444? YES ✅                           │
│ largest_idx = 4 ✅                                              │
│                                                                 │
│ After: smallest=3, largest=555                                  │
│        smallest_idx=2, largest_idx=4                            │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ FINAL RESULT:
smallest value : 3
largest value : 555
idx of smallest value is : 2
idx of largest value is : 4


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎬 COMPLETE EXECUTION - PURA PROGRAM KAISE CHALTA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Program Start 🚀
    ↓
main() function call
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 1: Array Declaration                                       │
├─────────────────────────────────────────────────────────────────┤
│ arr[5] = {444, 22, 3, 4, 555}                                   │
│ Index:     0    1   2  3   4                                    │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 2: Initialize Variables                                    │
├─────────────────────────────────────────────────────────────────┤
│ smallest = INT_MAX (2147483647)                                 │
│ largest = INT_MIN (-2147483648)                                 │
│ smallest_idx = 0                                                │
│ largest_idx = 0                                                 │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 3: Loop Through Array (i = 0 to 4)                        │
├─────────────────────────────────────────────────────────────────┤
│ i=0: Check 444 → smallest=444, largest=444                     │
│ i=1: Check 22  → smallest=22, largest=444, smallest_idx=1      │
│ i=2: Check 3   → smallest=3, largest=444, smallest_idx=2       │
│ i=3: Check 4   → smallest=3, largest=444 (no change)           │
│ i=4: Check 555 → smallest=3, largest=555, largest_idx=4        │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 4: Print Results                                           │
├─────────────────────────────────────────────────────────────────┤
│ smallest value : 3                                              │
│ largest value : 555                                             │
│ ----------------------------                                    │
│ idx of smallest value is : 2                                    │
│ idx of largest value is : 4                                     │
└─────────────────────────────────────────────────────────────────┘
    ↓
Program End 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

ARRAY IN MEMORY:

┌─────┬─────┬─────┬─────┬─────┐
│ 444 │ 22  │  3  │  4  │ 555 │  ← Values
├─────┼─────┼─────┼─────┼─────┤
│  0  │  1  │  2  │  3  │  4  │  ← Indices
└─────┴─────┴─────┴─────┴─────┘
   ↑           ↑               ↑
   │           │               │
   │           │               └─ Largest (555) at index 4
   │           └─ Smallest (3) at index 2
   └─ First element

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

TRACKING VARIABLES:

┌──────────────┬─────────┬─────────┬──────────────┬──────────────┐
│ Iteration    │ smallest│ largest │ smallest_idx │ largest_idx  │
├──────────────┼─────────┼─────────┼──────────────┼──────────────┤
│ Initial      │ INT_MAX │ INT_MIN │      0       │      0       │
│ i=0 (444)    │   444   │   444   │      0       │      0       │
│ i=1 (22)     │    22   │   444   │      1       │      0       │
│ i=2 (3)      │     3   │   444   │      2       │      0       │
│ i=3 (4)      │     3   │   444   │      2       │      0       │
│ i=4 (555)    │     3   │   555   │      2       │      4       │
└──────────────┴─────────┴─────────┴──────────────┴──────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

COMPARISON VISUALIZATION:

Finding Smallest:
444 → 22 → 3 → 4 → 555
 ↓     ↓    ↓   ↑    ↑
444   22    3   3    3  (smallest keeps getting smaller!)
                ✅ Final: 3 at index 2

Finding Largest:
444 → 22 → 3 → 4 → 555
 ↓     ↑    ↑   ↑    ↓
444  444  444 444  555  (largest keeps getting bigger!)
                      ✅ Final: 555 at index 4

*/