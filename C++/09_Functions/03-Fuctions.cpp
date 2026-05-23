// Calculate sum of digits of a number

#include <iostream>
using namespace std;

int sumOfDigits(int n) {
    int sum = 0;
    while (n > 0) {
        int lastDigit = n % 10;//this will give ne remainder
        n /= 10;// this will give me quisent
        sum += lastDigit;
    }
    return sum;
}

int main() {
    int n;
    cout << "Enter a number : " << endl;
    cin >> n;
    cout << "Sum : " << sumOfDigits(n) << endl;
    return 0;
}

/*
 * EXPLANATION:
 *
 * This program calculates the sum of all digits in a given number.
 *
 * Algorithm:
 * 1. Extract the last digit using modulo operator (n % 10)
 * 2. Add the last digit to the running sum
 * 3. Remove the last digit by integer division (n /= 10)
 * 4. Repeat until all digits are processed (n becomes 0)
 *
 * Example: For n = 1234
 * - Iteration 1: lastDigit = 4, sum = 4, n = 123
 * - Iteration 2: lastDigit = 3, sum = 7, n = 12
 * - Iteration 3: lastDigit = 2, sum = 9, n = 1
 * - Iteration 4: lastDigit = 1, sum = 10, n = 0
 * - Result: 10
 *
 * Time Complexity: O(d) where d is the number of digits
 * Space Complexity: O(1) - constant space
 */
