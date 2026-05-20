//Sum of numbers from 1 to n
#include <iostream>
using namespace std;

int main()
{
    int n;
    int sum = 0;
    cout << "Enter a number to check sum of it from 1 to n" << endl;
    cin >> n;
    cout <<"----------"<< endl;
    for(int i = 1; i <= n; i++)
    {
        sum += i;
    }
    cout << "Sum of "<< n <<" = "<<sum << endl;
    cout << "----------" << endl;
    return 0;
}