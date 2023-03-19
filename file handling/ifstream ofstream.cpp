#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;

int main() 
{
   
    ifstream inFile;
    char s[101];
    inFile.open("file.txt");
    if (!inFile) {
        cout << "Unable to open file";
        exit(1); // terminate with error
    }
    
    else{
        inFile>>s;
        cout<<s;
    }
    ofstream file;
    file.open("file.txt");// or it can be be ofstream file("filename.txt");
    file<<"\nhello";
    inFile.close();
    return 0;
}