//december lunchtime
#include<bits/stdc++.h>
using namespace std;
#define devesh_yadav92io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
void solve()
{
    ll n;
    cin>>n;
    
    vector<ll> a(n);
    
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
        
    vector<ll> b=a;
    sort(b.begin(),b.end());
    
    ll ans=0;
    
    multiset<ll> s1;
    multiset<ll> s2;
    for(ll i=0;i<n;i++)
    {
        if(s1.size() && s1==s2)
        {
            ans+=*(--s1.end())-*(s1.begin());
            s1.clear();
            s2.clear();
        }
        if(a[i]!=b[i])
        {
            s1.insert(a[i]);
            s2.insert(b[i]);
        }
        else
        {
            if(s1.empty())
                continue;
            else
            {
                s1.insert(a[i]);
                s2.insert(b[i]);
            }
        }
    }
    
    if(s1.size())
        ans+=*(--s1.end())-*(s1.begin());;
    
    
    cout<<ans<<"\n";
    
}
int main()
{
    clock_t z = clock();
    devesh_yadav92io;
    ll t;
	cin>>t;
	while(t--)
	{
	    solve();
	}
    cerr << "Run Time : " << ((double)(clock() - z) / CLOCKS_PER_SEC);
	return 0;
}