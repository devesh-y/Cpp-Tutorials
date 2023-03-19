// CPP program to convert string
// to char array
#include <iostream>
#include <cstring>

using namespace std;

// driver code
int main()
{
	// assigning value to string s
	string st = "GeeksForGeeks";
	//the c_str() function returns a const pointer
	//to null terminated contents.
	const char *str = st.c_str();
	//printing the char array
	cout << str;
    cout<<endl<<sizeof(str);
	return 0;
}
