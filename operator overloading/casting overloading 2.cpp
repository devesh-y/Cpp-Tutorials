#include <iostream>
using namespace std;
class Distance  
{
    private:
        float x;
    public:
        Distance (float p):x(p)
        {}
        operator int()
        {
            int t=int(x);

            return t;
        }
        void get()
        {
            cout<<x;
        }
        
};
int main()
{
    Distance d1(54.1525);
    int y=(int)d1;//the most important thing is here now we can write simply y=d1;-----it will understand it also
    cout<<y<<endl;
    d1.get();
}