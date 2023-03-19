#include<bits/stdc++.h>
using namespace std;
#include<vector>
int main()
{
    //vector<int> v(n,y);               it means n elements of value y
    vector<int> v{454,4545,4354};
    for(int i=0;i<=2;i++)
    {
        cout<<v[i]<<" ";
    }
    int arr[]={454,45,5,45,454};
    vector<int> v1(arr,arr+5);
    cout<<"\n";
    for(int i=0;i<5;i++)
    {
        cout<<v1[i]<<" ";
    }
    vector <int> v2;
    cout<<"\n"<<v2.size();

    vector<int>v3(4);//here it sets the initail size of vector to 4 
    cout<<"\n"<<v3.size();
}