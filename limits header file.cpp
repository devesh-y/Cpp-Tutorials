// C++ program to illustrate the
// function numeric_limits<T>::max
#include <iostream>
#include <limits>
using namespace std;

// Driver Code
int main()
{
	cout << "bool: "
		<< numeric_limits<bool>::max()
		<< '\n';

	// It returns 127 in ASCII value
	// to print in integer that can
	// be typecast it to int()
	cout << "char: "
		<< int(numeric_limits<char>::max())
		<< '\n';

	cout << "unsigned char: "
		<< int(numeric_limits<unsigned char>::max())
		<< '\n';

	cout << "short: "
		<< numeric_limits<short>::max()
		<< '\n';

	cout << "int: " << numeric_limits<int>::max()
		<< '\n';

	cout << "unsigned int: "
		<< numeric_limits<unsigned int>::max()
		<< '\n';

	cout << "long long: "
		<< numeric_limits<long long>::max()
		<< '\n';

	cout << "float: "
		<< numeric_limits<float>::max()
		<< '\n';

	cout << "double: "
		<< numeric_limits<double>::max()
		<< '\n';

	cout << "size_t: "
		<< numeric_limits<size_t>::max()
		<< '\n';
    cout << "bool: "
        << numeric_limits<bool>::min()
        << '\n';

    cout << "char: "
         << int(numeric_limits<char>::min())
         << '\n';
  
    cout << "unsigned char: "
         << int(numeric_limits<unsigned char>::min())
         << '\n';
  
    cout << "short: "
         << numeric_limits<short>::min() << '\n';
  
    cout << "int: " << std::numeric_limits<int>::min()
         << '\n';
    cout << "unsigned int: "
         << numeric_limits<unsigned int>::min()
         << '\n';
  
    cout << "long long: "
         << numeric_limits<long long>::min()
         << '\n';
    cout << "float: "
         << numeric_limits<float>::min()
         << '\n';
  
    cout << "double: "
         << numeric_limits<double>::min()
         << '\n';
  
    cout << "size_t: "
         << numeric_limits<size_t>::min()
         << '\n';
}
