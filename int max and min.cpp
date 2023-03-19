#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>
int main()
{
    cout<<setprecision(10);
    int x=0;
    for(int i=0;i<=30;i++)
    {
        x+=pow(2,i);
    }
    cout<<x<<endl;
    cout<<x+1<<endl;
    int y=~x;
    cout<<y;
    
}