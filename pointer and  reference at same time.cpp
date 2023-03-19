#include<iostream>
using namespace std;
void func(char* &name)
{
    name="mytkno";
}
int main()
{
    char *arr="hello";
    func(arr);
    cout<<arr;
}