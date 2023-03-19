#include <iostream>
using namespace std;
void fun(int a,int b)
{
    int temp=a;
    a=b;
    b=temp;
    cout<<"after calling (inside the function) "<<a<<" "<<b<<endl;
}
int main()
{
    int x=45; int y=50;
    fun(x,y);

    cout<<"after calling the function (inside main) "<<x<<" "<<y;//as we see call by value does not change the actual variables 
    
    
}