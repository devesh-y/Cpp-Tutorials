#include<bits/stdc++.h>
using namespace std;
#include<list>
#include<deque>
int main()
{
    int arr[5]={45,54,34,235,4};
    list<int>d(arr,arr+5);
    d={};
   
    cout<<d.size();
}