#include <iostream>
#include <string>
using namespace std;
int main()
{
    char charray[80];
    string word;
    cout << "Enter a word: ";
    getline(cin,word);
    int wlen = word.length(); //length of string object
    cout << "One character at a time: ";
    for(int j=0; j<wlen; j++)
        cout << word.at(j); //exception if out-of-bounds
    // cout << word[j]; //no warning if out-of-bounds
    
    word.copy(charray, wlen,0); //second argument is how many characters,the third argument tells after what position copying starts from standard string, ----copy string object to array
    charray[wlen] = '\0'; //terminate with '\0'
    cout << "\nArray contains: " << charray << endl;
    return 0;
}