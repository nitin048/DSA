#include <iostream>
using namespace std;

int main() {
    //-------------------------------//
    // This in to forloop
    // int n;
    // int sum = 0;
    // cout << "Enter the number" << endl;
    // cin >> n;

    // for(int i = 1; i <= n; i++)
    // {
    //     if (i % 2 != 0) {
    //         sum += i;
    //     }
    //     else {
    //     cout << "Enter only odd number eg:1,3,5... " << endl;
    //     break;
    //     }
    // }
    //-------------------------------//
    // This in to while
    int i = 1;
    int sum1 = 0;
    int num;
    cout << "Enter the number" << endl;
    cin >> num;
    while (i <= num) {
        if (i % 2 != 0) {
            sum1 += i;
        }
        i++;
    }
    // cout << "sum : "<< sum << endl;
    cout << "sum : " << sum1 << endl;
    return 0;
}