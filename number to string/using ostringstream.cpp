#include<iostream>
#include <sstream> // for string streams
#include <string> // for string
using namespace std;
int main()
{
	float num = 2016.56;

	// declaring output string stream
	ostringstream str1;

	// Sending a number as a stream into output
	// string
	str1 << num;

	// the str() converts number into string
	string devesh = str1.str();

	// Displaying the string
	cout << "The newly formed string from number is : ";
	cout << devesh << endl;

	return 0;
}
