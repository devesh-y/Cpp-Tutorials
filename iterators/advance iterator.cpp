
#include <bits/stdc++.h>
using namespace std;
#include <iterator>     // advance
#include <list>         // list

int main () 
{
    list<int> mylist;
    for (int i=0; i<10; i++) 
        mylist.push_back (i*10);

    list<int>::iterator it = mylist.begin();     //we cannnot use mylist.begin() +5 because its not defined for list as it does not have random access

    advance (it,5);

    cout << "The sixth element in mylist is: " << *it << '\n';

    return 0;
}