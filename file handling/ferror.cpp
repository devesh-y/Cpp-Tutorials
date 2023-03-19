#include <iostream>
#include <cstdio>

using namespace std;

int main ()
{
    char ch;
    FILE* fp;
    fp = fopen("file.txt","w");
    
    if(fp)
    {
        ch = getc(fp);
        if (ferror(fp))
        {
            cout << "Can't read from file";        // here file is opened in writing mode so we cannot read and hence error occurs
            perror("\nmistake");
        }
    }
    cout<<"hello";
    fclose (fp);
    return 0;
}