#include<bits/stdc++.h>
using namespace std;
int main()
{
    int *p=new int(5);          //same as new int[5]
    for(int i=0;i<=4;i++){
        p[i]=i+1;
    }
    for(int i=0;i<=4;i++){
        cout<<p[i]<<" ";
    }
    delete[] p;
    for(int i=0;i<=4;i++){
        cout<<p[i]<<" ";
    }
  
}