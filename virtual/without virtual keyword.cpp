//The compiler ignores the contents of the pointer and chooses the member function that matches the type of the ptr pointer,
//everytime whenever an object of derived class of whatever argument is created then the no argument constructor of base class will call out first
#include <iostream>
using namespace std;
class Base 
{
    public:
        Base()
        {
            cout<<"constructing base class\n";
        }
        Base(int a)
        {
            cout<<"this is parametrized constructor\n";
        }
        ~Base(){
            cout<<"base destroyed\n";
        }
        void show() 
        { 
            cout << "Base\n"; 
        }
};

class Derv1 : public Base 
{
    public:
        Derv1(int a)
        {
            cout<<"constructing derv1\n";
        }
        ~Derv1(){
            cout<<"derv1 destroyed\n";
        }
        void show()
        { 
            cout << "Derv1\n"; 
        }
        void happen(){
            cout<<"in derv1 happen\n";
        }
};

class Derv2 : public Base 
{
    public:
        Derv2(int b)
        {
            cout<<"constructing derv2\n";
        }
        ~Derv2(){
            cout<<"derv2 destroyed\n";
        }
        void show()
        { 
            cout << "Derv2\n"; 
        }
};

int main()
{

    Derv1 dv1(5); 
    Derv2 dv2(10);
    Base* ptr;
    ptr = &dv1;
    ptr->show();
   // ptr->happen(); //base has no happen
    ptr = &dv2;
    ptr->show(); 
    return 0;
}