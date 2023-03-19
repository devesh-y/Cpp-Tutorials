#include<iostream>
#include<algorithm> //for find()
using namespace std;
int arr[] = { 11, 22, 33, 44, 55, 66, 77, 88 };
int main()
{
    int* ptr;
    ptr = find(arr, arr+8, 33); //find first 33
    cout << "First object with value 33 found at offset "
    << ptr - arr << endl; //this is minus sign nothing much and subtracting the addressses
    return 0;
}