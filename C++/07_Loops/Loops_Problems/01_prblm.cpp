// Input a number and print 1 to n

#include <iostream>
using namespace std;

int main() {
    int i = 1;
    int n;
    cout << "Please enter a number you want to print 1 to n " << endl;
    cin >> n;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
    cout << endl;
    return 0;
}