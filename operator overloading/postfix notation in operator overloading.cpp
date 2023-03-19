//Counter operator ++ (int)
//The only difference is the int in the parentheses. This int isn’t really an argument, and it
//doesn’t mean integer. It’s simply a signal to the compiler to create the postfix version of the
//operator. The designers of C++ are fond of recycling existing operators and keywords to play
//multiple roles, and int is the one they chose to indicate postfix.
#include <iostream>
using namespace std;
class Counter
{
    private:
        unsigned int count;                              //count
    public:
        Counter() : count(0)                         //constructor no args
        { }
        Counter(int c) : count(c)                         //constructor, one arg
        { }
        unsigned int get_count() const                        //return count
        { 
            return count; 
        }
        Counter operator ++ ()                               //increment count (prefix)
        {                                                   //increment count, then return
            return Counter(++count);                        //an unnamed temporary object
        }                                                    //initialized to this count
        Counter operator ++ (int)                            //increment count (postfix)
        {                                                        //return an unnamed temporary
            return Counter(count++);                           //object initialized to this
        }                                                   //count, then increment count
};
int main()
{
    Counter c1, c2;                                     //c1=0, c2=0
    cout << "\nc1=" << c1.get_count(); 
    cout << "\nc2=" << c2.get_count();
    ++c1;                                                 //c1=1
    c2 = ++c1;                                    //c1=2, c2=2 (prefix)
    cout << "\nc1=" << c1.get_count();                     //display
    cout << "\nc2=" << c2.get_count();
    c2 = c1++;                                             //c1=3, c2=2 (postfix)
    cout << "\nc1=" << c1.get_count();                        //display again
    cout << "\nc2=" << c2.get_count() << endl;
    return 0;
}