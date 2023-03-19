#include<iostream>
using namespace std;
class Distance
{
    int x;
    int y;
    public:
        Distance():x(0),y(0)
        {}
        Distance(int p):x(p),y(0)
        {}
        void get()
        {
            cout<<x<<endl<<y<<endl;
        }
};
int main()
{
    Distance d;
    d.get();
    d=5;
    d.get();
}