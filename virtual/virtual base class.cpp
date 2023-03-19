//Grandchild class wants to
//access data or functions in the Parent class.
#include<iostream>
using namespace std;
class Parent
{
    protected:
        int basedata=56;
};
class Child1 :virtual public Parent //shares copy of parent 
{ };
class Child2 :virtual public Parent //shares copy of parent 
{ };
class Grandchild : public Child1, public Child2
{
    public:
        int getdata()
        { 
            return basedata; 
        } //no ambiguity same copy of parent
};
int main()
{
    Grandchild g;
    cout<<g.getdata();
}