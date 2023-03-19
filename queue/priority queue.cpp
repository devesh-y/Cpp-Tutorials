#define ll long long unsigned int
#include<bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue<int,vector<int>,greater<int> > s;//   now in ascending order otherwise normal priority queue in descending order
    s.push(34);
    s.push(32434);
    s.push(453);
    cout<<s.top()<<"\n";

    priority_queue<int> newvalue;
    newvalue.push(5656);
    newvalue.push(45);
    cout<<newvalue.top();//it has only top      not front()
     // not back();  

}