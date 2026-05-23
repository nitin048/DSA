//Calclate nCr binomial coefficient for n & r

#include <iostream>
using namespace std;

int nCr (int n,int r)
{
    int factorial = 1;
    int fact = 1;
    int x = 0;
    for (int i = 0; i < n; i++) {
        factorial = factorial * i;
    }
    for(int j = 0; j < r; j++)
    {
        fact = fact*j;
    }
    x = factorial/(fact*(factorial-fact));
    return x;
}

int main()
{
    int n;
    int r;
    cout << "Enter N & R values" << endl;
    cout << "-------------------------" << endl;
    cin >> n;
    cin >> r;
    cout << "Factorial is : "<< nCr( n, r) << endl;
    return 0;
}