#include <iostream>
#include <string.h> //for strcmp()
#include <algorithm>
using namespace std;
//array of strings
char* names[] = { "George", "Penny", "Estelle","Don", "Mike", "Bob" };

bool deveshstring(char*, char*); 

int main()
{
    //if you write less<*char>() then it will write the strings in the ordered manner that are written in the array and just like that if you write greater<char*>() it 
    //will write the strings from backward direction

    sort(names, names+6, less<string>()   ); //sort the strings--------if you write the function name deveshstring---just this no brackets no arguments
                                                                        // it will also do the same thing
    for(int j=0; j<6; j++)
        cout << names[j] << endl;
    return 0;
}
bool deveshstring(char* s1, char* s2) //returns true if s1<s2
{
    return ( strcmp(s1, s2)<0 ) ? true : false;
}