#include<iostream>
using namespace std;
int main()
{
    int intVar = 1500000000; //1,500,000,000
    intVar = (intVar * 1000) / 1000; //result too large
    cout << "intVar = " << intVar << endl; // in some other compiler it could be wrong answer 
    //because on multiplying from 1000 it will be temporaly out of limit of int 
    intVar = 1500000000; //cast to double
    intVar = (static_cast<double>(intVar) * 10) / 10;
    cout << "intVar = " << intVar << endl; //right answer

    //we can do this by simply this method
    int z=25;
    cout<<endl<<char(z);

    return 0;
}