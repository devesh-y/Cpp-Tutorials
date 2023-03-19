#include<iostream>
using namespace std;
int main()
{
    //some escape sequence works little bit compiler to compiler
    cout<<"the word is cancelled not cancell\be\bd\b ";//when last word of string has to be removed by backspace then keep a space 
    //after the last word of string otherwise the last word will not remove
    cout<<"\nthe word\ris";//return carraige
    cout<<"\n\\hello\\   \'hello\'      \"hello\"   ";
    cout<<"the value will be \x25";//Hexadecimal notation the value after x stands for a hexadecimal digit
    cout<<"\nthis is the octal form of character \065";
    double var=5.6;
    cout<<"\n"<<var<<" "<<sizeof(var);
    cout<<"\n \u45af ";//unicode characters  it is four characters long and it is every digit is of hexadecimal type
 
    
}