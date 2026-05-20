// Checking grade with marks

// #include <iostream>
// using namespace std;

// int main() {
//     int a;
//     cout << "what is you marks?" << endl;
//     cin >> a;
//     if (a >= 90) {
//         cout << "You got A grade" << endl;
//     } else if (a >= 80 && a < 90) {
//         cout << "You got B grade" << endl;
//     } else if (a < 80 && a >= 60) {
//         cout << "You got C grade" << endl;

//     } else {
//         cout << "You got D grade" << endl;
//     }
//     return 0;
// }


//------------------------------------------------//

// Checking char Is lowercase or Uppercase by comparing the char

//  #include <iostream>
//  using namespace std;

// int main()
// {
//     char ch;
//     cout << "Enter a char b/w a-z or A-Z" << endl;
//     cin >> ch;
//     if((ch >='a')&&(ch<='z'))
//     {
//         cout << "lowercase" << endl;
//     }
//     else {
//     cout << "UPPERCASE" << endl;
//     }
//     return 0;
// }

//------------------------------------------------//

//Checking char Is lowercase or Uppercase with ASCII

#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a char b/w a-z or A-Z" << endl;
    cin >> ch;
    if ((ch >= 65) && (ch <= 90)) {
       
        cout << "UPPERCASE" << endl;
    } else {
        cout << "lowercase" << endl;
    }
    return 0;
}

// g++ if_else_if.cpp && ./a.out