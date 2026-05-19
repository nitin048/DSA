#include <iostream>
using namespace std;

int main()
{
    cout << !(3>1) << endl; // fasle -> 0
    cout << !(3<1) << endl; // true -> 1
    cout << (3<5)&&(2<5) << endl;// true
    cout << (3<5)&&(2>5) << endl;// false
    cout << (3<5)||(2>5) << endl;// false
    cout << (3<5)||(2<5) << endl;// true
    
    return 0;
}

//Logical operator : OR (||) , AND (&&) , NOT (!)