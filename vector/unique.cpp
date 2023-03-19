#include<bits/stdc++.h>
using namespace std;
int main()
{
    //the unique function only remove the consecutive duplicate 
    //untill we get no duplicacy in consecutive elements
    vector<int > v={1, 1, 3, 3, 3, 10, 1, 3, 3, 7, 7, 8 };
  
    vector<int > ::iterator iter,iter2;
    iter=unique(v.begin(),v.end());//iter points to new end element


    //here the iterator only required to calculate the final length of vector
    //because iter point to end of the data structure and further after that will be undefined
    iter2=iter;
    cout<<*(--iter2)<<"\n";
    cout<<*iter<<"\n";
    cout<<iter-v.begin()<<"\n";
    cout<<v.end()-v.begin()<<"\n";// the unique function dont change the size , just make the duplicate values as undefined
    v.resize(iter-v.begin());
    for(iter=v.begin();iter!=v.end();iter++){
        cout<<*iter<<" ";
    }
}