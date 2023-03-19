#include<iostream>
using namespace std; 
#ifndef pi 
#error define_the value of pi first  

//here this is not syntax error , this is actual error 
//dont get wrong about this file
#else  
int main()
{  
    cout<<pi;
}  
#endif  