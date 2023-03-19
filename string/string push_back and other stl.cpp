#include<bits/stdc++.h>
using namespace std;
#include<algorithm>
int main()
{
    string s="hello";
    s.push_back('t');
    cout<<s;
    s.pop_back();
    cout<<endl<<s;
    //pop_front not available and also push_front
    reverse(s.begin(),s.end());
    cout<<endl<<s;
}