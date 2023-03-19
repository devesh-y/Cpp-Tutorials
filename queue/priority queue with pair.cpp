#include<bits/stdc++.h>
using namespace std;
#define int long long int
class mycomp {
    public:
     bool operator()(pair<int, int> & a,pair<int, int> & b)
     {
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first<b.first;
     }
};
signed main()
{
    priority_queue< pair<int,int>, vector<pair<int,int>>, mycomp > p;
    p.push({34,1});
    p.push({23,7});
    p.push({23,4});
     p.push({34,45});
      p.push({34,232});
    p.push({23,11});
    

   while(!p.empty()){
    cout<<p.top().first <<" "<<p.top().second<<"\n";
    p.pop();
   }

    return 0;
}