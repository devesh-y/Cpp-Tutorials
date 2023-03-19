#include<bits/stdc++.h>
using namespace std;
#define deveshio ios_base::sync_with_stdio(false);cin.tie(NULL);
int main()
{
    deveshio;
    int y;
    cin>>y;
    cout<<y<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<"from cout\n";
        printf("from printf\n");
    }
    int x;
    cin>>x;
    cout<<x;
    //due to cin.tie(null) all cin input will be done first before any cout and all ohter things will be in sequence
}