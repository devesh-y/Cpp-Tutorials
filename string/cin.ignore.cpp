#include <iostream>     
using namespace std;
int main () 
{
    char first, last;
    std::cout << "Please, enter your first name followed by your surname: ";
    cin>>first;     // get one character ---works same as cin.get();
    cin.ignore(256,' ');   // ignore until space
    last = cin.get();      // get one character

    std::cout << "Your initials are " << first << last << '\n';

    return 0;
}