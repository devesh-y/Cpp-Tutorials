#include<iostream>
using namespace std;
int main()
{
    class a{
        public:
            int a;
            int b;
    }b[5];
    for(int i=0;i<5;i++)
    {
        cout<<(unsigned)&b[i];
        cout<<endl;
    }
    class b
    {
        public:
            int c;
            int d;

    }a[5];
    cout<<"\n\n";
    for(int i=0;i<5;i++)
    {
        cout<<(unsigned)&a[i]<<endl;
    }

}