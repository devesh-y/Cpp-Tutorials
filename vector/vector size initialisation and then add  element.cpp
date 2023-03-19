#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#include<set>
#include<cmath>
#include<vector>
int main()
{
    vector<int> v(5); // if we do like  vector<int> v(5,10); then it means 5 elements all have value 10
    v.push_back(34);
    vector<int>::iterator i;
    for(i=v.begin();i!=v.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    
}