#include<iostream>
using namespace std;
#include<string>
int main()
{
    string s("dgfhfghg");
    cout<<s.capacity();
    cout<<"\n"<<s.length()<<"\n";
    s="sfkjdsffffffffffsdfdfdfdfdfdfdfdfdfdf";
    cout<<s.capacity();//it will not increase in the power of 2 it is by default 15 if character-total are 15 then it will increase non defined function
    cout<<"\n"<<s.size()<<"\n";
    s.reserve(40);//it will allocate more memory for the string but it will not be accurate 
    cout<<s.capacity();
    cout<<"\n"<<s.length();
    s.resize(50);
    cout<<"\n"<<s.size();
    cout<<"\nmax size of string is: "<<s.max_size();
}