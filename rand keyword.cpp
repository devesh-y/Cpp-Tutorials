#include<iostream>
#include <cstdlib> //for srand(), rand()
#include <ctime>//for time for srand()
using namespace std;
int main()
{
    srand( time(NULL) );
    for(int i=0;i<10;i++)
    {
        cout<<rand()%2<<" ";
    }
    cout<<endl;
    for(int i=0;i<10;i++)
    {
        cout<<rand()%50<<" ";
    }
}