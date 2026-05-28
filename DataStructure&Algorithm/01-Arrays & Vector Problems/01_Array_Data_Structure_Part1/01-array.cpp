// Arrays in DSA

#include <iostream>
using namespace std;

int main() {
    int mark[] = {22, 33, 55, 66, 77, 88, 99, 100};

    cout << mark[0] << endl;
    cout << mark[1] << endl;
    cout << mark[2] << endl;
    cout << mark[3] << endl;
    cout << mark[4] << endl;
    cout << mark[5] << endl;
    cout << "--------------------------" << endl;
    // int sz = sizeof(mark) / sizeof(int);
    int size;
    cout << "ENTER A SIZE OF AN ARRAY : " << endl;
    cin >> size;
    int hello[size];
    cout << "Enter a number " << size << " times : " << endl;
    for (int i = 0; i < size; i++) {
        cin >> hello[i];
    }
    for (int i = 0; i < size; i++) {
        cout << "This is coming from hello array : " << hello[i] << endl;
    }
    return 0;
}