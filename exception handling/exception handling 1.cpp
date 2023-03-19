// Program to depict how to handle
// divide by zero exception

#include <iostream>
#include <stdexcept> // To use runtime_error
using namespace std;

// Defining function Division
float Division(float num, float den)
{
	// If denominator is Zero
	// throw runtime_error
	if (den == 0) {
		throw runtime_error("Math error: Attempted to divide by Zero\n");
	}

	// Otherwise return the result of division
	return (num / den);

} // end Division

int main()
{
	float numerator, denominator, result;
	numerator = 12.5;
	denominator = 0;

	// try block calls the Division function
	try {
		result = Division(numerator, denominator);

		// this will not print in this example
		cout << "The quotient is "
			<< result << endl;
	}

	// catch block catches exception thrown
	// by the Division function
	catch (runtime_error& e) {    //for runtime error only, a subclass of exception

		// prints that exception has occurred
		// calls the what function
		// using runtime_error object
		cout << "Exception occurred" << endl
			<< e.what();
	}
	catch (exception& e) {     //for  exception class

		// prints that exception has occurred
		// calls the what function
		// using runtime_error object
		cout << "Exception occurred" << endl
			<< e.what();
	}
	catch(...){       //for any other exception, other than exception class also

	}

} // end main
