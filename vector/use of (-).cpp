#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> v(5); 
    vector<int>::iterator iter; 
    int data = 0;
  
    for(iter = v.begin(); iter != v.end(); iter++)
        *iter = data += 2;
    iter = find(v.begin(), v.end(), 8);                             
                                                                    
    if( iter != v.end() )
        cout << "\nFound 8 at location " << (iter-v.begin() );                       // - operator is defined for those whose have random accces 
    else                                                                                // not defined for lists
        cout << "\nDid not find 8.";
}