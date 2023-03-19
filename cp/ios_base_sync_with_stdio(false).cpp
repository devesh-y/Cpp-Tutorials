#include<bits/stdc++.h>
using namespace std;
#define deveshio ios_base::sync_with_stdio(false);//due to this line only the printf lines will be written first than cout that's it
int main()       //other all will be in sequence
{
    deveshio;
    int x;
    cin>>x;
    cout<<x<<"\n";
    
    for(int i=0;i<5;i++)
    {
        cout<<"from cout\n";
        printf("from printf\n");
    }
    int y;
    cin>>y;
    cout<<"\n"<<y;
    
}