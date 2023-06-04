#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    set<int> s={1,2,3,4,5,6};
    s.erase(3);
    set<int>::iterator iter;
    iter=s.begin();
    advance(iter,3);
    s.erase(s.begin(),iter);
    for(int i:s){
        cout<<i<<" ";
    }
    return 0;
}