#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int> arr = {34, 3, 43, 4, 3, 4};
    set<int> hello = {1, 3};
    hello.insert(arr.begin(), arr.end());
    for (auto x : hello)
    {
        cout << x << " ";
    }
}