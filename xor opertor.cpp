#include<iostream>
using namespace std;
int main()
{
    unsigned char b=0x32;
    b=b^0x0C;
    printf("%#02x\n",b);
    printf("%#02X\n",b);
    printf("%X\n",b);
    printf("%2X\n",3);//this will work as setw
    printf("%02X\n",3);//if value is less than 2 digits than zero's will be shown at left to make answer 2 digits only 
    printf("%03X\n",3);//if value is less than 3 digits than zero's will be shown at left to make answer 3 digits only
    printf("%X\n",23);

    int oc=012;
    cout<<"\noctal value of ocis "<<oc;
}