#include<iostream>
using namespace std;
#include<string.h>
int main()
{
    char *p;
    p=(char *)malloc(15);//without malloc you have only read property but by allocating memory you have also write property
    char arr[20]="shfjsdfk";
    strcpy(p,arr);
    p[0]='H';

    //without malloc you cannot access p ---i mean the below cout statement will not work
    //but with malloc you can 
    cout<<p;
    

}