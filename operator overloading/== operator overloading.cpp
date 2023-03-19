//This code is written by DEVESH 2K20/IT/40
#include<iostream> 
using namespace std;
class String 
{ 
    private:
        string s;
    public:
        void getdata() 
        { 
            cin >> s;
        }
        bool operator ==(String s2) 
        { 
            if (s.compare(s2.s) == 0)
                return true;
            else
                return false;
        }
};
 
int main() 
{
    String s1 , s2; 
    s1.getdata();
    s2.getdata(); 
    if (s1 == s2)
        cout << "Strings are equal" << endl; 
    else
        cout << "Strings are not equal" << endl;
    return 0;
}
