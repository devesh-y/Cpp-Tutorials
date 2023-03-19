#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
	const char *str = "123.4";
	float x;
	sscanf(str, "%f", &x);
	printf("\nThe value of x : %f", x);

}
