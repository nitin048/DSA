// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number : " << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << "*" << " ";
//         }
//         cout << endl;
//     }

//     return 0;
// }
// output
//  Enter a number :
//  5
//  *
//  * *
//  * * *
//  * * * *
//-----------------------------------
//  #include <iostream>
//  using namespace std;

// int main() {
//     int n;
//     cout << "enter a number" << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << 1 + i;
//         }
//         cout << endl;
//     }
//     return 0;
// }
// OutPut
// enter a number
// 4
// 1
// 22
// 333
// 4444
//---------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "enter a number" << endl;
//     cin >> n;
//     char ch = 'A';
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << ch << " ";
//         }
//         cout << endl;
//         ch = ch + 1;
//     }
//     return 0;
// }
// output
// enter a number
// 4
// A
// B B
// C C C
// D D D D
//---------------------------
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number : " << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << j+1 << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// Reverse Triangle //

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number : " << endl;
//     cin >> n;
//     for (int i = 0; i < n; i++) {
//         for (int j = i+1 ; j>0; j-- ) {
//             cout << j << " ";
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output
//  Enter a number :
//  5
//  1
//  2 1
//  3 2 1
//  4 3 2 1
//  5 4 3 2 1

//---------------------------

// floyd's triangle pattern

// #include <iostream>
// using namespace std;

// int main()
// {
//     int n;
//     int num = 1;
//     cout << "Enter a number : " << endl;
//     cin >> n;
//     cout  << endl;
//     for(int i = 0; i < n; i++)
//     {
//         for(int j = 0; j < i+1; j++)
//         {
//             cout << num ;
//             num++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output
//  Enter a number :
//  5

// 1
// 23
// 456
// 78910
// 1112131415
//-------------------------
// floyd's triangle pattern

// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     char ch = 'A';
//     cout << "Enter a number : " << endl;
//     cin >> n;
//     cout << endl;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < i + 1; j++) {
//             cout << ch;
//             ch++;
//         }
//         cout << endl;
//     }
//     return 0;
// }

// output
//  Enter a number :
//  4

// A
// BC
// DEF
// GHIJ
//-------------------------
// print characters in reverse order
// #include <iostream>
// using namespace std;

// int main() {
//     int n;
//     cout << "Enter a number : " << endl;
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         // Start from the last character for this row
//         char ch = 'A' + i;  // For row i, last char is 'A' + i

//         for (int j = i + 1; j > 0; j--) {
//             cout << ch;
//             ch--;  // Decrement to go backwards
//         }

//         cout << endl;
//     }
//     return 0;
// }

// output
//  Enter a number :
//  4
//  A
//  BA
//  CBA
//  DCBA
//=======================================//

// Inverted trinangle with char

#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    char ch = 'A';
    cout << "====================" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            cout << " ";
        }

        for (int j = 0; j < n - i; j++) {
            cout << ch;
        }
        ch = ch + 1;
        cout << endl;
    }
    return 0;
}

//output
// Enter a number: 6
// ====================
// AAAAAA
//  BBBBB
//   CCCC
//    DDD
//     EE
//      F
//-------------------------
// Explaination//

// Code:
//  for (int i = 1; i <= 5; i++) {      // ROW
//      for (int j = 1; j <= i; j++) {  // COLUMN (limited by i)
//          cout << "*";
//      }
//      cout << endl;
//  }

// Visual:
//          Column (j)
//          1  2  3  4  5
//        ┌──┬──┬──┬──┬──┐
//  Row 1 │ *│  │  │  │  │  ← i=1, j runs 1 to 1
//  (i)   ├──┼──┼──┼──┼──┤
//      2 │ *│ *│  │  │  │  ← i=2, j runs 1 to 2
//        ├──┼──┼──┼──┼──┤
//      3 │ *│ *│ *│  │  │  ← i=3, j runs 1 to 3
//        ├──┼──┼──┼──┼──┤
//      4 │ *│ *│ *│ *│  │  ← i=4, j runs 1 to 4
//        ├──┼──┼──┼──┼──┤
//      5 │ *│ *│ *│ *│ *│  ← i=5, j runs 1 to 5
//        └──┴──┴──┴──┴──┘

// Output:
//  *
//  * *
//  * * *
//  * * * *
//  * * * * *
