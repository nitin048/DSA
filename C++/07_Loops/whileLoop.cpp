// Include the iostream library for input/output operations (cin, cout)
#include <iostream>

// Use the standard namespace to avoid writing std:: before cout, cin, etc.
using namespace std;

// Main function - the entry point of the program
int main() {
    // Declare and initialize a variable 'count' with value 1
    // This variable will be used as a counter in the while loop
    int count = 1;
    
    // While loop: Repeats as long as the condition (count <= 500) is true
    // The condition is checked BEFORE each iteration
    // If count is greater than 500, the loop stops
    while (count <= 500) {
        // Print the current value of count followed by a space
        // This will print: 1 2 3 4 5 ... 499 500
        cout << count << " ";

        // Increment count by 1 (count = count + 1)
        // This is CRUCIAL - without this, the loop would run forever (infinite loop)
        // After this, count increases: 1 → 2 → 3 → 4 → ... → 500
        count++;
    }
    cout << endl;

    // Return 0 to indicate the program executed successfully
    // This tells the operating system that there were no errors
    return 0;
}

// ==================== HOW THIS PROGRAM WORKS ====================
//
// Step-by-step execution:
//
// 1. count = 1
//    Check: 1 <= 500? YES → Enter loop
//    Print: 1
//    Increment: count = 2
//
// 2. count = 2
//    Check: 2 <= 500? YES → Continue loop
//    Print: 2
//    Increment: count = 3
//
// 3. count = 3
//    Check: 3 <= 500? YES → Continue loop
//    Print: 3
//    Increment: count = 4
//
// ... (this continues) ...
//
// 499. count = 499
//      Check: 499 <= 500? YES → Continue loop
//      Print: 499
//      Increment: count = 500
//
// 500. count = 500
//      Check: 500 <= 500? YES → Continue loop
//      Print: 500
//      Increment: count = 501
//
// 501. count = 501
//      Check: 501 <= 500? NO → Exit loop
//
// Program ends, returns 0
//
// ==================== OUTPUT ====================
// 1 2 3 4 5 6 7 8 9 10 11 12 ... 498 499 500
//
// ==================== KEY POINTS ====================
//
// 1. INITIALIZATION: count = 1 (done before the loop)
// 2. CONDITION: count <= 500 (checked before each iteration)
// 3. BODY: cout << count << " "; (executed if condition is true)
// 4. INCREMENT: count++; (updates the counter)
// 5. REPEAT: Go back to step 2
//
// ==================== COMMON MISTAKES ====================
//
// ❌ Forgetting to increment count:
//    while (count <= 500) {
//        cout << count << " ";
//        // Missing: count++;
//    }
//    Result: Infinite loop! Prints "1 1 1 1 1..." forever
//
// ❌ Wrong condition:
//    while (count >= 500) {  // Wrong operator
//        cout << count << " ";
//        count++;
//    }
//    Result: Loop never executes (1 >= 500 is false)
//
// ❌ Incrementing before printing:
//    while (count <= 500) {
//        count++;
//        cout << count << " ";
//    }
//    Result: Prints 2 to 501 instead of 1 to 500
//
// ==================== VARIATIONS ====================
//
// Print only even numbers (2, 4, 6, ... 500):
//    int count = 2;
//    while (count <= 500) {
//        cout << count << " ";
//        count += 2;  // Increment by 2
//    }
//
// Print in reverse (500, 499, 498, ... 1):
//    int count = 500;
//    while (count >= 1) {
//        cout << count << " ";
//        count--;  // Decrement
//    }
//
// Print with sum:
//    int count = 1;
//    int sum = 0;
//    while (count <= 500) {
//        sum += count;
//        cout << count << " ";
//        count++;
//    }
//    cout << "\nSum: " << sum;  // Sum = 125250