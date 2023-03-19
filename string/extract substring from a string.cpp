#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;
int main()
{
    string s1("hello");
    
    cout<<s1.substr(0,3);
    cout<<"\n"<<s1.substr(2);//from index 2 to last
}