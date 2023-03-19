//this code is written by Devesh 2K20/IT/40
#include<iostream>
using namespace std;
class base
{
    private:
        int x;
    public:
        void swapdata(base* b)
        {

            int temp;
            temp=this->x;
            this->x =b->x;
            b->x=temp;
        }
        int getdata()
        {
            cout<<x<<endl;
            return 0;
        }
        int putdata()
        {
            cin>>x;
        }

};
int main()
{
    base b1,b2;
    cout<<"enter values of private data member of two objects\n";
    b1.putdata();
    b2.putdata();
    b1.swapdata(&b2);
    cout<<"\nafter swapping\n";
    b1.getdata();
    b2.getdata();

}
