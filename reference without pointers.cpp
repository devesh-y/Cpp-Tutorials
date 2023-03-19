#include<iostream>
using namespace std;
void swap(int &x, int &y)
{
    int temp = x;
    x = y;
    y = temp;
}
  
int main()
{
    int x, y;
    cout<<"enter the value of x and y"<<endl;
    cin>>x>>y;
    swap(x,y);
    printf("\nAfter Swapping: x = %d, y = %d", x, y);
    return 0;
}