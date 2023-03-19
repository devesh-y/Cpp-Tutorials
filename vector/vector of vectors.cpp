#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
    vector<vector<int> > v{{43534,6546,345},{45}};
    v.push_back({45,576523,324});
    v.push_back({45,765,456,3543});
    for(int i=0;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<"\n";
    }
    cout<<"\n\n";
    vector<vector<int> >::iterator i;
    vector<int>::iterator j;
    for(i=v.begin();i!=v.end();i++)
    {
        for(j=(*i).begin();j!=(*i).end();j++)
        {
            cout<<*j<<" ";
        }
        cout<<"\n";
    }
  
    

    
}