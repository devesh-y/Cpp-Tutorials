#include<iostream>
using namespace std;

class Test
{
    int x=45;
    public:
        Test(const Test &t) { //here if we dont use const then t.x can be changed
            cout<<"copied\n";
            //t.x=655;     //here it will give error
            x=655;
        }
        Test()	 {
            cout<<"constructor called\n";
        }
        void change(int p)
        {
            x=p;
        }
        void print()
        {
            cout<<x<<endl;
        }
};


int main()
{
	Test t1;
	Test t2(t1);
    //t2.change(34);
    t1.print();
    t2.print();

	return 0;
}
