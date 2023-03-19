#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	const char *s="123";
    int *p=(int *)s;
    cout<<*p; //here this is the value of string "cba" when converted to binary and then calculated as integer using binary and ascii codes
    
}
