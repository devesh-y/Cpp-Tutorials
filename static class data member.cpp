#include <iostream>
using namespace std;
class foo
{
    private:
        
        //note: “declaration” only!
    public:
        static int count; 
        int i;
        foo() 
        { 
            count++; 
        }
        int getcount()
        { 
            return count; 
        }
};

//always remeber you are initialising here , so use the syntax like that

int foo::count = 0; //this memory does not depend on object          we cannot use static keyword while defining
int main()
{
    foo f1, f2, f3; 
    cout << "count is " << f1.getcount() << endl;
    cout << "count is " << f2.getcount() << endl;
    cout << "count is " << f3.getcount() << endl; 
    cout<<foo::count;
    return 0;
}