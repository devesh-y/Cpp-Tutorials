#include <fstream>
#include<iostream>
#include<iterator>
#include <algorithm>
#include <list>
using namespace std;
int main()
{
    int arr[] = { 11, 21, 31, 41, 51 };
    list<int> theList;
    for(int j=0; j<5; j++) 
        theList.push_back( arr[j] ); 

    ofstream anyname("ITER.DAT"); //create file object
    ostream_iterator<int> ositer(anyname, " "); //iterator
   
   
    copy(theList.begin(), theList.end(), ositer);
    return 0;
}