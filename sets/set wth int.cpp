#include <bits/stdc++.h>
using namespace std;
#define deveshio() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define ll long long int
#include<set>
#include<vector>
int main()
{
    set<int> s;
    set<int>::iterator iter;
    s.insert(34);
    s.insert(34);
    s.insert(15);
    for(int i:s){
        cout<<i<<"\n";
    }
    for(iter=s.begin();iter!=s.end();iter++)
    {
        cout<<*iter<<" ";
    }
    
    
}