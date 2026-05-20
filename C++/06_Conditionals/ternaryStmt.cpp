// ==================== TERNARY OPERATOR IN C++ ====================
// The ternary operator is a shorthand for if-else statements
// Syntax: condition ? expression_if_true : expression_if_false
// It's called "ternary" because it takes three operands

#include <iostream>
using namespace std;

int main() {
    // ==================== BASIC TERNARY OPERATOR ====================
    // Instead of writing:
    // if (condition) { result = value1; } else { result = value2; }
    // We can write: result = condition ? value1 : value2;

    int age = 20;

    // Traditional if-else
    string status1;
    if (age >= 18) {
        status1 = "Adult";
    } else {
        status1 = "Minor";
    }
    cout << "Using if-else: " << status1 << endl;

    // Same logic using ternary operator (more concise)
    string status2 = (age >= 18) ? "Adult" : "Minor";
    cout << "Using ternary: " << status2 << endl;

    // ==================== TERNARY WITH NUMBERS ====================
    int a = 10, b = 20;

    // Find maximum of two numbers
    int max = (a > b) ? a : b;
    cout << "Maximum of " << a << " and " << b << " is: " << max << endl;

    // Find minimum of two numbers
    int min = (a < b) ? a : b;
    cout << "Minimum of " << a << " and " << b << " is: " << min << endl;

    // ==================== TERNARY IN OUTPUT STATEMENTS ====================
    // You can use ternary operator directly in cout
    int marks = 75;
    cout << "Result: " << (marks >= 50 ? "Pass" : "Fail") << endl;

    int num = 7;
    cout << num << " is " << (num % 2 == 0 ? "Even" : "Odd") << endl;

    // ==================== NESTED TERNARY OPERATOR ====================
    // You can nest ternary operators (but it reduces readability)
    // Syntax: condition1 ? value1 : (condition2 ? value2 : value3)

    int score = 85;

    // Traditional nested if-else
    string grade1;
    if (score >= 90) {
        grade1 = "A";
    } else if (score >= 80) {
        grade1 = "B";
    } else if (score >= 70) {
        grade1 = "C";
    } else {
        grade1 = "F";
    }
    cout << "Grade (if-else): " << grade1 << endl;

    // Same logic using nested ternary (less readable but more compact)
    string grade2 = (score >= 90) ? "A" : (score >= 80) ? "B" : (score >= 70) ? "C" : "F";
    cout << "Grade (ternary): " << grade2 << endl;

    // ==================== TERNARY WITH ARITHMETIC ====================
    int x = 5, y = 10;

    // Apply different operations based on condition
    int result = (x > y) ? (x + y) : (x * y);
    cout << "Result: " << result << endl;  // Output: 50 (5 * 10)

    // Absolute value using ternary
    int number = -15;
    int absolute = (number < 0) ? -number : number;
    cout << "Absolute value of " << number << " is: " << absolute << endl;

    // ==================== TERNARY FOR ASSIGNMENT ====================
    bool isLoggedIn = true;

    // Assign different values based on condition
    string message = isLoggedIn ? "Welcome back!" : "Please login";
    cout << message << endl;

    // Discount calculation
    double price = 100.0;
    bool isMember = true;
    double finalPrice = isMember ? (price * 0.9) : price;  // 10% discount for members
    cout << "Final price: $" << finalPrice << endl;

    // ==================== TERNARY WITH MULTIPLE CONDITIONS ====================
    // Using logical operators with ternary
    int age2 = 25;
    bool hasLicense = true;

    string canDrive = (age2 >= 18 && hasLicense) ? "Can drive" : "Cannot drive";
    cout << canDrive << endl;

    // Check if number is in range
    int value = 50;
    string inRange = (value >= 1 && value <= 100) ? "In range" : "Out of range";
    cout << value << " is " << inRange << endl;

    // ==================== TERNARY VS IF-ELSE ====================
    // When to use ternary:
    // ✅ Simple conditions with single assignment
    // ✅ Short expressions
    // ✅ When you want concise code

    // When to use if-else:
    // ✅ Complex conditions
    // ✅ Multiple statements to execute
    // ✅ When readability is more important

    // ==================== PRACTICAL EXAMPLES ====================

    // Example 1: Check voting eligibility
    int voterAge = 17;
    cout << (voterAge >= 18 ? "Eligible to vote" : "Not eligible to vote") << endl;

    // Example 2: Temperature check
    int temp = 30;
    cout << "Weather is " << (temp > 25 ? "Hot" : "Cold") << endl;

    // Example 3: Sign of a number
    int n = -5;
    string sign = (n > 0) ? "Positive" : (n < 0) ? "Negative" : "Zero";
    cout << n << " is " << sign << endl;

    // Example 4: Leap year check (simplified)
    int year = 2024;
    string leapYear = (year % 4 == 0) ? "Leap year" : "Not a leap year";
    cout << year << " is " << leapYear << endl;

    // Example 5: Character type check
    char ch = 'A';
    string charType = (ch >= 'A' && ch <= 'Z')   ? "Uppercase"
                      : (ch >= 'a' && ch <= 'z') ? "Lowercase"
                                                 : "Not a letter";
    cout << ch << " is " << charType << endl;

    // Example 6: find the number is greater then -45
    int nums;

    cout << (n >= 0 ? "positive" : "negetive") << endl;

    // ==================== IMPORTANT NOTES ====================
    // 1. Ternary operator returns a value (unlike if-else which is a statement)
    // 2. Both expressions (true and false parts) must return the same type
    // 3. Parentheses around condition are optional but recommended for clarity
    // 4. Avoid deeply nested ternary operators - they reduce readability
    // 5. Ternary operator has right-to-left associativity

    // ==================== COMMON MISTAKES ====================

    // ❌ Wrong: Different return types
    // int result = (true) ? 10 : "Hello";  // Error: incompatible types

    // ❌ Wrong: Multiple statements
    // int result = (true) ? (x++; y++) : z++;  // Error: can't have multiple statements

    // ✅ Correct: Same return types
    int correctResult = (true) ? 10 : 20;  // Both are integers

    // ✅ Correct: Single expression
    int val = (true) ? (x + y) : x;  // Single expression with operation

    cout << "\n==================== SUMMARY ====================" << endl;
    cout << "Ternary Operator: condition ? true_value : false_value" << endl;
    cout << "✅ Concise alternative to simple if-else" << endl;
    cout << "✅ Returns a value (can be used in expressions)" << endl;
    cout << "✅ Best for simple conditions and assignments" << endl;
    cout << "⚠️  Avoid deep nesting (reduces readability)" << endl;
    cout << "⚠️  Both branches must return same type" << endl;

    return 0;
}

// ==================== SYNTAX BREAKDOWN ====================
// condition ? expression_if_true : expression_if_false
//    ↓              ↓                      ↓
// Boolean      Executed if          Executed if
// expression   condition is true    condition is false

// ==================== COMPARISON ====================
// IF-ELSE (4 lines):
// if (x > y)
//     max = x;
// else
//     max = y;

// TERNARY (1 line):
// max = (x > y) ? x : y;