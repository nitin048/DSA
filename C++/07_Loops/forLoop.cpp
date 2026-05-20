// Simple Table genrator with forloop
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a num to genarate a tab9le of it : " << endl;
    cin >> n;
    for (int i = 1; i <= 10; i++) {
        cout << " | " << i << " * " << i << " = " << (i * n) << " | " << endl;
    }
    cout << endl;
    return 0;
}