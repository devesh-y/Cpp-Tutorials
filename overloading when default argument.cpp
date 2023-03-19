#include<iostream>
using namespace std;
//here we see the syntax of default argument in decalaration and definition of function


void repchar(char='*', int=45); 
int fun(int a,int b=20)
{
    cout<<a+b<<endl; 
}
int main()
{
    fun(15);//answer will be 35
    fun(15,35);//answer will be 50   no worry we have changed the constant argument
    //if function is defined as fun(int b=15,int a)         then we call it as fun(25);        then will have error because here as we have give the value of b but not of a
    
    
    repchar(); //prints 45 asterisks
    repchar('='); //prints 45 equal signs
    repchar('+', 30); //prints 30 plus signss
    
    
    //the important thing is that the missing argument must last


    return 0;
}
void repchar(char ch, int n) 
{ 
    for(int j=0; j<n; j++) 
    cout << ch; 
    cout << endl;
}