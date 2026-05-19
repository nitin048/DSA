#include <iostream>
using namespace std;

int main()
{
    double a, b;
    int c ; 
    cout << "***Welcome to Simple Calculator***" << endl;
    cout << "Enter 1st number: ";
    cin >> a;
    cout << "Enter 2nd number: ";
    cin >> b;
    cout << "\nWhich operation you want to perform?" << endl;
    cout << "1. ADD" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "Enter your choice (1-4): ";
    cin >> c;  // Read the user's choice
    
    switch(c)  // Switch on the value of c
    {
        case 1:  // Just the constant value, not assignment
        {
            double sum = a + b;
            cout << "The value is: " << sum << endl;
            break;
        }
        
        case 2:
        {
            double diff = a - b;
            cout << "The value is: " << diff << endl;
            break;
        }
        
        case 3:
        {
            double product = a * b;
            cout << "The value is: " << product << endl;
            break;
        }
        
        case 4:
        {
            if(b != 0)
            {
                double quotient = a / b;
                cout << "The value is: " << quotient << endl;
            }
            else
            {
                cout << "Error: Division by zero!" << endl;
            }
            break;
        }
        
        default:
            cout << "Invalid choice! Please enter a number between 1-4." << endl;
            break;
    }
    
    return 0;
}
//g++ calculator.cpp && ./a.out