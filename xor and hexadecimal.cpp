#include<iostream>
using namespace std;
int main()
{
    unsigned char b=0x32;
    cout<<b<<endl;
    b=b^0x0C;//xor operator
    printf("%#x\n",b);
    printf("%#X\n",b);
    printf("%X\n",b);
    printf("%2X\n",3);//this work as setw
    printf("%02X\n",3);//if will is less than 2 digits then 0 is written at left side to make value to 2 digits
    printf("%03X\n",3);//if will is less than 2 digits then 0 is written at left side to make value to 2 digits
    printf("%X\n",23);

    cout<<"\nhexadecimal value of 56 is "<<hex<<56;
    cout<<"\noctal value of 56 is "<<oct<<56;
}