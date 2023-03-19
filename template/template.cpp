#include<iostream>
using namespace std;
template<class x>
x fun(x a,x b)             //the use of template is that we dont need to use function overloading so no need to make two fucntion of int and flaot type
{
    if(a>b)
        return a;
    else 
        return b;    
}
int main()
{
    cout<<fun<int>(2,4)<<endl
    <<fun<float>(8.5867,5.676);
}