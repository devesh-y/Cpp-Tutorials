// C++ code for illustration of
// basic_string::c_str function
#include <bits/stdc++.h>
#include<iostream>
#include <string>
using namespace std;

int main()
{
	// declare a example string
	string s1 = "devesh";
	

	// check if the size of the string is same as the
	// size of character pointer given by c_str
	if (s1.size() == strlen(s1.c_str())) {
		cout << "s1.size is equal to strlen(s1.c_str()) " << endl;
	}
	else {
		cout << "s1.size is not equal to strlen(s1.c_str())" << endl;
	}
	//we have to clear the concept of constant string and constant pointer
	const char *p;//it means pointer to a const char you have to use const unless it will not work
	p=s1.c_str();
	cout<<sizeof(p)<<endl;
	// print the string
	cout<<s1.c_str()<<endl;
	cout<<sizeof(s1.c_str())<<endl;
	cout<<strlen(s1.c_str());
}
