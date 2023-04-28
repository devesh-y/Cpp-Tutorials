#include <iostream>
using namespace std;
class Base
{
    public:

        //it makes the class abstract
        virtual ~Base()=0; // Pure virtual destructor
        //here we declare it a pure virtual destructor but destructor is not defined so it will be a error and one more thing is it should be defind 
        //using scope resolution operator as destructor cannot be overloaded
        

};
Base::~Base()
{
	cout << "Pure virtual destructor is called";
}

class Derived : public Base
{
    public:
        ~Derived()
        {
            cout << "~Derived() is executed\n";
        }
};

int main()
{
    // Base b;  //now this not possible
	Base *b = new Derived();
	delete b;
	return 0;
}
