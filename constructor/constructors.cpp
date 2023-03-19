//if we have only one argument in constructor then we can write as  Counter c=5;     but only applicable for one argument
#include <iostream>
using namespace std;

class Counter
{
    private:
        unsigned int count;                 
    public:
        Counter() : count(0)        //this is initializing the data members ,,if more data members than use someClass() : m1(7), m2(33), m2(4) ← initializer list      
        {                           //other way is Counter(){ count=0;}
            //nothing here
        }
        void inc_count() //increment count
        { count++; }
        int get_count() //return count
        { return count; }
};

int main()
{
    Counter c1, c2; //define and initialize
    cout << "\nc1=" << c1.get_count(); //display
    cout << "\nc2=" << c2.get_count();
    c1.inc_count(); //increment c1
    c2.inc_count(); //increment c2
    c2.inc_count(); //increment c2
    cout << "\nc1=" << c1.get_count(); //display again
    cout << "\nc2=" << c2.get_count();
    cout << endl;
    return 0;
}