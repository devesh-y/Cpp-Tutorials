#include<iostream>
#include<limits>
using namespace std;

int main()
{
    double inf =numeric_limits<double>::infinity();
    int a=5;
    if(a+10<inf)
    {
        cout<<a;
    }
    cout<<endl<<inf;
}