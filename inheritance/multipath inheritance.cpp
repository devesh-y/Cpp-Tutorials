#include<iostream>
using namespace std;
class student 
{
    protected:
        int marks;
    public:
        void getdata()
        {
            cout<<"enter the marks:";cin>>marks;cout<<endl;
        }    
};
class hello:public student
{
    protected:
        int rollno;
    public:
        void getdata()
        {
            cout<<"enter the roll no: ";cin>>rollno;cout<<endl;
        }        
};
class you:public hello
{
    protected:
        int number;
    public:
        void getdata()
        {
            cout<<"enter the number: ";cin>>number;cout<<endl;
        }

    

};
int main()
{
    you y1;
    y1.getdata();//it will call the function of you
                 // if in you class the function is changed to youdata() then it will call the function getdata() of hello class and also
                 //when the getdata() function of hello class is changed to gettdata() then it will call the getdata() function of student class
    y1.student::getdata(); //it will call the student function      
}