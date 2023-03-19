#include<iostream>
using namespace std;
int main()
{
    enum days{
        mon, tue,wed=343, thu,fri=500,sat, sun
    }d1,d2,d3,d4,d5,d6,d7;                  //these names were be 0,1,2,3,4,5,6          they will be incremented by 1
    d1=mon;
    d2=tue;
    d3=wed;
    d4=thu;
    d5=fri;
    d6=sun;
    if(d1==mon){
        cout<<"i am right\n";
    }
    cout<<d3<<endl;
    cout<<d2<<endl;
    cout<<d4<<endl<<d5<<endl<<d6;
    cout<<d7;
    
}
