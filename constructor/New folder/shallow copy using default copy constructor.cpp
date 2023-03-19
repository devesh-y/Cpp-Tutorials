#include<bits/stdc++.h>
using namespace std;
#define int long long int
class hero{
    private:
        char *name;//here this is a pointer so, the same address name is taken by other object and this is called shallow copy and done by default constructor

        //but here this is only due to the fact that name is a pointer here if you take ohter than a pointer than it will not take place because pointer is responsible for same address
    public:
  
        hero(char *x)
        {
            name=new char[20];
            strcpy(this->name,x);
        }

        void print(){
            cout<<"name is "<<name<<"\n";
        }
        void setname(char * temp){
            strcpy(this->name,temp);
        }
};
signed main()
{

    //the default copy constructor did shallow copy
    hero h1("devesh");
    h1.print();
    hero h2(h1); //or h2=h1
    h1.setname("dev");
    h1.print();
    h2.print();

    return 0;
}