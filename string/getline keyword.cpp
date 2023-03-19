#include<iostream>
#include<string.h>
using namespace std;
int main()
{   
    string fullname;//this also work like cin.get but it is used only for standard string(means of strinf keyword)
    //it enables string with spaces
    getline(cin,fullname);
    cout<<fullname;
    //and also for multiple lines use it as getline(cin,string name,letter to terminate);
}