// reverse array with 2 pointer approach

#include <iostream>
#include <utility>
using namespace std;

void reverse_arr(int arr[], int sz) {
    int start = 0, end = sz - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {67, 23, 89, 45, 12, 78, 34, 91, 56, 5,  72, 38, 94, 61, 27,
                 83, 49, 6,  95, 31, 74, 18, 52, 86, 41, 69, 14, 77, 33, 58};
    int sz = 30;
    reverse_arr(arr, sz);
    for (int i = 0; i < sz; i++) {
        cout << "New Reversed array : " << arr[i] << endl;
    }
    cout << endl;
    return 0;
}

/*
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉
                    SUPER DETAILED EXPLANATION - 5 SAAL KA BACHA BHI SAMJHE!
🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📚 KYA HAI YE ARRAY REVERSAL WITH TWO POINTER? (What is Array Reversal with Two Pointer?)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Simple Definition:
Array Reversal = Array ke elements ka order ULTA kar dena!
Two Pointer Approach = Do pointers use karke (start aur end) efficiently reverse karna! 🔄

📖 Kya hota hai?
- Array ke FIRST element ko LAST se swap karo
- Array ke SECOND element ko SECOND-LAST se swap karo
- Aise hi continue karo jab tak dono pointers beech mein nahi mil jate
- Result: Array completely reversed! ✅

🎯 Purpose:
- Array ko reverse order mein arrange karna
- In-place reversal (no extra space needed)
- Efficient aur fast method
- Two Pointer technique ka perfect example!

🔑 Key Characteristics:
✅ In-place algorithm (no extra array)
✅ Two pointers: start (0) and end (n-1)
✅ Swap elements and move pointers
✅ Time: O(n), Space: O(1)
✅ Very efficient!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🍎 REAL LIFE EXAMPLE - LINE MEIN KHADE BACHON KO ULTA KARNA! 👦👧
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Imagine karo school mein 7 bachhe ek line mein khade hain:

Original Line:
👦A  👧B  👦C  👧D  👦E  👧F  👦G
 ↑                              ↑
start                          end

Teacher boli: "Line ko reverse karo!" (Ulta karo!)

🔄 TWO POINTER APPROACH:

Step 1: Start aur End ko swap karo
👦A ↔ 👦G
Result: 👦G  👧B  👦C  👧D  👦E  👧F  👦A
         ↑                          ↑
       start++                    end--

Step 2: Dono pointers andar aaye, phir swap
👧B ↔ 👧F
Result: 👦G  👧F  👦C  👧D  👦E  👧B  👦A
              ↑              ↑
            start++        end--

Step 3: Phir swap
👦C ↔ 👦E
Result: 👦G  👧F  👦E  👧D  👦C  👧B  👦A
                   ↑  ↑
                start end

Step 4: Start >= End! STOP! ✋

Final Reversed Line:
👦G  👧F  👦E  👧D  👦C  👧B  👦A

Line completely reverse ho gayi! 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
📖 CORE CONCEPT - TWO POINTER TECHNIQUE
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Algorithm Steps:

Step 1: Initialize two pointers
        • start = 0 (first index)
        • end = n-1 (last index)

Step 2: Loop while start < end
        • Swap arr[start] with arr[end]
        • Move start forward (start++)
        • Move end backward (end--)

Step 3: When start >= end, STOP!
        • Array is now reversed ✅

🔄 Visual Algorithm:

Original: [10, 20, 30, 40, 50]
           ↑               ↑
         start           end

Iteration 1:
Swap 10 ↔ 50
Result: [50, 20, 30, 40, 10]
             ↑       ↑
           start   end

Iteration 2:
Swap 20 ↔ 40
Result: [50, 40, 30, 20, 10]
                 ↑
            start=end (STOP!)

Final: [50, 40, 30, 20, 10] ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 Why Two Pointer?

1️⃣ EFFICIENT:
   • Only n/2 swaps needed
   • No extra space required
   • In-place reversal

2️⃣ SIMPLE:
   • Easy to understand
   • Clean code
   • No complex logic

3️⃣ OPTIMAL:
   • Time: O(n) - Linear time
   • Space: O(1) - Constant space
   • Best possible complexity!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

⏱️ Time Complexity Analysis:

Best Case: O(n)
Average Case: O(n)
Worst Case: O(n)

Why O(n)?
• We visit each element once
• n/2 swaps = O(n/2) = O(n)
• Linear time complexity

💾 Space Complexity: O(1)
• No extra array needed
• Only 2 pointer variables (start, end)
• Constant space!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🔍 CODE KO LINE BY LINE SAMAJHTE HAIN (Understanding Code Line by Line)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 INCLUDES:

#include <iostream>
// Input/Output operations ke liye (cout, cin)

#include <utility>
// swap() function ke liye
// swap(a, b) - do values ko swap karta hai

using namespace std;
// std:: likhne se bachne ke liye

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 FUNCTION: reverse_arr(int arr[], int sz)

void reverse_arr(int arr[], int sz) {
    // Function jo array ko reverse karta hai
    // Parameters:
    //   arr[] = Array jisko reverse karna hai
    //   sz = Array ka size
    // Return: void (kuch return nahi karta, array ko directly modify karta hai)

    int start = 0, end = sz - 1;
    // Two pointers initialize karo:
    //   start = 0 (first index)
    //   end = sz-1 (last index)
    // Example: sz=5 → end=4 (0-indexed array)

    while (start < end) {
        // Loop chalao jab tak start, end se chhota hai
        // Jab start >= end ho jaye, matlab beech mein mil gaye, STOP!

        swap(arr[start], arr[end]);
        // Current start aur end elements ko swap karo
        // swap() function <utility> header se aata hai
        // Example: swap(arr[0], arr[4]) → first aur last swap

        start++;
        // Start pointer ko aage badhao (right side move)
        // 0 → 1 → 2 → ...

        end--;
        // End pointer ko peeche lao (left side move)
        // 4 → 3 → 2 → ...
    }
    // Loop khatam! Array reversed ho gaya! ✅
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 MAIN FUNCTION:

int main() {
    int arr[] = {67, 23, 89, 45, 12, 78, 34, 91, 56, 5, 72, 38, 94, 61, 27,
                 83, 49, 6, 95, 31, 74, 18, 52, 86, 41, 69, 14, 77, 33, 58};
    // Array banaya 30 elements ke saath
    // Index:  0   1   2   3   4   5   6   7   8  9  10  11  12  13  14 ...
    // Value: 67  23  89  45  12  78  34  91  56  5  72  38  94  61  27 ...

    int sz = 30;
    // Array ka size = 30 elements

    reverse_arr(arr, sz);
    // Function call karo:
    //   arr = array pass karo (by reference)
    //   sz = size pass karo (30)
    // Function array ko directly modify karega (in-place)

    for (int i = 0; i < sz; i++) {
        // Loop chalao 0 se 29 tak
        // Har element ko print karo

        cout << "New Reversed array : " << arr[i] << endl;
        // Reversed array ka har element print karo
        // arr[i] = current element
    }

    cout << endl;
    // Extra line for formatting

    return 0;
    // Program successfully khatam hua ✅
}


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 EXAMPLE WALKTHROUGH - STEP BY STEP EXECUTION (Small Array)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

Let's use a smaller array for clarity:
Array: [10, 20, 30, 40, 50]
Size: 5

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 INITIAL STATE:

Array: [10, 20, 30, 40, 50]
Index:   0   1   2   3   4

start = 0 (points to 10)
end = 4 (points to 50)

┌────┬────┬────┬────┬────┐
│ 10 │ 20 │ 30 │ 40 │ 50 │
├────┼────┼────┼────┼────┤
│ 0  │ 1  │ 2  │ 3  │ 4  │
└────┴────┴────┴────┴────┘
  ↑                    ↑
start                end

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 1:

Condition: start < end? → 0 < 4? YES ✅

┌─────────────────────────────────────────────────────────────────┐
│ SWAP: arr[0] ↔ arr[4]                                           │
│       10 ↔ 50                                                   │
└─────────────────────────────────────────────────────────────────┘

After Swap:
┌────┬────┬────┬────┬────┐
│ 50 │ 20 │ 30 │ 40 │ 10 │
├────┼────┼────┼────┼────┤
│ 0  │ 1  │ 2  │ 3  │ 4  │
└────┴────┴────┴────┴────┘

start++ → start = 1
end-- → end = 3

New Pointers:
┌────┬────┬────┬────┬────┐
│ 50 │ 20 │ 30 │ 40 │ 10 │
├────┼────┼────┼────┼────┤
│ 0  │ 1  │ 2  │ 3  │ 4  │
└────┴────┴────┴────┴────┘
      ↑         ↑
    start     end

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 ITERATION 2:

Condition: start < end? → 1 < 3? YES ✅

┌─────────────────────────────────────────────────────────────────┐
│ SWAP: arr[1] ↔ arr[3]                                           │
│       20 ↔ 40                                                   │
└─────────────────────────────────────────────────────────────────┘

After Swap:
┌────┬────┬────┬────┬────┐
│ 50 │ 40 │ 30 │ 20 │ 10 │
├────┼────┼────┼────┼────┤
│ 0  │ 1  │ 2  │ 3  │ 4  │
└────┴────┴────┴────┴────┘

start++ → start = 2
end-- → end = 2

New Pointers:
┌────┬────┬────┬────┬────┐
│ 50 │ 40 │ 30 │ 20 │ 10 │
├────┼────┼────┼────┼────┤
│ 0  │ 1  │ 2  │ 3  │ 4  │
└────┴────┴────┴────┴────┘
           ↑
      start=end

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🔄 LOOP CHECK:

Condition: start < end? → 2 < 2? NO ❌

LOOP STOPS! ✋

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ FINAL RESULT:

Original: [10, 20, 30, 40, 50]
Reversed: [50, 40, 30, 20, 10]

Total Swaps: 2 (n/2 = 5/2 = 2)
Time Taken: O(n)
Space Used: O(1)

🎉 ARRAY SUCCESSFULLY REVERSED! 🎉

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
│ arr[] = {67, 23, 89, 45, 12, ...} (30 elements)                │
│ sz = 30                                                         │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 2: Function Call                                           │
├─────────────────────────────────────────────────────────────────┤
│ reverse_arr(arr, 30)                                            │
│                                                                 │
│ Parameters passed:                                              │
│ • arr[] = array reference                                       │
│ • sz = 30                                                       │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 3: Initialize Pointers                                     │
├─────────────────────────────────────────────────────────────────┤
│ start = 0                                                       │
│ end = 29                                                        │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 4: Reverse Loop (15 iterations)                            │
├─────────────────────────────────────────────────────────────────┤
│ Iteration 1:  swap(arr[0], arr[29])  → 67 ↔ 58                │
│ Iteration 2:  swap(arr[1], arr[28])  → 23 ↔ 33                │
│ Iteration 3:  swap(arr[2], arr[27])  → 89 ↔ 77                │
│ Iteration 4:  swap(arr[3], arr[26])  → 45 ↔ 14                │
│ Iteration 5:  swap(arr[4], arr[25])  → 12 ↔ 69                │
│ Iteration 6:  swap(arr[5], arr[24])  → 78 ↔ 41                │
│ Iteration 7:  swap(arr[6], arr[23])  → 34 ↔ 86                │
│ Iteration 8:  swap(arr[7], arr[22])  → 91 ↔ 52                │
│ Iteration 9:  swap(arr[8], arr[21])  → 56 ↔ 18                │
│ Iteration 10: swap(arr[9], arr[20])  → 5 ↔ 74                 │
│ Iteration 11: swap(arr[10], arr[19]) → 72 ↔ 31                │
│ Iteration 12: swap(arr[11], arr[18]) → 38 ↔ 95                │
│ Iteration 13: swap(arr[12], arr[17]) → 94 ↔ 6                 │
│ Iteration 14: swap(arr[13], arr[16]) → 61 ↔ 49                │
│ Iteration 15: swap(arr[14], arr[15]) → 27 ↔ 83                │
│                                                                 │
│ After 15 swaps: start=15, end=14                               │
│ Condition: 15 < 14? NO → STOP!                                 │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 5: Return to main()                                        │
├─────────────────────────────────────────────────────────────────┤
│ Array is now reversed in-place ✅                               │
└─────────────────────────────────────────────────────────────────┘
    ↓
┌─────────────────────────────────────────────────────────────────┐
│ STEP 6: Print Reversed Array                                    │
├─────────────────────────────────────────────────────────────────┤
│ Loop from i=0 to i=29                                           │
│ Print each element: arr[0], arr[1], ..., arr[29]              │
│                                                                 │
│ Output:                                                         │
│ New Reversed array : 58                                         │
│ New Reversed array : 33                                         │
│ New Reversed array : 77                                         │
│ ... (30 lines total)                                            │
└─────────────────────────────────────────────────────────────────┘
    ↓
Program End 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎨 VISUAL REPRESENTATION - MEMORY MEIN KYA HO RAHA HAI
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

ARRAY IN MEMORY (First 10 elements shown):

BEFORE REVERSAL:
┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│ 67 │ 23 │ 89 │ 45 │ 12 │ 78 │ 34 │ 91 │ 56 │ 5  │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│ 0  │ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘
  ↑                                              ↑
start                                          end

AFTER REVERSAL:
┌────┬────┬────┬────┬────┬────┬────┬────┬────┬────┐
│ 58 │ 33 │ 77 │ 14 │ 69 │ 41 │ 86 │ 52 │ 18 │ 74 │
├────┼────┼────┼────┼────┼────┼────┼────┼────┼────┤
│ 0  │ 1  │ 2  │ 3  │ 4  │ 5  │ 6  │ 7  │ 8  │ 9  │
└────┴────┴────┴────┴────┴────┴────┴────┴────┴────┘

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

TWO POINTER MOVEMENT VISUALIZATION:

Original: [67, 23, 89, 45, 12, ..., 14, 77, 33, 58]
           ↑                                    ↑
         start=0                              end=29

After Swap 1: [58, 23, 89, 45, 12, ..., 14, 77, 33, 67]
                   ↑                              ↑
                 start=1                        end=28

After Swap 2: [58, 33, 89, 45, 12, ..., 14, 77, 23, 67]
                       ↑                          ↑
                     start=2                    end=27

... (continue swapping) ...

After Swap 15: [58, 33, 77, 14, 69, 41, 86, 52, 18, 74, 31, 95, 6, 49, 83, 27, ...]
                                                                        ↑  ↑
                                                                      end start

Pointers crossed! STOP! ✋

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

FUNCTION CALL STACK:

┌─────────────────────────────────────────────────────────────────┐
│                         CALL STACK                              │
├─────────────────────────────────────────────────────────────────┤
│                                                                 │
│  ┌───────────────────────────────────────────────────────────┐ │
│  │ reverse_arr(arr, 30)                                      │ │
│  │                                                           │ │
│  │ Local Variables:                                          │ │
│  │ • arr[] → points to main's array                         │ │
│  │ • sz = 30                                                 │ │
│  │ • start = 0 → 1 → 2 → ... → 15                          │ │
│  │ • end = 29 → 28 → 27 → ... → 14                         │ │
│  │                                                           │ │
│  │ Performs 15 swaps                                         │ │
│  │ Return: void (modifies array in-place)                    │ │
│  └───────────────────────────────────────────────────────────┘ │
│                            ↓                                    │
│  ┌───────────────────────────────────────────────────────────┐ │
│  │ main()                                                    │ │
│  │                                                           │ │
│  │ Local Variables:                                          │ │
│  │ • arr[] = {67, 23, 89, ...} → {58, 33, 77, ...}         │ │
│  │ • sz = 30                                                 │ │
│  │ • i = 0 to 29 (for printing)                            │ │
│  └───────────────────────────────────────────────────────────┘ │
│                                                                 │
└─────────────────────────────────────────────────────────────────┘


━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🧮 MORE EXAMPLES - AUR EXAMPLES DEKHTE HAIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 1: Even Number of Elements

Array: [1, 2, 3, 4]
Size: 4

Iteration 1: swap(arr[0], arr[3]) → [4, 2, 3, 1]
             start=0, end=3 → start=1, end=2

Iteration 2: swap(arr[1], arr[2]) → [4, 3, 2, 1]
             start=1, end=2 → start=2, end=1

Check: start < end? → 2 < 1? NO → STOP!

Result: [4, 3, 2, 1] ✅
Swaps: 2 (n/2 = 4/2 = 2)

Real Life: 4 books ko ulta arrange karna - 2 swaps mein ho gaya! 📚

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 2: Odd Number of Elements

Array: [1, 2, 3, 4, 5]
Size: 5

Iteration 1: swap(arr[0], arr[4]) → [5, 2, 3, 4, 1]
             start=0, end=4 → start=1, end=3

Iteration 2: swap(arr[1], arr[3]) → [5, 4, 3, 2, 1]
             start=1, end=3 → start=2, end=2

Check: start < end? → 2 < 2? NO → STOP!

Result: [5, 4, 3, 2, 1] ✅
Swaps: 2 (n/2 = 5/2 = 2)
Middle element (3) stays in place! 🎯

Real Life: 5 bachhe line mein, beech wala apni jagah pe hi raha! 👦👧👦👧👦

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 3: Single Element

Array: [42]
Size: 1

start = 0, end = 0

Check: start < end? → 0 < 0? NO → STOP immediately!

Result: [42] ✅ (No change needed!)
Swaps: 0

Real Life: Ek hi book hai, reverse karne ki zarurat nahi! 📖

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 4: Two Elements

Array: [10, 20]
Size: 2

Iteration 1: swap(arr[0], arr[1]) → [20, 10]
             start=0, end=1 → start=1, end=0

Check: start < end? → 1 < 0? NO → STOP!

Result: [20, 10] ✅
Swaps: 1

Real Life: Do dost positions swap kar liye! 👦👧 → 👧👦

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

📝 EXAMPLE 5: Already Reversed Array

Array: [5, 4, 3, 2, 1]
Size: 5

Process: Same swapping process
Result: [1, 2, 3, 4, 5] ✅

Note: Algorithm doesn't check if array is already reversed!
It will still perform all swaps!

Real Life: Ulti line ko seedha kar diya! 🔄

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎯 KEY POINTS - YAAD RAKHNE WALI BAATEIN
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

✅ 1. TWO POINTER TECHNIQUE
   • Start pointer: Beginning se (index 0)
   • End pointer: End se (index n-1)
   • Dono pointers beech mein milte hain
   • Very efficient approach!

✅ 2. IN-PLACE REVERSAL
   • No extra array needed
   • Original array ko hi modify karte hain
   • Space complexity: O(1)
   • Memory efficient! 💾

✅ 3. TIME COMPLEXITY
   • Best Case: O(n)
   • Average Case: O(n)
   • Worst Case: O(n)
   • Always linear time!

✅ 4. NUMBER OF SWAPS
   • Even elements: n/2 swaps
   • Odd elements: n/2 swaps (middle element untouched)
   • Example: n=10 → 5 swaps, n=11 → 5 swaps

✅ 5. LOOP CONDITION
   • while (start < end) ✅ Correct!
   • NOT while (start <= end) ❌ Wrong!
   • When start == end, we're at middle, STOP!

✅ 6. SWAP FUNCTION
   • swap(a, b) from <utility> header
   • Swaps two values efficiently
   • Can also use: temp = a; a = b; b = temp;

✅ 7. PASS BY REFERENCE
   • Array is passed by reference
   • Changes in function affect original array
   • No need to return anything (void function)

✅ 8. WORKS FOR ALL DATA TYPES
   • int arr[] ✅
   • float arr[] ✅
   • char arr[] ✅
   • Any data type that supports swap!

✅ 9. COMMON MISTAKES TO AVOID
   ❌ Loop condition: start <= end (will swap middle twice!)
   ✅ Loop condition: start < end

   ❌ Forgetting to increment/decrement pointers
   ✅ Always do start++ and end--

   ❌ Wrong initialization: end = sz (out of bounds!)
   ✅ Correct: end = sz - 1

✅ 10. ADVANTAGES
   • Simple to implement
   • Memory efficient (O(1) space)
   • Fast (O(n) time)
   • In-place modification
   • No extra data structures needed

✅ 11. USE CASES
   • Reversing strings
   • Palindrome checking
   • Array manipulation problems
   • Two pointer technique practice
   • Interview questions!

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎪 FUN ANALOGY - BACHON KI BHASHA MEIN (In Kid's Language)
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎭 THE MUSICAL CHAIRS GAME! 🪑

Imagine karo 7 bachhe musical chairs khel rahe hain!

Original Arrangement:
🪑A  🪑B  🪑C  🪑D  🪑E  🪑F  🪑G

Teacher boli: "Sabko apni chairs reverse karo!" (Ulta karo!)

🎯 TWO POINTER MAGIC:

Round 1: First aur Last bachhe chairs swap karo!
👦A aur 👦G positions swap!
Result: 🪑G  🪑B  🪑C  🪑D  🪑E  🪑F  🪑A

Round 2: Second aur Second-last swap!
👧B aur 👧F positions swap!
Result: 🪑G  🪑F  🪑C  🪑D  🪑E  🪑B  🪑A

Round 3: Third aur Third-last swap!
👦C aur 👦E positions swap!
Result: 🪑G  🪑F  🪑E  🪑D  🪑C  🪑B  🪑A

Round 4: Middle wala 👧D apni jagah pe hi raha!
(Kyunki start aur end mil gaye!)

Final: 🪑G  🪑F  🪑E  🪑D  🪑C  🪑B  🪑A

Completely reversed! Sirf 3 swaps mein! 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🚂 THE TRAIN BOGIES STORY! 🚃

Imagine ek train hai jisme 6 bogies hain:

Original Train:
🚂 [1] [2] [3] [4] [5] [6] 🚃

Railway station pe train ko reverse karna hai!

Method: Two Crane Approach! 🏗️

Crane 1 (Start): First bogie pakdo
Crane 2 (End): Last bogie pakdo

Step 1: Dono cranes apni bogies swap karo!
🚂 [6] [2] [3] [4] [5] [1] 🚃

Step 2: Dono cranes ek-ek bogie andar aao!
Crane 1: Second bogie pakdo
Crane 2: Second-last bogie pakdo
Swap karo!
🚂 [6] [5] [3] [4] [2] [1] 🚃

Step 3: Phir andar aao aur swap!
🚂 [6] [5] [4] [3] [2] [1] 🚃

Done! Train completely reversed! 🎊

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🍕 PIZZA SLICES IN A ROW! 🍕

Tumhare paas 8 pizza slices hain ek line mein:

Original: 🍕1 🍕2 🍕3 🍕4 🍕5 🍕6 🍕7 🍕8

Tumhe order reverse karna hai!

Two Hand Technique:
👈 Left Hand: First slice pakdo
👉 Right Hand: Last slice pakdo

Swap 1: 👈🍕1 ↔ 🍕8👉
Result: 🍕8 🍕2 🍕3 🍕4 🍕5 🍕6 🍕7 🍕1

Swap 2: 👈🍕2 ↔ 🍕7👉
Result: 🍕8 🍕7 🍕3 🍕4 🍕5 🍕6 🍕2 🍕1

Swap 3: 👈🍕3 ↔ 🍕6👉
Result: 🍕8 🍕7 🍕6 🍕4 🍕5 🍕3 🍕2 🍕1

Swap 4: 👈🍕4 ↔ 🍕5👉
Result: 🍕8 🍕7 🍕6 🍕5 🍕4 🍕3 🍕2 🍕1

Perfect! Completely reversed! 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
💡 PRACTICE CHALLENGES - KHUD SE TRY KARO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 1: Manual Trace
Array: [5, 10, 15, 20]
Question: How many swaps will be performed?
Hint: Count the iterations!
Answer: 2 swaps (n/2 = 4/2 = 2) ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 2: Odd vs Even
Array 1: [1, 2, 3, 4, 5] (odd)
Array 2: [1, 2, 3, 4, 5, 6] (even)
Question: Which needs more swaps?
Hint: Calculate n/2 for both!
Answer: Array 2 needs 3 swaps, Array 1 needs 2 swaps ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 3: Reverse Twice
Array: [10, 20, 30, 40]
Question: If you reverse it twice, what's the result?
Hint: Ulta ka ulta = original!
Answer: [10, 20, 30, 40] (back to original!) ✅

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 4: Modify for Partial Reverse
Task: Reverse only first half of array
Array: [1, 2, 3, 4, 5, 6, 7, 8]
Expected: [4, 3, 2, 1, 5, 6, 7, 8]

Solution:
void reverseFirstHalf(int arr[], int sz) {
    int start = 0, end = sz/2 - 1;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 5: Reverse in Range
Task: Reverse array from index L to R
Array: [1, 2, 3, 4, 5, 6, 7, 8]
L = 2, R = 5
Expected: [1, 2, 6, 5, 4, 3, 7, 8]

Solution:
void reverseRange(int arr[], int L, int R) {
    int start = L, end = R;
    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 CHALLENGE 6: Without swap() Function
Task: Reverse array without using swap() function
Hint: Use temp variable!

Solution:
void reverse_arr(int arr[], int sz) {
    int start = 0, end = sz - 1;
    while (start < end) {
        // Manual swap using temp
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
}

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
🎓 SUMMARY - EK LINE MEIN SAMJHO
━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎯 ONE-LINE EXPLANATION:
Two Pointer Approach = Start aur End pointers use karke elements ko swap karte jao jab tak dono
beech mein nahi mil jate!

📝 FORMULA TO REMEMBER:
start = 0, end = n-1
while (start < end):
    swap(arr[start], arr[end])
    start++, end--

🎯 QUICK EXAMPLE:
Array: [1, 2, 3, 4, 5]
Process: Swap 1↔5, Swap 2↔4, Middle (3) stays
Result: [5, 4, 3, 2, 1] ✅

⏱️ COMPLEXITY:
• Time: O(n) - Linear time (n/2 swaps)
• Space: O(1) - Constant space (in-place)

✨ WHY TWO POINTER?
• Efficient: Only n/2 operations
• In-place: No extra memory
• Simple: Easy to understand
• Optimal: Best possible solution!

🚀 REMEMBER:
"Do pointers, ek start se ek end se, beech mein mile to bas!" 🎉

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

🎉 CONGRATULATIONS! 🎉

Ab tum Two Pointer Technique ke MASTER ban gaye ho! 🏆

Ye technique bahut powerful hai aur bahut saare problems mein use hoti hai!

Keep practicing aur happy coding! 💻✨

Yaad rakho: "Two pointers, double the power, half the time!" ⚡

━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

*/
