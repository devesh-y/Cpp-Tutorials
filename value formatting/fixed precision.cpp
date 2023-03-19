#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    cout<<fixed;
    double a=5.875451222353;
    cout<<endl<<a;//due to fixed digits after decimal points will be 6 constant

    double b=5.24;
    cout<<setprecision(1);
    cout<<endl<<b;//here this thing should be notices that once i have declared fixed in cout so it will applies to every cout
}