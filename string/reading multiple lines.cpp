//it will not write the terminate character
//you have to press the enter key even after the terminate wor
//you can write multiple lines by pressing enter this will not work without this third argument in cin.get
#include<iostream>
using namespace std;
int main()
{
    char str[20];
    cout << "\nEnter a string:\n";
    cin.get(str, 10, 'q'); //terminate with q
    cout << "You entered:\n" << str << endl;
    return 0;
}