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
//         char ch = 'A';  // This variable is to reset the char from outter loop in every itiration and inner loop get reset char value
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

int main() {
    int n;
    char ch = 'A';
    cout << "Enter your number" << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << ch << " ";
            ch = ch + 1;
        }
        cout << endl;
    }

    return 0;
}

// Explaination //
// For n = 5:
// Visual Representation

//         Column (j)
//         1  2  3  4  5
//       ┌──┬──┬──┬──┬──┐
// Row 1 │ 1│ 2│ 3│ 4│ 5│  ← i = 1
// (i)   ├──┼──┼──┼──┼──┤
//     2 │ 1│ 2│ 3│ 4│ 5│  ← i = 2
//       ├──┼──┼──┼──┼──┤
//     3 │ 1│ 2│ 3│ 4│ 5│  ← i = 3
//       ├──┼──┼──┼──┼──┤
//     4 │ 1│ 2│ 3│ 4│ 5│  ← i = 4
//       ├──┼──┼──┼──┼──┤
//     5 │ 1│ 2│ 3│ 4│ 5│  ← i = 5
//       └──┴──┴──┴──┴──┘

//code:

// for (int i = 1; i <= 5; i++) {      // Outer loop: ROW
//     for (int j = 1; j <= 5; j++) {  // Inner loop: COLUMN
//         cout << j;
//     }
//     cout << endl;
// }

// Execution Flow:

//  i=1 (Row 1):
//    j=1 → print 1
//    j=2 → print 2
//    j=3 → print 3
//    j=4 → print 4
//    j=5 → print 5
//    endl → new line

// i=2 (Row 2):
//   j=1 → print 1
//   j=2 → print 2
//   j=3 → print 3
//   j=4 → print 4
//   j=5 → print 5
//   endl → new line

// ... (continues for i=3,4,5)
