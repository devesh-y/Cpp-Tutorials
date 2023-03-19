#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v={34,12,70,65,67,34}; 
    vector<int>::iterator iter; 

    iter=upper_bound(v.begin(),v.end(),91);//if not available then it will be v.end()
    cout<<*(v.begin())<<"\n";
    cout<<iter-v.begin()<<"\n";
    int k;
    k=lower_bound(v.begin(),v.end(),65)-v.begin();
    cout<<k<<"\n";
    cout<<*iter;      
    cout<<"\n";       
    cout<<*(v.begin());       
                                                                    
}