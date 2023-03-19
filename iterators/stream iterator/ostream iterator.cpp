#include <iostream>
#include <algorithm>
#include <list>
#include<iterator>
using namespace std;
int main()
{
    int arr[] = { 10, 20, 30, 40, 50 };
    list<int> theList;
    for(int j=0; j<5; j++) //transfer array to list
        theList.push_back( arr[j] );

    ostream_iterator<int> ositer(cout, ", "); //ostream iterator
    
    cout << "\nContents of list: ";

    copy(theList.begin(), theList.end(), ositer); //display list

    
}