//here pointer is of derived class not of base class
#include<iostream>
using namespace std;
class base 
{
    public:
        base()	
        { 
            cout<<"Constructing base \n"; 
        }
        ~base()
        { 
            cout<<"Destructing base \n"; 
        }	
};

class derived: public base 
{
    public:
        derived()	
        { 
            cout<<"Constructing derived \n"; 
        }
        ~derived()
        { 
            cout<<"Destructing derived \n"; 
        }
};

int main(void)
{
  
    derived *b = new derived();
    delete b;
    //here the pointer is of derived class so it will delete it first and base is also deleted because when destructor of derived class is called then 
   // base class destructor will also be called
    derived c;
}
