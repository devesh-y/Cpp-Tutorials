#include<iostream>
using namespace std;

class FLOAT
{
    float i;
    public:
        
        FLOAT operator + (FLOAT a)
        {
            FLOAT temp;
            temp.i = i + a.i;
            return temp;
        }
         
        FLOAT operator - (FLOAT a)
        {
            FLOAT temp;
            temp.i = i - a.i;
            return temp;
        }
 
        FLOAT operator / (float a)
        {
            FLOAT temp;
            temp.i = i / a;
            return temp;
        }
         
        friend FLOAT operator*(float a,FLOAT b)
        {
            FLOAT temp;
            temp.i = a * b.i;
            return temp;
        }
         
        void show()
        {
            cout<<i<<endl;
        }
        FLOAT(): i(5) {}
        FLOAT(float x): i(x) {}
};
 
 
int main()
{
    FLOAT a = 27.6,b = 17.6,c;
    c = a + b;
    cout<<"a + b = ";c.show();
    c = a - b;
    cout<<"a - b = ";c.show();    
    c = a / 17.6;
    cout<<"a / 17.6 = ";c.show();  
    c = 27.6 * b;
    cout<<"27.6 * b = ";c.show();
    return 0;
}