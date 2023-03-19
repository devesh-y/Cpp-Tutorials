#include<iostream>
using namespace std;  
int main() 
{  
    int a=0;  
    #ifdef NOINPUT 
    a=2;  
    #else 
    printf("Enter a:");
    scanf("%d", &a);  

    //endif is used to terminate the if or else statement
    #endif         
    
    cout<<a; 
  
}  