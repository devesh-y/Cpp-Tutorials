#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    string s1("Quick! Send for Count Graystone.");
    string s2("Lord");
    string s3("Don't ");
   
    s1.erase(0, 7);            //here first argument is position of first letter and second argument is length of substring ----remove "Quick! "
   
    s1.replace(9, 5, s2);  //first argument is position of first letter and second argument is length of substring to replaced and 
    //third is the string to put to replace----replace "Count" with "Lord"
   
    s1.replace(0, 1, "s");                                      //replace 'S' with 's'
   
    s1.insert(0, s3);                                               //insert "Don't " at beginning
    s1.erase(s1.size()-1, 1);                        //remove '.'
    s1.append(3, '!');  //cannnot be a string  //append "!!!"
    int x = s1.find(' ');          //find a space
    while( x < s1.size() )                   //loop while spaces remain
    {
        s1.replace(x, 1, "/");                                          //replace with slash
        x = s1.find(' ');                                           //find next space
    }
    cout << "s1:" << s1 << endl;
    
    

}