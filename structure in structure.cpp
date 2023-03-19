#include<iostream>
using namespace std;
int main()
{
    struct distance
    {
        int feet; int inches;
    };
    struct room{
        distance length;
        distance width;
    };
    room dining; //define a room
    dining.length.feet = 13; //assign values to room
    dining.length.inches = 6.5;
    dining.width.feet = 10;
    dining.width.inches = 0.0;
        
}