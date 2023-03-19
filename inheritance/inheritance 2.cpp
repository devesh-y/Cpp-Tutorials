//this code is written by Devesh 2K20/IT/40
#include<iostream>
using namespace std;
class Rectangle
{
    protected:
        int width;
        int height;
    public:
        void display()
        {
            cout<<width<<" "<<height;
        }    
};
class RectangleArea: public Rectangle
{
    public:
        void read_input()
        {
            cin>>width;
            cin>>height;
        }
        void display()
        {
            cout<<"\n"<<width*height<<"\n";
        }
};
int main()
{
    RectangleArea area;
    
    area.read_input();
    area.Rectangle::display();
    area.display();
}