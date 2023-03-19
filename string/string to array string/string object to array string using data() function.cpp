// CPP code to illustrate
// std::string::data()

#include <iostream>
#include <string>
#include <cstring>
using namespace std;

// Function to demonstrate data()
void dataDemo(string str1)
{
	// Converts str1 to str2 without appending
	// '/0' at the end
	const char* str2;
	str2 = str1.data(); //here due to this data() this char is const so we have to declare str2 as const because if we dont do that than conversion of const char* to char* is not possible
	
	cout << "Content of transformed string : ";
	cout << str2 << endl;

	cout << "After data(), length: ";
	cout << strlen(str2);
	
	
}
		
// Driver code
int main()
{
	string str("GeeksforGeeks");

	cout << "Content of Original String : ";
	cout << str << endl;
	cout << "Length of original String : ";
	
	cout << str.size() << endl;
	
	dataDemo(str);

	return 0;
}
