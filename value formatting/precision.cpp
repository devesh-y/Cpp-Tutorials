#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    
    // after writing cout<<setprecision(anything);
    //it will be for every line afterward so be aware of that unless further described for particular



    int z=2147483648;//we know after largest value it starts from the negative side
    cout<<z;
    float num=55555555.78742134143;
    cout<<endl<<num;//due to mingw it will truncated to 6 digits 

    num=555555.445431;
    cout<<endl<<num;


    double yy=555.454544855241444442;
    cout<<endl<<yy;// here mingw compiler not showing larger than 6 digits

    cout<<endl<<setprecision(15)<<yy;//here if we increase the precision of digits greater than 15 digits then it will put garbage vallue because max is 15 for double
    
}