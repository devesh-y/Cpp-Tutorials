#include <iostream>
using namespace std;

class Counter
{
    private:
        unsigned int count; 
    public:
        Counter() : count(0) 
        { }
        Counter(int c) : count(c) //here we have to define this constructor to use the below written line of return Counter(count) because here it has an argument
        { }
        unsigned int get_count() 
        {
            return count; 
        }
        Counter operator ++ ()  
        {
            ++count; 
            return Counter(count); 
        } 
};
int main()
{
    Counter c1, c2; 
    cout << "\nc1=" << c1.get_count(); 
    cout << "\nc2=" << c2.get_count();
    ++c1; 
    c2 = ++c1; 
    cout << "\nc1=" << c1.get_count(); 
    cout << "\nc2=" << c2.get_count() << endl;
    return 0;
}