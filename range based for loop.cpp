//this is called as range based for loop
#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v{12,34,645,67};
    for(auto i: v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int& i :v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(const int& i :v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto&&i :v)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for (int i : {12,34,645,67}) // the initializer may be a braced-init-list
        cout << i << ' ';
    cout << '\n';
 
    int a[] = {12,34,645,67};
    for (int i : a) // the initializer may be an array
        cout << i << ' ';
    cout << '\n';
 
    for (int n : a)  
        cout << 1 << ' '; // the loop variable need not be used
    cout << '\n';
 
    for (auto j = v.size(); auto i : v) // the init-statement (C++20)
        cout << --j + i << ' ';
    cout << '\n';
}