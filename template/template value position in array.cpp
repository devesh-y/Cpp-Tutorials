//this code is written by Devesh 2K20/IT/40
#include<iostream>
using namespace std;
template <class T>
void linearsearch(T *a, T item, int n)
{
    int z=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]== item)
        {
            cout<<"\n value found at position = "<<i+1<<"\n\n";
            z=1;
            return;
        }
    }
    cout<<"\nnot available\n";
}
int main()
{
    int intarr[5] = {-15,0,15,35,65};
    float floatarr[5]= {-25.564,0.65,24.658,65.987,68.265};
    int findint;
    float findfloat;
    cout<<"int values are \n";
    for(int i=0;i<5;i++)
    {
        cout<<intarr[i]<<" ";
    }
    cout<<"\n enter the int value to search the position  ";
    cin>>findint;

    linearsearch(intarr,findint,5);

    cout<<"\nfloat values are\n";
    for(int i=0;i<5;i++)
    {
        cout<<floatarr[i]<<" ";
    }
    cout<<"\n enter the int value to search the position  ";
    cin>>findfloat;
    linearsearch(floatarr,findfloat,5);

    return 0;
}