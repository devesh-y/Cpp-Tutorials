//when there is no constructor in base class as well as in derived class then calling the default constructor of base class 
#include<iostream>
using namespace std;

class employee
{
    protected:
        int x;
    public:
        void getdata()
        {
            cout<<"write the value of x: ";cin>>x;
        }    

};

class labour:public employee
{
    protected:
        int y;
    public:
        void getdata()
        {
            cout<<"fill the value of y: ";cin>>y;
        }
        void putdata() const;
};

void labour::putdata() const
    {
        cout<<"\nthe value of y is : "<<y<<endl;
    }

int main()
{
    
    labour li;
    li.getdata();
    li.putdata();
}
    

