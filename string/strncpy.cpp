#include<iostream>
using namespace std;

#include<string.h>
int main()
{
    char arr1[10]="hellototh";
    cout<<arr1<<"\n\n";
    char arr2[10];
    strncpy(arr2,arr1,5);
    arr2[5]='\0';//without this the string will not be terminated
    cout<<arr2;
    
}