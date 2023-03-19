#include<iostream>
#include<list>
using namespace std;
int main()
{
    int arr[4]={34,54,13,35};
    
    list<int> lis(arr,arr+4);

    list<int>::reverse_iterator i;

    for(i=lis.rbegin();i!=lis.rend();i++)
    {
        cout<<*i<<" ";
    }
}