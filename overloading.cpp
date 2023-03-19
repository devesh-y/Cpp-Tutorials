#include<iostream>
#include<cstdlib>
using namespace std;
float area(float r)
{
        return(3.14 * r * r);
}
float area(float b,float h)
{
        return(0.5 * b * h);
}
int main()
{
        printf("\n\nthis code is written by Devesh 2K20/IT/40\n");
        float b,h,r,l;
        int ch;
        do
        {
                cout<<"\n 1. Area of Circle";
                cout<<"\n 2. Area of Triangle";
                cout<<"\n 3. Exit";
                cout<<"\n\n fill your Choice what you want to find : ";
                cin>>ch;
                switch(ch)
                {
                        case 1:
                        {
                                cout<<"\n Enter the Radius of Circle : ";
                                cin>>r;
                                cout<<"\n Area of Circle : "<<area(r);
                                break;
                        }
                        case 2:
                        {
                                cout<<"\n Enter the length of Base & Height of Triangle : ";
                                cin>>b>>h;
                                cout<<"\n Area of Triangle : "<<area(b,h);
                                break;
                        }
                        case 3:
                                exit(0);
                        default:
                                cout<<"\ninvalid option";
                }
        }while(ch!=3);
        return 0;
}