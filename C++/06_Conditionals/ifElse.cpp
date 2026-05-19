// A person is eligible to vote or not
// #include <iostream>
// using namespace std;

// int main()
// {
// 	int a;
// 	cout << "What is your current age ? " << endl;
// 	cin >> a;

// 	if(a >= 18 && a<=80)
// 	{
// 		cout << "Your are eligible for Vote." << endl << "hurray🥳" << endl;
// 	}
// 	else 
// 	{
// 		cout << "Your are not eligible for Vote."<< endl;
// 	}
// 	return 0;
// }

//----------------------------------------------------------------------//
// Odd & Even checker
#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Odd & Even checker" << endl;
	cout << "Enter a number : " << endl;
	cin >> n;
	if(n%2 == 0)
	{
		cout << "This is an even number" << endl;
	}
	else
	{
		cout << "This is an odd number" << endl;
	}
	return 0;
}