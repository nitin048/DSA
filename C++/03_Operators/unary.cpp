#include <iostream>
using namespace std;

int main()
{
    //(Incriment ++)

    int a = 10;
    int b = a++;//phele kaam phir update (post-Incriment operator)
    cout << "b = "<< b << endl;//b = 10;
    cout << "a = "<< a << endl;//a = 11;
   -------------------------------------
    int a = 10;
    int b = ++a;//phele update phir kaam(pre-Incriment operator)
    cout << "b = "<< b << endl;//b = 11;
    cout << "a = "<< a << endl;//a = 11;
   
    -------------------------------------
    //(Decrement --)

    int a = 10;
    int b = a--;//phele kaam phir update (post-Decrement operator)
    cout << "b = "<< b << endl;//b = 10;
    cout << "a = "<< a << endl;//a = 9;
   -------------------------------------
    int a = 10;
    int b = --a;//phele update phir kaam(pre-Decrement operator)
    cout << "b = "<< b << endl;//b = 9;
    cout << "a = "<< a << endl;//a = 9;
    return 0;
}


//1:Incriment ++
//  a = a+1 => a++;
//  a++ or ++a 
//2:Decrement --
//a = a-1 => a--;
//  a-- or --a 


//Use of unary operator come in loops