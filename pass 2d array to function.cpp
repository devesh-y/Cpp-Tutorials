#include<iostream>
using namespace std;
int func(int arr[][2])
{
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";

        }
        cout<<"\n";
    }
}
int main()
{
    int arr[2][2]={454,34,343,45};
    func(arr);
}