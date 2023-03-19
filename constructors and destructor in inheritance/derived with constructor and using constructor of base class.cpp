
//derived class cannot use constructor other than zero argument or default constructor 
//if there is any constructor defined in derived class let say one argument than you cannot use the zero argument constructor of base class

#include<iostream>
using namespace std;
class base
{
    protected:
        int a,b;
    public:
        base():a(0),b(0)
        {
            cout<<"happy to help\n";
        }
        base(int x,int y )
        {
            a=x;
            b=y;
        }
}; 

class derived:public base
{
    protected:
        int integer;
        
    public:
       derived()
        {
            cout<<"in derived\n";
        }
        derived(int a)
        {
            integer=a;
            
        }

};
int main()
{
    derived d1;
}