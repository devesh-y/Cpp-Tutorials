//this program is written by Devesh 2K20/IT/40
#include<iostream>
using namespace std;
class FLOAT
{
    private:
        float f;
    public:
        FLOAT():f(0)
        {}
        FLOAT(float k):f(k)
        {}
        FLOAT operator+(FLOAT d)
        {
            FLOAT temp;
            temp.f=f+d.f;
            return temp;
        }
        FLOAT operator -(FLOAT d)
        {
            FLOAT temp;
            temp.f=f-d.f;
            return temp;
        }
        FLOAT operator-()
        {
            float t=f*(-1);
        
            FLOAT temp;
            temp.f=t;
            return temp;
        }
        FLOAT operator*(FLOAT d)
        {
            FLOAT temp;
            temp.f=f*d.f;
            return temp;
        }
        FLOAT operator/(FLOAT d)
        {
            FLOAT temp;
            temp.f=f/d.f;
            return temp;
        }
        void getvalues()
        {
            cout<<f<<endl;
        }
};
int main()
{
    FLOAT f1(2);
    FLOAT f2(16);
    FLOAT f3(20);
    FLOAT f4=-f1+f2-f3;
    FLOAT f5=f2/f1;
    FLOAT f6=f2*f3;
    cout<<"-f1+f2-f3=";
    f4.getvalues();
    cout<<"f2/f1=";
    f5.getvalues();
    cout<<"f2*f3=";
    f6.getvalues();
}