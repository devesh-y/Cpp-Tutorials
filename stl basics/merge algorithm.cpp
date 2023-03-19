#include <iostream>
#include <algorithm> 
using namespace std;
int src1[] = { 2, 3, 4, 6, 8 };
int src2[] = { 3, 5, 1 };
int dest[8];
int main()
{ 
    merge(src1, src1+5, src2, src2+3, dest);//it will merge in a way that the smaller will come first when it starts from both arrays individually 
    for(int j=0; j<8; j++) //display dest
        cout << dest[j] << ' ';
    cout << endl;
    return 0;
}
