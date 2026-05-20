#include <iostream>
using namespace std;

int main() {
    int x;
    cout << "Enter the number" << endl;
    cin >> x;
    for (int i = 1; i <= x; i++)  // ye loop 5 times itirate krega
    {
        int k = 10;
        for (int j = 1; j <= k;
             j++)  // ye loop in every external loop will print k=10 "x" in each line
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}