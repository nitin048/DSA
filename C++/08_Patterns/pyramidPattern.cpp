// Pyramid Pattern

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter a num : " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        for (int k = 1; k <= i + 1; k++) {
            cout << k;
        }
        for (int l = i; l > 0; l--) {
            cout << l;
        }
        cout << endl;
    }
    return 0;
}
// output
// enter a nmu:
//  6
//       1
//      121
//     12321
//    1234321
//   123454321
//  12345654321

// ============================================
// 🏔️ PYRAMID PATTERN - EXPLAINED SIMPLY
// ============================================
//
// Imagine building a pyramid with numbers!
// Each row gets wider as you go down.
//
// Example (n=4):
//    1
//   121
//  12321
// 1234321
//
// ============================================
// 🎯 THE BIG PICTURE
// ============================================
//
// Each row has 3 parts:
// 1. SPACES (to center the pyramid)
// 2. NUMBERS GOING UP (1, 2, 3...)
// 3. NUMBERS GOING DOWN (3, 2, 1...)
//
// Think of it like climbing a mountain:
// - You climb UP (1→2→3→4)
// - You climb DOWN (3→2→1)
//
// ============================================
// 📊 ROW-BY-ROW BREAKDOWN (n=4)
// ============================================
//
// Row 1 (i=0):
//   Spaces: 3 (   )
//   Up:     1
//   Down:   (nothing)
//   Result:    1
//
// Row 2 (i=1):
//   Spaces: 2 (  )
//   Up:     1 2
//   Down:   1
//   Result:   121
//
// Row 3 (i=2):
//   Spaces: 1 ( )
//   Up:     1 2 3
//   Down:   2 1
//   Result:  12321
//
// Row 4 (i=3):
//   Spaces: 0 ()
//   Up:     1 2 3 4
//   Down:   3 2 1
//   Result: 1234321
//
// ============================================
// 🔍 HOW EACH LOOP WORKS
// ============================================
//
// OUTER LOOP (i = 0 to n-1):
//   Controls which row we're on
//   Row 1: i=0
//   Row 2: i=1
//   Row 3: i=2
//   Row 4: i=3
//
// LOOP 1 - Print Spaces (j loop):
//   Purpose: Center the pyramid
//   Formula: n - i - 1 spaces
//
//   Row 1: 4-0-1 = 3 spaces
//   Row 2: 4-1-1 = 2 spaces
//   Row 3: 4-2-1 = 1 space
//   Row 4: 4-3-1 = 0 spaces
//
// LOOP 2 - Climb UP (k loop):
//   Purpose: Print numbers going up
//   Formula: 1 to i+1
//
//   Row 1: 1
//   Row 2: 1 2
//   Row 3: 1 2 3
//   Row 4: 1 2 3 4
//
// LOOP 3 - Climb DOWN (l loop):
//   Purpose: Print numbers going down
//   Formula: i down to 1
//
//   Row 1: (nothing, i=0)
//   Row 2: 1
//   Row 3: 2 1
//   Row 4: 3 2 1
//
// ============================================
// 🎨 VISUAL STEP-BY-STEP (n=4)
// ============================================
//
// Step 1: Row 1 (i=0)
//   [   ] + [1] + [] = "   1"
//    ^^^    ^    ^
//    3      up   down
//   spaces
//
// Step 2: Row 2 (i=1)
//   [  ] + [12] + [1] = "  121"
//    ^^     ^^    ^
//    2      up    down
//   spaces
//
// Step 3: Row 3 (i=2)
//   [ ] + [123] + [21] = " 12321"
//    ^     ^^^    ^^
//    1     up     down
//   space
//
// Step 4: Row 4 (i=3)
//   [] + [1234] + [321] = "1234321"
//   ^     ^^^^    ^^^
//   no    up      down
//   space
//
// ============================================
// 🧮 THE MAGIC FORMULAS
// ============================================
//
// For row i (starting from 0):
//
// 1. Spaces = n - i - 1
//    (More spaces at top, less at bottom)
//
// 2. Numbers going UP = 1 to (i+1)
//    (More numbers as we go down)
//
// 3. Numbers going DOWN = i to 1
//    (Mirror of the UP numbers, minus the peak)
//
// ============================================
// 💡 WHY IT LOOKS LIKE A PYRAMID
// ============================================
//
// 1. SPACES DECREASE:
//    Top rows have more spaces → centered
//    Bottom rows have fewer spaces → wider
//
// 2. NUMBERS INCREASE:
//    Top row: just "1"
//    Bottom row: "1234321"
//
// 3. SYMMETRY:
//    Numbers go up (1→2→3→4)
//    Then mirror down (3→2→1)
//    Creates the pyramid shape!
//
// ============================================
// 🎯 REAL-WORLD ANALOGY
// ============================================
//
// Think of it like stacking blocks:
//
// Level 1:       [1]           (1 block)
// Level 2:     [1][2][1]       (3 blocks)
// Level 3:   [1][2][3][2][1]   (5 blocks)
// Level 4: [1][2][3][4][3][2][1] (7 blocks)
//
// Each level:
// - Has more blocks than the one above
// - Is centered (spaces on left)
// - Numbers climb up to the middle
// - Then climb back down
//
// ============================================
// 🔢 PATTERN IN NUMBERS
// ============================================
//
// Row 1: 1 number  (1)
// Row 2: 3 numbers (121)
// Row 3: 5 numbers (12321)
// Row 4: 7 numbers (1234321)
//
// Pattern: Each row has 2*i + 1 numbers!
//
// ============================================
// 🎓 KEY TAKEAWAYS
// ============================================
//
// 1. Three loops work together:
//    - Spaces (for centering)
//    - Up numbers (1, 2, 3...)
//    - Down numbers (3, 2, 1...)
//
// 2. As you go down rows:
//    - Spaces DECREASE
//    - Numbers INCREASE
//
// 3. The pattern is SYMMETRIC:
//    - Left side mirrors right side
//    - Creates the pyramid shape
//
// 4. It's like climbing a mountain:
//    - Go UP to the peak
//    - Come DOWN the other side
//
// ============================================
// 🚀 TRY IT YOURSELF
// ============================================
//
// Try with n=5:
//     1
//    121
//   12321
//  1234321
// 123454321
//
// Notice:
// - 5 rows total
// - Last row goes up to 5
// - Always symmetric!
//
// ============================================
