//you want a guarantee that the function cannot modify variables.
#include<iostream>
using namespace std;
void myfun(int a,const int b){
    a=23;
    b=111;
}
int main()
{
    int x=23;
    int y=34;
    myfun(x,y);      //here error will take place as const int cannot change
}