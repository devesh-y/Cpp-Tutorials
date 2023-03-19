//this code is written by Devesh 2K20/IT/40
#include <iostream>
#include <conio.h>
using namespace std;
template <class T>
T findmin(T arr[],int n)
{
    int i;
    T min;
    min=arr[0];
    for(i=0;i<n;i++)
    {
        if(min > arr[i])
            min=arr[i];
    }
    return(min);
}
int main()
{

    int intarr[5];
    float floatarr[5];
    cout << "enter int type values ";
    for(int i=0; i < 5; i++)
    {
        cin >> intarr[i];
    }
    cout << "enter float type values ";
    for(int k=0; k < 5; k++)
    {
        cin >> floatarr[k];
    }
    cout<<"\nminimum int type value is : "<<findmin(intarr,5)<<endl;
    cout<<"\nminimum float type value is :"<<findmin(floatarr,5);

}