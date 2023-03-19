#include <iostream>
using namespace std;

class Base
{
    public:
        Base()
        {
            cout<<"constructing base class\n";
        }
        ~Base() //non-virtual destructor
        // virtual ~Base() //virtual destructor
        { 
            cout << "Base destroyed\n"; 
        }
};

class Derv : public Base
{
    public:
        Derv()
        {
            cout<<"constructing derv class\n";
        }
        ~Derv()
        { 
            cout << "Derv destroyed\n"; 
        }
};

int main()
{
    Base* pBase = new Derv;//if here Derv is written instead of Base then obviously it is object of Derv class so destructor of Derv called then of base called
    delete pBase;
    return 0;
}