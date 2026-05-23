// ============================================
// INVERTED TRIANGLE PATTERN
// ============================================
// Pattern: Numbers decrease from left to right
// Each row has increasing spaces and decreasing numbers
//
// Example (n=4):
// 1111
//  222
//   33
//    4
// ============================================

#include <iostream>
using namespace std;

int main() {
    int n;

    // Get input from user
    cout << "Enter a number: " << endl;
    cin >> n;

    cout << "---------------" << endl;

    // Outer loop: Controls rows (0 to n-1)
    // i = 0: Row 1 (0 spaces, n numbers)
    // i = 1: Row 2 (1 space, n-1 numbers)
    // i = 2: Row 3 (2 spaces, n-2 numbers)
    // i = 3: Row 4 (3 spaces, n-3 numbers)
    for (int i = 0; i < n; i++) {
        // Inner loop 1: Print leading spaces
        // Number of spaces = i
        // Row 0: 0 spaces
        // Row 1: 1 space
        // Row 2: 2 spaces
        // Row 3: 3 spaces
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        // Inner loop 2: Print numbers
        // Number of digits = n - i
        // Row 0: 4 numbers (1111)
        // Row 1: 3 numbers (222)
        // Row 2: 2 numbers (33)
        // Row 3: 1 number (4)
        // Print current row number (i+1)
        for (int j = 0; j < n - i; j++) {
            cout << i + 1;  // i+1 because i starts from 0
        }

        // Move to next line after each row
        cout << endl;
    }

    cout << "----------------" << endl;

    return 0;
}

// ============================================
// STEP-BY-STEP EXECUTION (n=4):
// ============================================
//
// Row 0 (i=0):
//   Spaces: 0 (j=0 to 0-1, no iteration)
//   Numbers: 4 times (j=0 to 3), print "1"
//   Output: 1111
//
// Row 1 (i=1):
//   Spaces: 1 (j=0 to 0), print " "
//   Numbers: 3 times (j=0 to 2), print "2"
//   Output:  222
//
// Row 2 (i=2):
//   Spaces: 2 (j=0 to 1), print "  "
//   Numbers: 2 times (j=0 to 1), print "3"
//   Output:   33
//
// Row 3 (i=3):
//   Spaces: 3 (j=0 to 2), print "   "
//   Numbers: 1 time (j=0 to 0), print "4"
//   Output:    4
//
// ============================================
// PATTERN LOGIC:
// ============================================
//
// For each row i (0 to n-1):
//   1. Print i spaces (creates right alignment)
//   2. Print (n-i) copies of number (i+1)
//   3. Move to next line
//
// Key Formula:
//   Spaces in row i = i
//   Numbers in row i = n - i
//   Number to print = i + 1
//
// ============================================
// WHY IT WORKS:
// ============================================
//
// As i increases:
//   • Spaces increase (0, 1, 2, 3...)
//   • Numbers decrease (4, 3, 2, 1...)
//   • This creates the inverted triangle effect
//
// The pattern "inverts" because:
//   • First row has most numbers, no spaces
//   • Last row has least numbers, most spaces
//
// ============================================

// output
//  Entera a number :
//  4
//  ---------------
//  1111
//   222
//    33
//     4
//  ----------------
