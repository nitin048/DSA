// Linear Search

#include <iostream>
using namespace std;

int linearsearch(int arr[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int target = 5;
    int arr11[] = {45, 23, 78, 12, 90, 34, 67, 5,  89, 56, 71, 38, 92,
                   14, 61, 27, 83, 49, 6,  95, 31, 74, 18, 52, 86};
    int n = 25;
    int index = linearsearch(arr11, n, target);
    cout << "target index value : " << index << endl;
    return 0;
}

/*
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE!
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE LINEAR SEARCH? (What is Linear Search?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Linear Search ek sabse SIMPLE searching algorithm hai!
Ye array mein ek-ek karke har element ko check karta hai jab tak target element nahi mil jata! 🔍

📖 Kya hota hai?
- Array ke FIRST element se start karo
- Har element ko target se compare karo
- Agar match mil gaya → Index return karo ✅
- Agar nahi mila → Aage badho
- Agar poora array check ho gaya aur nahi mila → -1 return karo ❌

🎯 Purpose:
- Array mein koi specific element dhoondhna
- Unsorted array mein bhi kaam karta hai
- Sabse simple aur straightforward method
- Small arrays ke liye perfect!

🔑 Key Characteristics:
✅ Works on unsorted arrays
✅ Simple to implement
✅ No preprocessing needed
✅ Sequential checking (one by one)
❌ Slow for large arrays

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - LIBRARY MEIN BOOK DHOONDHNA! 📚
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine karo tumhe library mein ek specific book dhoondhni hai:

📚 Shelf pe books hain (random order mein):
   [Harry Potter] [Ramayan] [Physics] [Math] [Chemistry] [History] [Biology]

🎯 Tum "Math" book dhoondhna chahte ho!

Linear Search kaise kaam karega:

Step 1: 📖 First book check karo → "Harry Potter"
        Math hai? NO ❌ → Aage badho

Step 2: 📖 Second book check karo → "Ramayan"
        Math hai? NO ❌ → Aage badho

Step 3: 📖 Third book check karo → "Physics"
        Math hai? NO ❌ → Aage badho

Step 4: 📖 Fourth book check karo → "Math"
        Math hai? YES ✅ → MIL GAYA! Position 4!

Yahi Linear Search hai! Ek-ek karke sab check karo! 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT - LINEAR SEARCH ALGORITHM
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Algorithm Steps:

Step 1: Start from index 0 (first element)
Step 2: Compare current element with target
Step 3: If match found → Return current index ✅
Step 4: If not match → Move to next element
Step 5: Repeat steps 2-4 until:
        • Element found (return index) ✅
        • Array ends (return -1) ❌

🔄 Pseudocode:

function linearSearch(array, target):
    for i = 0 to array.length - 1:
        if array[i] == target:
            return i          // Found! Return index
    return -1                 // Not found

📊 Visual Representation:

Array: [45, 23, 78, 12, 90, 34, 67, 5, 89]
Target: 5

Check 0: 45 == 5? NO ❌
Check 1: 23 == 5? NO ❌
Check 2: 78 == 5? NO ❌
Check 3: 12 == 5? NO ❌
Check 4: 90 == 5? NO ❌
Check 5: 34 == 5? NO ❌
Check 6: 67 == 5? NO ❌
Check 7:  5 == 5? YES ✅ → Return 7!

⏱️ Time Complexity:
• Best Case: O(1) - Element is at first position
• Average Case: O(n) - Element is somewhere in middle
• Worst Case: O(n) - Element is at last position or not present

💾 Space Complexity: O(1) - No extra space needed

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 FUNCTION: linearsearch(int arr[], int n, int target)

int linearsearch(int arr[], int n, int target) {
    // Function jo array mein target element dhoondhta hai
    // Parameters:
    //   arr[] = Array jisme search karna hai
    //   n = Array ka size (kitne elements hain)
    //   target = Jo element dhoondhna hai

    for (int i = 0; i < n; i++) {
        // Loop chalao 0 se n-1 tak
        // i = current index jisko check kar rahe hain
        // i < n ensures we don't go out of bounds

        if (arr[i] == target) {
            // Current element ko target se compare karo
            // arr[i] = current element
            // target = jo dhoondhna hai

            return i;
            // Agar match mil gaya, index return kar do! ✅
            // Function yahi khatam ho jayega
        }
    }

    return -1;
    // Agar loop khatam ho gaya aur element nahi mila
    // -1 return karo (matlab NOT FOUND) ❌
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 MAIN FUNCTION:

int main() {
    int target = 5;
    // Jo element dhoondhna hai = 5

    int arr11[] = {45, 23, 78, 12, 90, 34, 67, 5, 89, 56, 71, 38, 92,
                   14, 61, 27, 83, 49, 6, 95, 31, 74, 18, 52, 86};
    // Array banaya 25 elements ke saath
    // Index:  0   1   2   3   4   5   6  7  8   9  10  11  12 ...
    // Value: 45  23  78  12  90  34  67  5 89  56  71  38  92 ...

    int n = 25;
    // Array ka size = 25 elements

    int index = linearsearch(arr11, n, target);
    // Function call karo:
    //   arr11 = array pass karo
    //   n = size pass karo (25)
    //   target = jo dhoondhna hai (5)
    // Result ko 'index' variable mein store karo

    cout << "target index value : " << index << endl;
    // Result print karo
    // Agar element mila: index number print hoga (7)
    // Agar nahi mila: -1 print hoga

    return 0;
    // Program successfully khatam hua ✅
}


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - STEP BY STEP EXECUTION
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Array: {45, 23, 78, 12, 90, 34, 67, 5, 89, 56, 71, 38, 92, 14, 61, 27, 83, 49, 6, 95, 31, 74, 18,
52, 86} Target: 5 Size: 25

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 1: i = 0

┌─────────────────────────────────────────────────────────────────┐
│ Current Index: 0                                                │
│ Current Element: arr[0] = 45                                    │
│ Target: 5                                                       │
│                                                                 │
│ Comparison: 45 == 5?                                            │
│ Result: NO ❌                                                   │
│ Action: Continue to next element                                │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 2: i = 1

┌─────────────────────────────────────────────────────────────────┐
│ Current Index: 1                                                │
│ Current Element: arr[1] = 23                                    │
│ Target: 5                                                       │
│                                                                 │
│ Comparison: 23 == 5?                                            │
│ Result: NO ❌                                                   │
│ Action: Continue to next element                                │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 3: i = 2

┌─────────────────────────────────────────────────────────────────┐
│ Current Index: 2                                                │
│ Current Element: arr[2] = 78                                    │
│ Target: 5                                                       │
│                                                                 │
│ Comparison: 78 == 5?                                            │
│ Result: NO ❌                                                   │
│ Action: Continue to next element                                │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 4: i = 3

┌─────────────────────────────────────────────────────────────────┐
│ Current Index: 3                                                │
│ Current Element: arr[3] = 12                                    │
│ Target: 5                                                       │
│                                                                 │
│ Comparison: 12 == 5?                                            │
│ Result: NO ❌                                                   │
│ Action: Continue to next element                                │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 5: i = 4

┌─────────────────────────────────────────────────────────────────┐
│ Current Index: 4                                                │
│ Current Element: arr[4] = 90                                    │
│ Target: 5                                                       │
│                                                                 │
│ Comparison: 90 == 5?                                            │
│ Result: NO ❌                                                   │
│ Action: Continue to next element                                │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 6: i = 5

┌─────────────────────────────────────────────────────────────────┐
│ Current Index: 5                                                │
│ Current Element: arr[5] = 34                                    │
│ Target: 5                                                       │
│                                                                 │
│ Comparison: 34 == 5?                                            │
│ Result: NO ❌                                                   │
│ Action: Continue to next element                                │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 7: i = 6

┌─────────────────────────────────────────────────────────────────┐
│ Current Index: 6                                                │
│ Current Element: arr[6] = 67                                    │
│ Target: 5                                                       │
│                                                                 │
│ Comparison: 67 == 5?                                            │
│ Result: NO ❌                                                   │
│ Action: Continue to next element                                │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 8: i = 7 ⭐ FOUND! ⭐

┌─────────────────────────────────────────────────────────────────┐
│ Current Index: 7                                                │
│ Current Element: arr[7] = 5                                     │
│ Target: 5                                                       │
│                                                                 │
│ Comparison: 5 == 5?                                             │
│ Result: YES ✅✅✅                                               │
│ Action: RETURN INDEX 7!                                         │
│                                                                 │
│ 🎉 ELEMENT FOUND AT INDEX 7! 🎉                                 │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ FINAL RESULT:
   • Element 5 found at index 7
   • Total comparisons made: 8
   • Function returns: 7
   • Output: "target index value : 7"

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎬 COMPLETE EXECUTION - PURA PROGRAM KAISE CHALTA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Program Start 🚀
    ↓
main() function call
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 1: Variable Initialization                                 │
├─────────────────────────────────────────────────────────────────┤
│ target = 5                                                      │
│ arr11[] = {45, 23, 78, 12, 90, 34, 67, 5, 89, ...}            │
│ n = 25                                                          │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 2: Function Call                                           │
├─────────────────────────────────────────────────────────────────┤
│ linearsearch(arr11, 25, 5)                                      │
│                                                                 │
│ Parameters passed:                                              │
│ • arr[] = arr11 (array reference)                              │
│ • n = 25 (size)                                                 │
│ • target = 5 (what to find)                                     │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 3: Linear Search Execution                                 │
├─────────────────────────────────────────────────────────────────┤
│ Loop starts: i = 0                                              │
│                                                                 │
│ i=0: arr[0]=45 vs 5 → NO, continue                             │
│ i=1: arr[1]=23 vs 5 → NO, continue                             │
│ i=2: arr[2]=78 vs 5 → NO, continue                             │
│ i=3: arr[3]=12 vs 5 → NO, continue                             │
│ i=4: arr[4]=90 vs 5 → NO, continue                             │
│ i=5: arr[5]=34 vs 5 → NO, continue                             │
│ i=6: arr[6]=67 vs 5 → NO, continue                             │
│ i=7: arr[7]=5  vs 5 → YES! FOUND! ✅                           │
│                                                                 │
│ Return 7 to main()                                              │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 4: Store Result                                            │
├─────────────────────────────────────────────────────────────────┤
│ index = 7 (returned value)                                      │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 5: Print Output                                            │
├─────────────────────────────────────────────────────────────────┤
│ cout << "target index value : " << 7 << endl                   │
│                                                                 │
│ OUTPUT: target index value : 7                                  │
└─────────────────────────────────────────────────────────────────┘
    ↓
Program End 🎉


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

ARRAY IN MEMORY (First 10 elements shown):

┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│ 45 │ 23 │ 78 │ 12 │ 90 │ 34 │ 67 │ 5  │ 89 │ 56 │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│ 0  │ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
  ↓    ↓    ↓    ↓    ↓    ↓    ↓    ↓
  ❌   ❌   ❌   ❌   ❌   ❌   ❌   ✅ FOUND!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

SEARCH PROCESS VISUALIZATION:

Target = 5

Step 1:  [45] 23  78  12  90  34  67  5  89  56  ...
          ↑
        Check: 45 ≠ 5 ❌

Step 2:  45  [23] 78  12  90  34  67  5  89  56  ...
              ↑
        Check: 23 ≠ 5 ❌

Step 3:  45  23  [78] 12  90  34  67  5  89  56  ...
                  ↑
        Check: 78 ≠ 5 ❌

Step 4:  45  23  78  [12] 90  34  67  5  89  56  ...
                      ↑
        Check: 12 ≠ 5 ❌

Step 5:  45  23  78  12  [90] 34  67  5  89  56  ...
                          ↑
        Check: 90 ≠ 5 ❌

Step 6:  45  23  78  12  90  [34] 67  5  89  56  ...
                              ↑
        Check: 34 ≠ 5 ❌

Step 7:  45  23  78  12  90  34  [67] 5  89  56  ...
                                  ↑
        Check: 67 ≠ 5 ❌

Step 8:  45  23  78  12  90  34  67  [5] 89  56  ...
                                      ↑
        Check: 5 == 5 ✅ FOUND AT INDEX 7!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

FUNCTION CALL STACK:

┌─────────────────────────────────────────────────────────────────┐
│                         CALL STACK                              │
├─────────────────────────────────────────────────────────────────┤
│                                                                 │
│  ┌───────────────────────────────────────────────────────────┐ │
│  │ linearsearch(arr11, 25, 5)                                │ │
│  │                                                           │ │
│  │ Local Variables:                                          │ │
│  │ • arr[] → points to arr11                                │ │
│  │ • n = 25                                                  │ │
│  │ • target = 5                                              │ │
│  │ • i = 7 (when found)                                      │ │
│  │                                                           │ │
│  │ Return: 7 ✅                                              │ │
│  └───────────────────────────────────────────────────────────┘ │
│                            ↓                                    │
│  ┌───────────────────────────────────────────────────────────┐ │
│  │ main()                                                    │ │
│  │                                                           │ │
│  │ Local Variables:                                          │ │
│  │ • target = 5                                              │ │
│  │ • arr11[] = {45, 23, 78, ...}                            │ │
│  │ • n = 25                                                  │ │
│  │ • index = 7 (received from function)                      │ │
│  └───────────────────────────────────────────────────────────┘ │
│                                                                 │
└─────────────────────────────────────────────────────────────────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

COMPARISON COUNT:

Iteration │ Index │ Value │ Target │ Match? │ Comparisons
──────────┼───────┼───────┼────────┼────────┼─────────────
    1     │   0   │  45   │   5    │   ❌   │      1
    2     │   1   │  23   │   5    │   ❌   │      2
    3     │   2   │  78   │   5    │   ❌   │      3
    4     │   3   │  12   │   5    │   ❌   │      4
    5     │   4   │  90   │   5    │   ❌   │      5
    6     │   5   │  34   │   5    │   ❌   │      6
    7     │   6   │  67   │   5    │   ❌   │      7
    8     │   7   │   5   │   5    │   ✅   │      8 ← FOUND!

Total Comparisons: 8
Element Position: Index 7 (8th element)

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🧮 MORE EXAMPLES - AUR EXAMPLES DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 1: Element at First Position (Best Case)

Array: [10, 20, 30, 40, 50]
Target: 10

Iteration 1: arr[0] = 10 == 10? YES ✅
Result: Found at index 0
Comparisons: 1 (Best Case!)

Real Life: Tumne book dhoondhni aur wo shelf pe sabse pehli hi mil gayi! 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 2: Element at Last Position (Worst Case)

Array: [10, 20, 30, 40, 50]
Target: 50

Iteration 1: arr[0] = 10 == 50? NO ❌
Iteration 2: arr[1] = 20 == 50? NO ❌
Iteration 3: arr[2] = 30 == 50? NO ❌
Iteration 4: arr[3] = 40 == 50? NO ❌
Iteration 5: arr[4] = 50 == 50? YES ✅

Result: Found at index 4
Comparisons: 5 (Worst Case - had to check all!)

Real Life: Book shelf ke sabse last mein thi! Poora shelf check karna pada! 😅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 3: Element Not Found

Array: [10, 20, 30, 40, 50]
Target: 25

Iteration 1: arr[0] = 10 == 25? NO ❌
Iteration 2: arr[1] = 20 == 25? NO ❌
Iteration 3: arr[2] = 30 == 25? NO ❌
Iteration 4: arr[3] = 40 == 25? NO ❌
Iteration 5: arr[4] = 50 == 25? NO ❌
Loop ends!

Result: -1 (Not Found)
Comparisons: 5 (Checked entire array)

Real Life: Poori library check ki, book hi nahi thi! 😢

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 4: Element in Middle (Average Case)

Array: [5, 15, 25, 35, 45, 55, 65]
Target: 35

Iteration 1: arr[0] = 5  == 35? NO ❌
Iteration 2: arr[1] = 15 == 35? NO ❌
Iteration 3: arr[2] = 25 == 35? NO ❌
Iteration 4: arr[3] = 35 == 35? YES ✅

Result: Found at index 3
Comparisons: 4 (Average Case)

Real Life: Book beech mein mil gayi! Na pehli, na aakhri! 👍

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 5: Array with Duplicates

Array: [10, 20, 30, 20, 40]
Target: 20

Iteration 1: arr[0] = 10 == 20? NO ❌
Iteration 2: arr[1] = 20 == 20? YES ✅

Result: Found at index 1 (First occurrence)
Note: Linear search returns FIRST match!

Real Life: Agar do same books hain, pehli wali return karenge! 📚


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ 1. LINEAR SEARCH = SEQUENTIAL SEARCH
   • Ek-ek karke har element check karo
   • Start from index 0, go till end
   • Simple aur straightforward!

✅ 2. WORKS ON UNSORTED ARRAYS
   • Array sorted hona zaruri nahi hai
   • Kisi bhi order mein elements ho sakte hain
   • Ye Linear Search ki sabse badi strength hai!

✅ 3. TIME COMPLEXITY
   • Best Case: O(1) - Element pehle position pe
   • Average Case: O(n) - Element beech mein
   • Worst Case: O(n) - Element last mein ya nahi hai
   • n = array size

✅ 4. SPACE COMPLEXITY
   • O(1) - Constant space
   • Koi extra array nahi chahiye
   • Sirf loop variable (i) use hota hai

✅ 5. RETURN VALUES
   • Element found → Return index (0 to n-1)
   • Element not found → Return -1
   • -1 is standard "not found" indicator

✅ 6. FIRST OCCURRENCE
   • Agar duplicates hain, FIRST match return hoga
   • Example: [5, 3, 5, 7] mein 5 dhoondhoge → index 0 milega

✅ 7. WHEN TO USE LINEAR SEARCH?
   • Small arrays (n < 100)
   • Unsorted arrays
   • When simplicity matters more than speed
   • When you need to search only once

✅ 8. WHEN NOT TO USE?
   • Large arrays (n > 1000)
   • Sorted arrays (use Binary Search instead - O(log n))
   • Multiple searches on same array (sort first, then binary search)

✅ 9. COMMON MISTAKES TO AVOID
   ❌ Loop condition: i <= n (Wrong! Array overflow!)
   ✅ Loop condition: i < n (Correct!)

   ❌ Forgetting to return -1 (if not found)
   ✅ Always return -1 after loop ends

   ❌ Using wrong array size
   ✅ Use sizeof(arr)/sizeof(arr[0]) or pass size as parameter

✅ 10. ADVANTAGES
   • Simple to implement
   • Works on unsorted data
   • No preprocessing needed
   • Memory efficient (O(1) space)

✅ 11. DISADVANTAGES
   • Slow for large arrays
   • O(n) time complexity
   • Not efficient for multiple searches
   • Better alternatives exist for sorted arrays

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎪 FUN ANALOGY - BACHON KI BHASHA MEIN (In Kid's Language)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎮 THE TREASURE HUNT GAME! 🏴‍☠️

Imagine karo tum ek TREASURE HUNT game khel rahe ho!

🗺️ SETUP:
- 25 boxes hain ek line mein (array)
- Har box mein ek number hai (elements)
- Tumhe ek specific number dhoondhna hai (target = 5)
- Boxes locked hain, ek-ek karke kholne padenge!

🎯 GAME RULES:
1. Start from first box (index 0)
2. Open the box and check the number
3. Is it the treasure number (5)?
   - YES → You WIN! 🎉 Tell everyone which box it was!
   - NO → Move to next box
4. Keep going until you find it or run out of boxes

🎮 YOUR GAME:

Box 1: Open → 45 inside → Not 5! ❌ Next box!
Box 2: Open → 23 inside → Not 5! ❌ Next box!
Box 3: Open → 78 inside → Not 5! ❌ Next box!
Box 4: Open → 12 inside → Not 5! ❌ Next box!
Box 5: Open → 90 inside → Not 5! ❌ Next box!
Box 6: Open → 34 inside → Not 5! ❌ Next box!
Box 7: Open → 67 inside → Not 5! ❌ Next box!
Box 8: Open → 5 inside → FOUND IT! ✅✅✅

🏆 YOU WIN! Treasure was in Box 8 (index 7)!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🍕 PIZZA SLICE ANALOGY!

Imagine tumhare paas 25 pizza slices hain ek line mein!
Har slice pe ek number likha hai!
Tumhe number "5" wala slice dhoondhna hai!

🍕 [45] [23] [78] [12] [90] [34] [67] [5] [89] [56] ...

Tum kya karoge?
1. Pehla slice check karo → 45? Nahi! ❌
2. Dusra slice check karo → 23? Nahi! ❌
3. Teesra slice check karo → 78? Nahi! ❌
... keep checking ...
8. Aathwa slice check karo → 5? HAA! ✅

Mil gaya! 8th slice (index 7) pe number 5 hai! 🎉

Yahi Linear Search hai! Ek-ek karke sab check karo! 🍕

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎒 SCHOOL BAG ANALOGY!

Tumhare bag mein 25 books hain!
Tumhe "Math" book dhoondhni hai!

Tum kya karoge?
1. Bag kholo
2. Pehli book nikalo → English? Nahi! Wapas rakho!
3. Dusri book nikalo → Science? Nahi! Wapas rakho!
4. Teesri book nikalo → History? Nahi! Wapas rakho!
... keep searching ...
8. Aathwi book nikalo → Math? HAA! Mil gayi! ✅

Exactly yahi Linear Search karta hai! 📚

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
💡 PRACTICE CHALLENGES - KHUD SE TRY KARO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 1: Basic Search
Array: [10, 20, 30, 40, 50]
Target: 30
Question: At which index will you find 30?
Hint: Count from 0!
Answer: Index 2 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 2: Not Found
Array: [5, 10, 15, 20, 25]
Target: 12
Question: What will the function return?
Hint: Element hai hi nahi array mein!
Answer: -1 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 3: Count Comparisons
Array: [100, 200, 300, 400, 500]
Target: 500
Question: How many comparisons will be made?
Hint: Element last position pe hai!
Answer: 5 comparisons ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 4: Duplicates
Array: [7, 3, 7, 9, 7]
Target: 7
Question: Which index will be returned?
Hint: First occurrence!
Answer: Index 0 ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 5: Modify the Code
Task: Modify the function to return the LAST occurrence of target (not first)
Hint: Don't return immediately when found, keep searching and update index!

Solution:
int linearSearchLast(int arr[], int n, int target) {
    int lastIndex = -1;  // Store last found index
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            lastIndex = i;  // Update but don't return yet!
        }
    }
    return lastIndex;  // Return last found index
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 6: Count Occurrences
Task: Count how many times target appears in array
Array: [5, 3, 5, 7, 5, 9]
Target: 5
Expected: 3 occurrences

Solution:
int countOccurrences(int arr[], int n, int target) {
    int count = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            count++;  // Increment counter
        }
    }
    return count;
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎓 SUMMARY - EK LINE MEIN SAMJHO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 ONE-LINE EXPLANATION:
Linear Search = Array ke har element ko ek-ek karke check karo jab tak target nahi mil jata!

📝 FORMULA TO REMEMBER:
for (i = 0 to n-1):
    if arr[i] == target:
        return i
return -1

🎯 QUICK EXAMPLE:
Array: [10, 20, 30, 40, 50]
Target: 30
Process: Check 10❌ → Check 20❌ → Check 30✅ → Found at index 2!

⏱️ TIME COMPLEXITY: O(n) - Worst case mein poora array check karna padega
💾 SPACE COMPLEXITY: O(1) - Koi extra space nahi chahiye

✨ WHEN TO USE:
• Small arrays
• Unsorted data
• Simple implementation needed
• One-time search

🚀 REMEMBER:
"Ek-ek karke sab check karo, mil gaya to index batao, nahi mila to -1 batao!" 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎉 CONGRATULATIONS! 🎉

Ab tum Linear Search ke EXPERT ban gaye ho! 🏆

Keep practicing aur happy coding! 💻✨

Yaad rakho: "Simple things, done consistently, lead to great results!" 🚀

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

*/
