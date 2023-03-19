#include<bits/stdc++.h>
using namespace std;
int main()
{
    deque<int> my;
    my.push_front(566);
    my.push_front(566);
    my.push_front(566);my.push_front(566);

    cout<<my.front()<<"\n";
    cout<<my.size()<<"\n";
    my.pop_front();
    cout<<my.front()<<"\n";
    cout<<my[2];

}