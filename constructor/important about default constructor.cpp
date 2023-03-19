//if we define any constructor by own then compiler dont do make any default constructor---it has no arguments
#include<iostream>
using namespace std;
class hello
{
    private:
        int x;
        int y;
    public:
        hello(int ft,int yt):x(ft),y(yt)
        {}

};
int main()
{
    hello p;
}