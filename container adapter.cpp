#include<bits/stdc++.h>
using namespace std;
int main()
{
    stack< int,deque<int> > s;//it can be stack< int,vector<int> > s;
    //or it can be simply stack<int> s;
    // because second argument is by default deque<int>
    s.push(30);
    s.push(20);
    cout<<s.top();
}