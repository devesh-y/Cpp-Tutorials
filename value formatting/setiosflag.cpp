#include<iostream>
#include<iomanip>
using namespace std;

int main()
{

    float dgdf=4545.67632;
    cout<<setprecision(2);
    cout<<endl<<dgdf<<endl;

    cout<<setiosflags(ios::fixed);//not exponential
    cout<<setprecision(2);
    
    cout<<dgdf<<endl;
    float yyy=5656;
    cout<<setiosflags(ios::showpoint);//always show point
    cout<<endl<<yyy;
}