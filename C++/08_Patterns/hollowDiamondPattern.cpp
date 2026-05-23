#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << "----------------" << endl;

    // Top half (including middle)
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != 0) {
            for (int j = 0; j < 2 * i - 1; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half (excluding middle)
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < i + 1; j++) {
            cout << " ";
        }
        cout << "*";
        if (i != n - 2) {
            for (int j = 0; j < 2 * (n - i) - 5; j++) {
                cout << " ";
            }
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}

// ============================================
// 💎 HOLLOW DIAMOND PATTERN - COMPLETE GUIDE 💎
// ============================================
//
// 🎯 WHAT THIS CREATES:
//
// Example (n=5):
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
//
// It's a diamond shape with only the outline! ✨
//
// ============================================
// 🏗️ THE BIG PICTURE
// ============================================
//
// The diamond has TWO parts:
//
// 1️⃣ TOP HALF (expanding) ⬇️
//    Starts narrow, gets wider
//    Includes the middle widest row
//
// 2️⃣ BOTTOM HALF (shrinking) ⬆️
//    Starts wide, gets narrow
//    Mirrors the top (without repeating middle)
//
// ============================================
// 🐛 THE BUG THAT WAS FIXED
// ============================================
//
// ❌ BEFORE (WRONG):
//    for (int i = 0; i < n - 2; i++)
//
//    Problem: Last row didn't print! 😢
//    For n=8: Only printed 6 bottom rows (needed 7)
//
// ✅ AFTER (CORRECT):
//    for (int i = 0; i < n - 1; i++)
//
//    Fixed: All rows print! 🎉
//    For n=8: Prints all 7 bottom rows
//
// 💡 WHY:
//    Top half = n rows
//    Bottom half = n-1 rows (mirror without middle)
//    Using n-2 gave us one row less!
//
// ============================================
// 📊 ROW-BY-ROW BREAKDOWN (n=5)
// ============================================
//
// 🔼 TOP HALF (5 rows):
//
// Row 0 (i=0): 4 spaces + *
//              "    *"
//
// Row 1 (i=1): 3 spaces + * + 1 space + *
//              "   * *"
//
// Row 2 (i=2): 2 spaces + * + 3 spaces + *
//              "  *   *"
//
// Row 3 (i=3): 1 space + * + 5 spaces + *
//              " *     *"
//
// Row 4 (i=4): 0 spaces + * + 7 spaces + *
//              "*       *"  ← Widest point!
//
// 🔽 BOTTOM HALF (4 rows):
//
// Row 0 (i=0): 1 space + * + 5 spaces + *
//              " *     *"
//
// Row 1 (i=1): 2 spaces + * + 3 spaces + *
//              "  *   *"
//
// Row 2 (i=2): 3 spaces + * + 1 space + *
//              "   * *"
//
// Row 3 (i=3): 4 spaces + *
//              "    *"  ← This was missing before! 🐛
//
// ============================================
// 🔍 HOW THE LOOPS WORK
// ============================================
//
// 🔼 TOP HALF LOOPS:
//
// Loop 1 - Leading Spaces:
//    for (int j = 0; j < n - i - 1; j++)
//
//    Purpose: Push stars to the right 👉
//    Formula: n - i - 1
//
//    Row 0: 5-0-1 = 4 spaces
//    Row 1: 5-1-1 = 3 spaces
//    Row 2: 5-2-1 = 2 spaces
//    Row 3: 5-3-1 = 1 space
//    Row 4: 5-4-1 = 0 spaces
//
// First Star:
//    cout << "*";
//
//    Always prints! Left edge of diamond 💎
//
// Middle Spaces (if not first row):
//    if (i != 0)
//    for (int j = 0; j < 2 * i - 1; j++)
//
//    Purpose: Create hollow space between stars
//    Formula: 2 * i - 1
//
//    Row 0: Skip (single star at top)
//    Row 1: 2*1-1 = 1 space
//    Row 2: 2*2-1 = 3 spaces
//    Row 3: 2*3-1 = 5 spaces
//    Row 4: 2*4-1 = 7 spaces
//
// Second Star:
//    cout << "*";
//
//    Right edge of diamond 💎
//
// 🔽 BOTTOM HALF LOOPS:
//
// Loop 1 - Leading Spaces:
//    for (int j = 0; j < i + 1; j++)
//
//    Purpose: Push stars to the right 👉
//    Formula: i + 1
//
//    Row 0: 0+1 = 1 space
//    Row 1: 1+1 = 2 spaces
//    Row 2: 2+1 = 3 spaces
//    Row 3: 3+1 = 4 spaces
//
// First Star:
//    cout << "*";
//
//    Left edge of diamond 💎
//
// Middle Spaces (if not last row):
//    if (i != n - 2)
//    for (int j = 0; j < 2 * (n - i) - 5; j++)
//
//    Purpose: Create hollow space between stars
//    Formula: 2 * (n - i) - 5
//
//    Row 0: 2*(5-0)-5 = 5 spaces
//    Row 1: 2*(5-1)-5 = 3 spaces
//    Row 2: 2*(5-2)-5 = 1 space
//    Row 3: Skip (single star at bottom)
//
// Second Star:
//    cout << "*";
//
//    Right edge of diamond 💎
//
// ============================================
// 🧮 THE MAGIC FORMULAS
// ============================================
//
// 🔼 TOP HALF (i = 0 to n-1):
//
//    Leading Spaces = n - i - 1
//    Middle Spaces = 2 * i - 1 (when i > 0)
//
//    Pattern: Spaces decrease, middle expands
//
// 🔽 BOTTOM HALF (i = 0 to n-2):
//
//    Leading Spaces = i + 1
//    Middle Spaces = 2 * (n - i) - 5 (when i < n-2)
//
//    Pattern: Spaces increase, middle shrinks
//
// ============================================
// 🎨 VISUAL BREAKDOWN
// ============================================
//
// Think of it as building with blocks:
//
// Top:    [    *    ]  ← 1 block
//         [   * *   ]  ← 2 blocks
//         [  *   *  ]  ← 2 blocks (hollow!)
//         [ *     * ]  ← 2 blocks (more hollow!)
//         [*       *]  ← 2 blocks (most hollow!)
//
// Bottom: [ *     * ]  ← 2 blocks
//         [  *   *  ]  ← 2 blocks
//         [   * *   ]  ← 2 blocks
//         [    *    ]  ← 1 block
//
// The "hollow" part is just spaces! 🕳️
//
// ============================================
// � WHY IT LOOKS LIKE A DIAMOND
// ============================================
//
// 1️⃣ SYMMETRY:
//    Top and bottom mirror each other 🪞
//    Left and right are balanced ⚖️
//
// 2️⃣ EXPANDING THEN SHRINKING:
//    Starts narrow → Gets wide → Gets narrow
//    Creates the diamond shape! 💎
//
// 3️⃣ HOLLOW CENTER:
//    Only prints stars on the edges
//    Middle is empty (spaces)
//    That's why it's "hollow"! 🕳️
//
// ============================================
// 🎯 REAL-WORLD ANALOGY
// ============================================
//
// Imagine a kite! 🪁
//
// Top part:    /\      ← Expanding
//             /  \
//            /    \
//           /      \
//
// Bottom part: \    /  ← Shrinking
//               \  /
//                \/
//
// The kite frame (edges) = our stars ⭐
// The kite fabric (middle) = empty space 🕳️
//
// ============================================
// 🔢 PATTERN IN NUMBERS
// ============================================
//
// For n=5:
//
// Top half rows: 5 (i = 0 to 4)
// Bottom half rows: 4 (i = 0 to 3)
// Total rows: 9 (2*n - 1)
//
// Widest point: Row 4 (middle)
// Width at middle: 2*n - 1 = 9 characters
//
// Stars per row: Always 1 or 2
// (1 at top/bottom, 2 everywhere else)
//
// ============================================
// 🎓 KEY TAKEAWAYS
// ============================================
//
// 1️⃣ TWO HALVES:
//    Top expands (n rows)
//    Bottom shrinks (n-1 rows)
//
// 2️⃣ THREE PARTS PER ROW:
//    Leading spaces (for centering)
//    First star (left edge)
//    Middle spaces + second star (right edge)
//
// 3️⃣ SPECIAL CASES:
//    First row: Only 1 star (top point)
//    Last row: Only 1 star (bottom point)
//    Middle row: Widest (most spaces between)
//
// 4️⃣ THE BUG:
//    Using n-2 instead of n-1 in bottom loop
//    Caused last row to disappear! 🐛
//
// ============================================
// 🚀 TRY IT YOURSELF
// ============================================
//
// Try with n=3:
//   *
//  * *
// *   *
//  * *
//   *
//
// Try with n=7:
//       *
//      * *
//     *   *
//    *     *
//   *       *
//  *         *
// *           *
//  *         *
//   *       *
//    *     *
//     *   *
//      * *
//       *
//
// Notice:
// ✨ Always symmetric
// ✨ Always hollow (except top/bottom)
// ✨ Always diamond-shaped
//
// ============================================
// � CONGRATULATIONS!
// ============================================
//
// You now understand:
// ✅ How hollow diamonds work
// ✅ Why the bug happened
// ✅ How to fix it
// ✅ The math behind the pattern
//
// Keep practicing patterns! 💪💎✨
//
// ============================================

// ============================================
// 💎 HINGLISH MEIN SAMJHAO (हिंग्लिश में समझाओ) 💎
// ============================================
//
// 🎯 YE PATTERN KYA BANATA HAI:
//
// Example (n=5):
//     *
//    * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//    * *
//     *
//
// Ek diamond (heera) 💎 shape banata hai, lekin sirf outline!
// Andar khali hai! 🕳️
//
// ============================================
// 🏗️ BASIC SAMAJH (बेसिक समझ)
// ============================================
//
// Diamond ke DO hisse hain:
//
// 1️⃣ UPAR WALA HISSA (ऊपर वाला हिस्सा) ⬇️
//    Chhota start hota hai, phir bada hota jata hai
//    Sabse bada row middle mein hai
//
// 2️⃣ NEECHE WALA HISSA (नीचे वाला हिस्सा) ⬆️
//    Bada start hota hai, phir chhota hota jata hai
//    Upar wale ka mirror hai (middle repeat nahi hota)
//
// ============================================
// 🐛 JO BUG THA WO FIX HO GAYA
// ============================================
//
// ❌ PEHLE (GALAT):
//    for (int i = 0; i < n - 2; i++)
//
//    Problem: Last row print nahi ho raha tha! 😢
//    n=8 ke liye: Sirf 6 rows print ho rahe the (7 chahiye the)
//
// ✅ AB (SAHI):
//    for (int i = 0; i < n - 1; i++)
//
//    Fixed: Sab rows print ho rahe hain! 🎉
//    n=8 ke liye: Saare 7 rows print ho rahe hain
//
// 💡 KYUN:
//    Upar wala hissa = n rows
//    Neeche wala hissa = n-1 rows (middle repeat nahi karna)
//    n-2 use karne se ek row kam ho gayi thi!
//
// ============================================
// 📊 HAR ROW KA BREAKDOWN (n=5)
// ============================================
//
// 🔼 UPAR WALA HISSA (5 rows):
//
// Row 0 (i=0): 4 spaces + *
//              "    *"
//              (Sirf ek star, top point)
//
// Row 1 (i=1): 3 spaces + * + 1 space + *
//              "   * *"
//              (Do stars, beech mein 1 space)
//
// Row 2 (i=2): 2 spaces + * + 3 spaces + *
//              "  *   *"
//              (Do stars, beech mein 3 spaces)
//
// Row 3 (i=3): 1 space + * + 5 spaces + *
//              " *     *"
//              (Do stars, beech mein 5 spaces)
//
// Row 4 (i=4): 0 spaces + * + 7 spaces + *
//              "*       *"
//              (Sabse bada! Beech mein 7 spaces) ← Widest!
//
// 🔽 NEECHE WALA HISSA (4 rows):
//
// Row 0 (i=0): 1 space + * + 5 spaces + *
//              " *     *"
//
// Row 1 (i=1): 2 spaces + * + 3 spaces + *
//              "  *   *"
//
// Row 2 (i=2): 3 spaces + * + 1 space + *
//              "   * *"
//
// Row 3 (i=3): 4 spaces + *
//              "    *"
//              (Sirf ek star, bottom point) ← Ye missing tha! 🐛
//
// ============================================
// 🔍 LOOPS KAISE KAAM KARTE HAIN
// ============================================
//
// 🔼 UPAR WALE HISSE KE LOOPS:
//
// Loop 1 - Shuru ke Spaces:
//    for (int j = 0; j < n - i - 1; j++)
//
//    Kaam: Stars ko right side push karna 👉
//    Formula: n - i - 1
//
//    Row 0: 5-0-1 = 4 spaces (sabse zyada)
//    Row 1: 5-1-1 = 3 spaces
//    Row 2: 5-2-1 = 2 spaces
//    Row 3: 5-3-1 = 1 space
//    Row 4: 5-4-1 = 0 spaces (koi nahi)
//
// Pehla Star:
//    cout << "*";
//
//    Hamesha print hota hai! Diamond ka left edge 💎
//
// Beech ke Spaces (agar pehli row nahi hai):
//    if (i != 0)
//    for (int j = 0; j < 2 * i - 1; j++)
//
//    Kaam: Do stars ke beech mein khali jagah banana
//    Formula: 2 * i - 1
//
//    Row 0: Skip (top pe sirf ek star)
//    Row 1: 2*1-1 = 1 space
//    Row 2: 2*2-1 = 3 spaces
//    Row 3: 2*3-1 = 5 spaces
//    Row 4: 2*4-1 = 7 spaces (sabse zyada)
//
// Doosra Star:
//    cout << "*";
//
//    Diamond ka right edge 💎
//
// 🔽 NEECHE WALE HISSE KE LOOPS:
//
// Loop 1 - Shuru ke Spaces:
//    for (int j = 0; j < i + 1; j++)
//
//    Kaam: Stars ko right side push karna 👉
//    Formula: i + 1
//
//    Row 0: 0+1 = 1 space (kam)
//    Row 1: 1+1 = 2 spaces
//    Row 2: 2+1 = 3 spaces
//    Row 3: 3+1 = 4 spaces (sabse zyada)
//
// Pehla Star:
//    cout << "*";
//
//    Diamond ka left edge 💎
//
// Beech ke Spaces (agar last row nahi hai):
//    if (i != n - 2)
//    for (int j = 0; j < 2 * (n - i) - 5; j++)
//
//    Kaam: Do stars ke beech mein khali jagah banana
//    Formula: 2 * (n - i) - 5
//
//    Row 0: 2*(5-0)-5 = 5 spaces (sabse zyada)
//    Row 1: 2*(5-1)-5 = 3 spaces
//    Row 2: 2*(5-2)-5 = 1 space
//    Row 3: Skip (bottom pe sirf ek star)
//
// Doosra Star:
//    cout << "*";
//
//    Diamond ka right edge 💎
//
// ============================================
// 🧮 MAGIC FORMULAS (जादुई फॉर्मूले)
// ============================================
//
// 🔼 UPAR WALA HISSA (i = 0 se n-1 tak):
//
//    Shuru ke Spaces = n - i - 1
//    Beech ke Spaces = 2 * i - 1 (jab i > 0)
//
//    Pattern: Spaces kam hote jate hain, beech bada hota jata hai
//
// 🔽 NEECHE WALA HISSA (i = 0 se n-2 tak):
//
//    Shuru ke Spaces = i + 1
//    Beech ke Spaces = 2 * (n - i) - 5 (jab i < n-2)
//
//    Pattern: Spaces badhte jate hain, beech chhota hota jata hai
//
// ============================================
// 🎯 ASLI DUNIYA KI MISAAL (Real World Example)
// ============================================
//
// Socho ek patang (kite) 🪁 ki tarah!
//
// Upar wala hissa:    /\      ← Bada ho raha hai
//                    /  \
//                   /    \
//                  /      \
//
// Neeche wala hissa:  \    /  ← Chhota ho raha hai
//                      \  /
//                       \/
//
// Patang ki dori (edges) = hamare stars ⭐
// Patang ka kapda (middle) = khali jagah 🕳️
//
// ============================================
// 💡 DIAMOND KYUN DIKHTA HAI
// ============================================
//
// 1️⃣ SYMMETRY (सममिति):
//    Upar aur neeche ek dusre ka mirror 🪞
//    Left aur right balanced ⚖️
//
// 2️⃣ PEHLE BADA PHIR CHHOTA:
//    Chhota start → Bada middle → Phir chhota
//    Isse diamond shape banta hai! 💎
//
// 3️⃣ BEECH MEIN KHALI:
//    Sirf edges pe stars print hote hain
//    Beech mein khali (spaces)
//    Isliye "hollow" (khokla) kehte hain! 🕳️
//
// ============================================
// 🔢 NUMBERS MEIN PATTERN
// ============================================
//
// n=5 ke liye:
//
// Upar wale rows: 5 (i = 0 se 4 tak)
// Neeche wale rows: 4 (i = 0 se 3 tak)
// Total rows: 9 (2*n - 1)
//
// Sabse bada point: Row 4 (middle)
// Middle ki width: 2*n - 1 = 9 characters
//
// Har row mein stars: Hamesha 1 ya 2
// (Top/bottom pe 1, baaki jagah 2)
//
// ============================================
// 🎓 YAAD RAKHNE WALI BAATEIN (Key Points)
// ============================================
//
// 1️⃣ DO HISSE:
//    Upar bada hota hai (n rows)
//    Neeche chhota hota hai (n-1 rows)
//
// 2️⃣ HAR ROW KE TEEN PARTS:
//    Shuru ke spaces (centering ke liye)
//    Pehla star (left edge)
//    Beech ke spaces + doosra star (right edge)
//
// 3️⃣ SPECIAL CASES:
//    Pehli row: Sirf 1 star (top point)
//    Last row: Sirf 1 star (bottom point)
//    Middle row: Sabse bada (sabse zyada spaces)
//
// 4️⃣ BUG KYA THA:
//    Neeche wale loop mein n-2 use kar rahe the n-1 ki jagah
//    Isliye last row gayab ho gayi thi! 🐛
//
// ============================================
// 🚀 KHUD TRY KARO (Try Yourself)
// ============================================
//
// n=3 ke saath try karo:
//   *
//  * *
// *   *
//  * *
//   *
//
// n=7 ke saath try karo:
//       *
//      * *
//     *   *
//    *     *
//   *       *
//  *         *
// *           *
//  *         *
//   *       *
//    *     *
//     *   *
//      * *
//       *
//
// Dhyaan do:
// ✨ Hamesha symmetric (dono taraf same)
// ✨ Hamesha hollow (beech mein khali)
// ✨ Hamesha diamond shape
//
// ============================================
// 🎉 BADHAI HO! (Congratulations!)
// ============================================
//
// Ab tumhe samajh aa gaya:
// ✅ Hollow diamond kaise kaam karta hai
// ✅ Bug kyun hua tha
// ✅ Kaise fix kiya
// ✅ Saara math samajh aa gaya
//
// Patterns practice karte raho! 💪💎✨
//
// Agar koi doubt hai toh poochho! 🙋‍♂️
// Happy Coding! 🚀
//
// ============================================
