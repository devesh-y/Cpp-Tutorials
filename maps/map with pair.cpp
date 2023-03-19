#include<bits/stdc++.h>
using namespace std;
#define devesh_yadav92io ios_base::sync_with_stdio(false);cin.tie(NULL);
#define ll long long int
int main()
{
    clock_t zzz = clock();
    devesh_yadav92io;
    map<pair<int,int> , int> arr;
    arr.insert({{2,6},56});
    arr.insert({{2,5},4});
    map<pair<int,int> ,int>::iterator iter;
    for(iter=arr.begin();iter!=arr.end();iter++)
    {
        cout<<(*iter).first.first<<" "<<(*iter).first.second<<" "<<(*iter).second<<"\n";
    }
    cerr << "Run Time : " << ((double)(clock() - zzz) / CLOCKS_PER_SEC);
	return 0;
}