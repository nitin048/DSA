// Check if a number is Prime or not

#include <iostream>
using namespace std;

int main() {
    int n;
    bool isPrime = true;
    cout << "Enter a number to check if it is prime or no. " << endl;
    cin >> n;
   // for (int i = 2; i <= n - 1; i++) {
        for (int i = 2; i*i <= n; i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime == true) {
            cout << n << " is prime number" << endl;
        } else {
            cout << n << " is non-prime number" << endl;
        }
        return 0;
    }