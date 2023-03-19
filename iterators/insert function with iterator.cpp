#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> hello={3,4,34,3,4,3};
    vector<int> arr={10,20,30};
    hello.insert(hello.begin(),arr.begin(),arr.end());
    for(auto x:hello){
        cout<<x<<" ";
    }
}