#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "what is you marks?" << endl;
    cin >> a;
    if (a >= 90) {
        cout << "You got A grade" << endl;
    } else if (a >= 80 && a < 90) {
        cout << "You got B grade" << endl;
    } else if (a < 80 && a >= 60) {
        cout << "You got C grade" << endl;

    } else {
        cout << "You got D grade" << endl;
    }
    return 0;
}
