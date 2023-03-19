#include <iostream>
#include <vector>
using namespace std;
int main()
{ 
    double arr[] = { 1.1, 2.2, 3.3, 4.4 };
    vector<double> v1(arr, arr+4); //initialize vector to array
  
    while( !v1.empty() ) 
    {
        cout << v1.back() << ' '; 
        v1.pop_back(); 
    } 
    cout<<v1.front();
    cout << endl;
    return 0;
}