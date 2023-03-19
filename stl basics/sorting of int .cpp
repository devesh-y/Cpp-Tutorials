#include<bits/stdc++.h>
using namespace std;
#define int long long int
bool mysort(int a,int b){
    return (a<b ? true:false);
}
signed main()
{
    int arr[]={3,6,2,6,8};
    sort(arr,arr+5,mysort);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}