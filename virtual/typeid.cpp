#include <iostream>
#include <typeinfo> //for typeid()
using namespace std;

class Base
{
    virtual void virtFunc()                         //needed for typeid
    { 
        
    }
};
class der1vy : public Base
{ 

};
class der2vy : public Base
{ 

};

void displayName(Base* pB)
{
    cout << "pointer to an object of ";              //display name of class
    cout << ((typeid(*pB)).name()) << endl;                      //pointed to by pB
}

int main()
{
    Base* pBase = new der1vy;
    displayName(pBase);                     //"pointer to an object of class der1vy"
    pBase = new der2vy;
    displayName(pBase);                      //"pointer to an object of class der2vy"
    return 0;
}