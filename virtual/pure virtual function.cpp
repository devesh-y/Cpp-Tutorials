#include <iostream>
using namespace std;
class Base
{
    public: 
        Base()
        {
            cout<<"constructor of base class\n";
        }
        virtual void show() = 0; //showing that it is a pure virtual function 
};
class Derv1 : public Base
{
    public:
        Derv1()
        {
            cout<<"constructor of derv1\n";
        }
        void show()
        { 
            cout << "Derv1\n"; 
        }
};
class Derv2 : public Base 
{
    public:
    void show()
    { 
        cout << "Derv2\n"; 
    }
};
int main()
{
    // Base bad; //can’t make object from abstract class
    Base* arr[2]; //array of pointers to base class
    Derv1 dv1; 
    Derv2 dv2; 
    arr[0] = &dv1;
    arr[1] = &dv2;
    arr[0]->show(); 
    arr[1]->show();
    return 0;
}