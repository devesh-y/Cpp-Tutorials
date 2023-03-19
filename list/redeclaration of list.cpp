#include<bits/stdc++.h>
using namespace std;
#define devesh_yadav92io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
int main()
{
    int arr[3]={423,3423,32};
    int arr2[2]={565,344343};
    list<int> mylist(arr,arr+3);
    cout<<mylist.front();
    mylist={arr2,arr2+2};

    cout<<"\n"<<mylist.front();
}