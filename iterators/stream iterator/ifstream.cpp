#include <iostream>
#include <list>
#include<iterator>
#include <fstream>
#include <algorithm>
using namespace std;
int main()
{
    list<int> iList; //empty list
    ifstream infile("ITER.DAT"); //create input file object
    //(ITER.DAT must already exist)
  
  
    istream_iterator<int> anyname(infile); //file
    istream_iterator<int> end_of_stream; //eos ------------it needs ctrl+z to terminate

    //copy from infile to iList

    copy( anyname, end_of_stream, back_inserter(iList) );//copy from cin till i write ctrl+z


    cout << endl; //display iList

    ostream_iterator<int> ositer(cout, "--");

    copy(iList.begin(), iList.end(), ositer);
    cout << endl;
    
    return 0;

}