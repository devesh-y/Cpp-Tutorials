#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;
int main()
{
    /*FILE* fp=fopen("1.txt","r+");
    
    rewind(fp);
    char arr1[10],arr2[10],arr4[10];
    int arr3;

    
  
    cout<<"\n"<<ftell(fp);
    fseek(fp,1,SEEK_CUR);
    cout<<"\n"<<ftell(fp);
    
    fprintf(fp,"%s\t%s\t%d",arr1,arr2,arr3);
    cout<<"\n"<<ftell(fp);
   
    fprintf(fp,"%s\t%s\t%d","-----","hello",25);
    cout<<"\n"<<ftell(fp);
    
    fclose(fp);
    char helo[10]="hello";
    int i=0;
    while(helo[i]!='\0')
    {
        
        helo[i]='-';
        printf("%c ",helo[i]);
        i++;
    }
    printf("\n%s",helo);
    */
    FILE* fp=fopen("1.txt","r+");
    char arr1[10],arr2[10],arr4[10];
    int arr3;
    
    fscanf(fp,"%s\t%s\t%d\t%s",&arr1,&arr2,&arr3,&arr4);
    printf("%s\t%s\t%d\t%s",arr1,arr2,arr3,arr4);
    cout<<"\n"<<ftell(fp);


}