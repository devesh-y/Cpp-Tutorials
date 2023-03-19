#include<map>
using namespace std;
#include<bits/stdc++.h>
int main()
{
    vector<int> v={454,43,5,45,4,5};
    cout<<v.end()-v.begin();
    cout<<"\n";
    set<int> s={454,43,5,45,4,5};
    set<int>::iterator i;
    cout<<distance(s.begin(),s.end());


}