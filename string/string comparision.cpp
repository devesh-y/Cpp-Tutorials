#include<iostream>
using namespace std;
#include<string>
int main()
{
    //actualy the mingw compiler only writing -1 if the first one character which is not same and differnce is less than or equal to -1
    //or write only 1 if difference is equal to or greater than 1
    string str1 ("green mango");
    string str2 ("red mango");
    

    if (str1.compare(str2) != 0)
        cout << str1 << " is not " << str2 << '\n';

    if (str1.compare(6,5,"mango") == 0)
        cout << "still, " << str1 << " is an mango\n";

    if (str2.compare(str2.size()-5,5,"mango") == 0)
        cout << "and " << str2 << " is also an mango\n";

    if (str1.compare(6,5,str2,4,5) == 0)
        cout << "therefore, both are mangos\n";
    cout<<"\n\n\n\n";
    if(str1!=str2)
    {
        cout<<"not same";
    }
}