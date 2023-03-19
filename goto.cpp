#include<iostream>
#include<process.h>
#include<stdlib.h>
using namespace std;
int main()
{
    goto sos;
    cout<<"myname";
    sos:
    {
        cout<<"hello"<<endl;
        cout<<"top maek"<<endl;  
    }
    cout<<"happy for that";
    sos1:
        cout<<"\nmy family";
}