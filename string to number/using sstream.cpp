// A program to demonstrate the use of stringstream
#include <iostream>
#include <sstream>
using namespace std;

int main()
{
	string s = "145.5";

	// object from the class stringstream
	stringstream devesh(s);

	// The object has the value 145 and stream
	// it to the integer x
	int x = 0;
	devesh >> x;    //taking input from strings

	// Now the variable x holds the value 145
	cout << "Value of x : " << x;

	return 0;
}
