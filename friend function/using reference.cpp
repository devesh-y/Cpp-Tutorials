#include<iostream>
using namespace std;
class A
{
    int a;
    int b;
    int c;
    public:
        void getvalues()
        {
            cout<<"Values of A, B & C\n";
            cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
        }
        void show();
        A():a(10),b(20),c(30){}
        void friend operator-(A&);      //Pass by reference
};
void A::show()
        {
            cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<endl;
        }
void operator-(A &obj)
{
    obj.a = -obj.a;     //Object name must be used as it is a friend function
    obj.b = -obj.b;
    obj.c = -obj.c;
}
int main()
{
   
    A obj1;
    obj1.getvalues();
    cout<<"Before Overloading\n";
    obj1.show();
    cout<<"After Overloading \n";
    -obj1;
    obj1.show();
    return 0;
}