#include<bits/stdc++.h>
using namespace std;
#define devesh_yadav92io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
int main()
{
    clock_t zzz = clock();
    devesh_yadav92io;
    ll t;
    cin>>t;
    while(t--)
    {
        ll n;
        cin>>n;
        ll arr[n+1][n+1];
        for(ll i=1;i<=n;i++)
        {
            for(ll j=1;j<=i;j++)
            {
                cin>>arr[i][j];
            }
        }
        ll ans[n+1][n+1]={0};
        for(ll j=1;j<=n;j++)
        {
            ans[n][j]=arr[n][j];
        }
        for(ll i=n-1;i>=1;i--)
        {
            for(ll j=1;j<=i;j++)
            {
                ans[i][j]=arr[i][j]+max(ans[i+1][j],ans[i+1][j+1]);
            }
        }   
        cout<<ans[1][1]<<"\n";


    }
    cerr << "Run Time : " << ((double)(clock() - zzz) / CLOCKS_PER_SEC);
	return 0;
}
/*
Given an integer N, let us consider a triangle of numbers of N lines in which a number 
a11 appears in the first line, two numbers a21 and a22 appear in the second line, three numbers a31, a32 and a33 appear 
in the third line, etc. In general, i numbers ai1,ai2…aii appear in the ith line for all 1≤i≤N. Develop a program that 
will compute the largest of the sums of numbers that appear on the paths starting from the top towards the base, so that:

on each path the next number is located on the row below, more precisely either directly below or below and one place to the right.
2
3
1
2 1
1 2 3
4
1
1 2
4 1 2
2 3 1 1

*/