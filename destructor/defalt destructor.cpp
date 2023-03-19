 #include <bits/stdc++.h>
using namespace std;
class hello
{
    public:
        int n;
        hello(int x):n(x)
        {}
        ~hello(){
            cout<<"destroyed";
        }
    
};
 
int main()
{
    hello* i=new hello(5);
    delete i;//it happens due to default destructor
    return 0;
} 