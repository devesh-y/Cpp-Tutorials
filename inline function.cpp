#include<iostream>
using namespace std;
inline void fun();

int main()
{
    cout<<"you are in main\n";
    fun();
}
void fun()
{
    cout<<"you are in the fun function";
}