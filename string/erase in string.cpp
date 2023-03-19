#include<bits/stdc++.h>
using namespace std;
#define int long long int
signed main()
{
    string s="abcdefghij";
    s.erase(1,3);//first argumetn is from where , second argument is how many
    cout<<s<<endl;
    //there is another method also
    s.erase(s.begin(),s.begin()+4);// this we have seen in other stl also
    cout<<s<<"\n";
    // s.erase('a');        //error
   
    return 0;
}