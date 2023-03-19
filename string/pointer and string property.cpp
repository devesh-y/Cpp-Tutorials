#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    char str1[]="hello";
    char str2[]="hi";
    char *p1="hello";
    char *p2="hi";


    //here str1 and str2 are constant pointer to a string
    //and p1 and p2 are pointer to constant string
  /*
    str1="name";//error because pointer cannot change
    str1=str2;//error
    str1++;//error
    *str1='z';//works because string is not constant
    p1="name";//works because pointer is not constant
    p1=p2;//works
    p1++;//works
    */
    cout<<p1;
    //here after changing the index value it will not show the ptr string
    // *p1='z';//error because string is constant
    cout<<p1;
    cout<<p1[0];

}