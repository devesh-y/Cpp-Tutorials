#include <iostream>
using namespace std;

class Distance 
{
    private:
        int feet;
        float inches;
    public:
        Distance(int ft, float in) : feet(ft), inches(in)
        { }
        void getdist() 
        {
            cout << "\nEnter feet: "; cin >> feet;
            cout << "Enter inches: "; cin >> inches;
        }
        void showdist() const 
        { 
            cout << feet << "\'-" << inches << '\"'; 
        }
};

int main()
{
    const Distance football(300, 0);
    // football.getdist(); //ERROR: getdist() not const
    cout << "football = ";
    football.showdist(); 
    Distance dis(34,556);
    cout<<"\n";
    dis.showdist();
    cout << endl;
    return 0;
}