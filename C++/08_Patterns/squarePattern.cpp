// Square patterns with a n number
//  #include <iostream>
//  using namespace std;

// int main()
// {
//     int n;
//     cout << "Enter your number" << endl;
//     cin >> n;
//     for(int i = 1; i <= n; i++)//outer
//     {
//         for(int j = 1; j <= n; j++)//inner
//         {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//-------------------------------------

// Square patterns with *

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter your number" << endl;
//     cin >> n;
//     for (int i = 1; i <= n; i++) {
//         for (int j = 1; j <= n; j++) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

//-------------------------------------

// Square patterns with Char

// #include <iostream>
// using namespace std;

// int main() {
//     int n;

//     cout << "Enter your number" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         char ch = 'A';
//         for (int j = 0; j < n; j++)  // inner loop is line start
//         {
//             cout << ch << " ";
//             ch = ch + 1;
//         }
//         cout << endl;
//     }
//     return 0;
// }

//-------------------------------------

// Square patterns with numbers

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     int num = 1;
//     cout << "Enter your number" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < n; j++) {
//             cout << num << " ";
//             num++;
//         }
//         cout << endl;
//     }
//     cout << "after pattern end value of num is : " << num << endl;
//     return 0;
// }

// output:
// Enter your number 3 
// 1 2 3
// 4 5 6 
// 7 8 9 
// after pattern end value of num is : 10

//----------------------------------------------------
    // Square patterns with char

#include <iostream>
using namespace std;

int main()
{
        int n;
        char ch = 'A';
        cout << "Enter your number" << endl;
        cin >> n;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < n; j++)
            {
                cout << ch << " ";
                ch = ch+1;
            }
            cout << endl;
        }
    

    return 0;
}