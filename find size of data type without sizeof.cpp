#include<iostream>
using namespace std;
int main()
{
    int x;
    int *p,*q;
    p=&x+1;
    q=&x;
    cout<<p-q<<endl;
    cout<<(char*)(&x+1)-(char*)&x;
    
    
}