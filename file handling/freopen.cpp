#include<iostream>
using namespace std;
int main() 
{
    FILE *fp;

    cout<<"This text is redirected to stdout\n";

    fp = freopen("file.txt", "w+", stdout);

    cout<<"This text is redirected to file.txt\n";
    fclose(fp);
    
    return(0);
}