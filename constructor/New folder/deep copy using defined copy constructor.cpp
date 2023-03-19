#include<bits/stdc++.h>
using namespace std;
#define int long long int
class hero
{
    private:
        char *name;
    public:
  
        hero(char *x)
        {
            name=new char[20];
            strcpy(this->name,x);
        }
        hero(hero &temp){
            this->name=new char[20];
            strcpy(this->name,temp.name);
            
        }
        void print()
        {
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
    hero h2(h1);//or h2=h1
    h1.setname("dev");
    h1.print();
    h2.print();

    return 0;
}