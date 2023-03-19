#include <bits/stdc++.h>
using namespace std;
class hello
{
    public:
    int id;
    ~hello()
    {
        cout << "Destructor called for id: " << id <<endl;
    }
};
 
int main()
{
    hello obj1;
    obj1.id=7;
    int i = 0;
    while ( i < 5 )
    {
        hello obj2;
        obj2.id=i;                          //destructor will not call after scope end for those who are made from new keyword,,delete is used to delete them
        i++;       
    } // Scope for obj2 ends here

    return 0;
                                            
} // Scope for obj1 ends here