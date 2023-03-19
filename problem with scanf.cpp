// thats why it is recommended to use printf and scanf
// than cin and cout
#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    
    char x, y;
    
    scanf("%c", &x);//scanf leaves \n in buffer and 
    scanf("%c", &y);// this scanf reads the \n so x became the value i enter and y became \n
    cout << x << " " << y;
    cout<<"hello";//so hello will be print in the next line
}