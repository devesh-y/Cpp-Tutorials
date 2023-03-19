#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    vector<int> v={343,2,1,12,13,213};
    v.erase(v.begin(),v.begin()+3);
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}