#include<iostream>
using namespace std;
#include<iomanip>
#include<string.h>
int main()
{
    char arr[10];
    
    cin>>arr;//here you can write more than 10 characters and you will got all these characters
    cout<<arr;
    cout<<"\n\n";
    cin>>setw(10)>>arr;//here whether you write more than 10 characters you will get 10 characters only
    cout<<arr;
    cout<<endl<<sizeof(arr);
    
}