// CPP program to convert string
// to char array
#include <iostream>
#include <string>

using namespace std;

// driver code
int main()
{
	// assigning value to string s
	string s("geeksforgeeks");
	// declaring character array : p
	char p[s.length()];
    cout<<"size of p is: "<<sizeof(p)<<endl;

	int i;
	for (i = 0; i < sizeof(p); i++) 
	{
		p[i] = s[i];
		cout << p[i];
	}
	return 0;
}
