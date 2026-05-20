// Print Factorial of a number n
#include <iostream>
using namespace std;

int main() {
    int n;
    int factorial = 1;
    cout << "Enter a number to check factorial of it " << endl;
    cin >> n;
    for(int i = 1; i <=n; i++)
    {
        factorial = factorial*i;
    }
    cout << "Factorial is : "<<factorial << endl;
    return 0;
}