#include<iostream>
using namespace std;
#include<list>
int main()
{
    int arr[4]={34,343,333,334};
    list<int> listi(arr,arr+4);
   
    list<int>::iterator i;
    for(i=listi.begin();i!=listi.end();i++)
    {
        cout<<*i<<" ";
    }

}