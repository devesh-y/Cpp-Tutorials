#include<iostream>
using namespace std;
class Distance 
{
    private:
    int feet;
    float inches;
    public:

    Distance() : feet(0), inches(0.0)
    { }

    Distance(int ft, float in) : feet(ft), inches(in)
    { }
    void getdist() 
    {
        cout << "\nEnter feet: "; cin >> feet;
        cout << "Enter inches: "; cin >> inches;
    }
    void showdist() 
    { 
        cout << feet << "\'-" << inches << '\"'; }
};

int main()
{
    Distance dist1(11, 6.25); 
    Distance dist2(dist1); //this is a default copy constructor which is a one argument constructor
    Distance dist3 = dist1; //and this is a another form of writing the upper code as a copy constructor, this is also said to be one argument constructor
    cout << "\ndist1 = "; dist1.showdist();
    cout << "\ndist2 = "; dist2.showdist();
    cout << "\ndist3 = "; dist3.showdist();
    cout << endl;
    return 0;
}