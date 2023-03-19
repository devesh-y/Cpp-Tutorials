#include <iostream>
using namespace std;

class A
{
    public:
    void show() { cout << "Class A\n"; }
};
class B
{
    public:
    void show() { cout << "Class B\n"; }
};
class C : public A, public B
{

};

int main()
{
    C objC;                             //object of class C
    objC.show();                 //ambiguous--will not compile
    objC.A::show();                 //OK
    objC.B::show();                         //OK
    return 0;
}
/*
class A
{
    public:
    void func();
};
class B : public A
{ 

};
class C : public A
{ 

};
class D : public B, public C
{

};
int main()
{
    D objD;
    objD.func(); //ambiguous: won’t compile
    return 0;
}
However, both b and c contain a copy of func(), inherited from A. The compiler can’t decide which copy to use, and signals an error.
*/