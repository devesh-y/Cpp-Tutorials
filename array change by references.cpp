#include<iostream>
using namespace std;
void change(int var[]);//here it is an address not a value of array so by passing references array values got changed
int main()
{
    int arr[5]={3,5,3,2,1};
    change(&arr[0]);//  can also be   change(arr);             here it is same as we passing address in both cases
    for(int i=0;i<=4;i++)
    {
        cout<<arr[i]<<" ";
    }
}
void change(int var[])
{
    for(int i=0;i<=4;i++)
    {
        var[i]+=5;
    }
}