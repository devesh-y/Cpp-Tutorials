//On applying virtual keyword
//Which version of function(of same  name in different derived class)  does the compiler call?   
//In fact the compiler doesn’t know what to do, so it arranges for the decision to be deferred until the program is running.
//This is called late binding or dynamic binding.
//(Choosing functions in the normal way, during compilation, is called early binding or static binding.)

//there cannot be virtual data member
#include <iostream>
using namespace std;
class Base 
{
    public:
        Base()
        {
            cout<<"constructing base class\n";
        }
        virtual void show() //virtual function
        { 
            cout << "Base\n"; 
        }
};
class Derv1 : public Base 
{
    public:
        Derv1()
        {
            cout<<"constructing Derv1\n";
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
        Derv2()
        {
            cout<<"constructing Derv2\n";
        }
        void show()
        { 
            cout << "Derv2\n"; 
        }
};

int main()
{

    //the concept is the function will be called of that class of which pointer of type
    //here the pointer is of Base so it will call the function of base
    //so to call the function of the objects(here in case the objects are derv1 and derv2 , the reference is of base), so we use the concept of
    //virtual function which call the function of the object class not the pointer class
    Derv1 dv1; 
    Derv2 dv2; 
    Base* ptr; 
    ptr = &dv1; 
    ptr->show(); 
    // ptr->happen();  //happen is not in base
    ptr = &dv2; 
    ptr->show(); 
    return 0;
}

//when referene and object diffeene then ye ssab dogalapan