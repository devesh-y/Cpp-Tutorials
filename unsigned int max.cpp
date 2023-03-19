#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
int main()
{
    cout<<setprecision(10);
    unsigned int x=0;
    for(int i=0;i<=31;i++)
    {
        x+=pow(2,i);
    }
    cout<<x<<endl;
    
    
}