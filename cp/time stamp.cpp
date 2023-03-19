#include<iostream>
#include<chrono>
using namespace std;
auto start =chrono::steady_clock::now();
int main()
{
    
    auto end=chrono::steady_clock::now();
    auto diff=end-start;
    cout<<endl<<chrono::duration<double,milli>(diff).count()<<"ms"<<endl;
}