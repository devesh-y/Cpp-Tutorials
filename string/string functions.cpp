#include <iostream>
#include <string>
using namespace std;
int main()
{
    //all will return -1 if not found
    string s1 ="In Xanadu did Kubla Kahn a stately pleasure dome decree";
    int n;
    n = s1.find("Kublaaa");//it can be a character
    cout << "Found Kubla at " << n << endl;
    
    n = s1.find_first_of("spde");//here it finding the letters s p d e
    cout << "First of spde at " << n << endl;
   
    n = s1.find_first_not_of("aeiouAEIOU");
    cout << "First consonant at " << n << endl;
    
    n=s1.rfind("dome");//scans the string backward but numbering from forward(default)
    cout<<n<<endl;
   
    n=s1.find_last_of("spde");
    cout<<n<<endl;
   
    n=s1.find_last_not_of("spde");
    cout<<n<<endl;
    return 0;
}