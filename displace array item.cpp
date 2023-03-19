//DONE BY DEVESH 2K20/IT/40
#include<iostream>
using namespace std;

int main()
{
    int n,d;
    cin>>n;
    cin>>d;
    int arr[n];
    for(int i=0;i<=n-1;i++)
    {
        cin>>arr[i];
    }
    int ar[n]; 
    for(int i=0;i<=n-1;i++)
    {
        ar[i]=arr[i];
    }
    for(int i=0;i<=n-1;i++)
    {
        arr[i]=ar[((d%n)+i)%n];
    }
    for(int i=0;i<=n-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    
}