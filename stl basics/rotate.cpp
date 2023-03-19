#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    vector<int> v={343,34,3,4,7,6};
    rotate(v.begin(),v.begin()+4,v.end());       //it will rotate left by 4 steps 
    for(int i:v){
        cout<<i<<" ";
    }
    return 0;
}