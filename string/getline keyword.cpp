#include<bits/stdc++.h>
using namespace std;
int main()
{   
    string fullname;//this also work like cin.get but it is used only for standard string(means of strinf keyword)
    //it enables string with spaces
    getline(cin,fullname,'h');
    cout<<fullname;
    //and also for multiple lines use it as getline(cin,string name,letter to terminate);
    string s="first/second/third";
    stringstream ss(s);
    string temp;
    cout<<"\n";
    while (getline(ss,temp,'/'))
    {
        cout<<temp<<"\n";
    }
    
}