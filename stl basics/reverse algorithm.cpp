#include<bits/stdc++.h>
#include<algorithm>
using namespace std;
int main()
{
    deque<int> l={45,43566,54,35,4};
    reverse(l.begin(),l.end());
    for(int i=0;i<l.size();i++)
    {
        cout<<l[i]<<" ";
    }
}