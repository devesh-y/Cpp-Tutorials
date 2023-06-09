#include <iostream>
#include <vector>
using namespace std;
int main()
{ 
    double arr[] = { 1.1, 2.2, 3.3, 4.4 };
    vector<double> v1(arr, arr+4); //initialize vector to array
    vector<double> v2(4); //empty vector of size 4
    v1.swap(v2); //swap contents of v1 and v2
    while( !v2.empty() ) 
    {
        cout << v2.back() << ' '; 
        v2.pop_back(); 
    } 
    cout << endl;
    return 0;
}