#include <iostream>
#include <list>
#include <algorithm>
#include<iterator>
using namespace std;
int main()
{
    list<float> fList(5);
    cout << "\nEnter 5 floating-point numbers: ";
   

    istream_iterator<float> cin_iter(cin); //cin

    istream_iterator<float> end_of_stream; //eos

    //copy from cin to fList

    copy( cin_iter, end_of_stream, fList.begin() );

    cout << endl; //display fList

    ostream_iterator<float> ositer(cout, "--");
    copy(fList.begin(), fList.end(), ositer);
    cout << endl;
    return 0;
}