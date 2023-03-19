#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;
int main()
{
    int arr1[] = { 1, 3, 5, 7, 9 }; 
    int arr2[] = {2, 4, 6}; 
    deque<int> d1;
    deque<int> d2;
    for(int i=0; i<5; i++) 
        d1.push_back( arr1[i] );
    for(int j=0; j<3; j++)
        d2.push_back( arr2[j] );
    
    deque<int>::iterator ii;
    ii=d2.end();               //important



    cout<<*ii;                      //just like back_insertor work
    //copy( d1.begin(), d1.end(), front_inserter(d2) ); // items will be push_front in the deque
    //copy( d1.begin(), d1.end(), inserter(d2, d2.begin()) );//------it is used when we want to insert at a specific place//The first argument to inserter is the container to be copied into, and 
                                                           //the second is an iterator pointing to the location where copying should begin 
    cout << "\nd2: "; 
    for(int k=0; k<d2.size(); k++)
        cout << d2[k] << ' ';
    cout << endl;
    return 0;
}