#include<iostream>
using namespace std;
#define size 5
struct Stack
{
    int top=-1;
    int arr[size];
    void push(int x);
    void pop();
    bool isempty();
    int topelement();
    void print();
};
void Stack::push(int x)
{
    if(top+1==size)
    {
        cout<<" its an overflow \n";
    }
    else 
    {
        top++;
        arr[top] = x;
    }
}
 
void Stack::pop()
{
    if(top==-1) cout<<"its an underflow \n";
    else 
    {
        top-=1;
    }
}
 
bool Stack::isempty()
{
    if(top==-1) 
        return 1;
    else 
        return 0;
}
 
int Stack::topelement()
{
    
    return arr[top];
}
 
void Stack::print()
{   
    cout<<"\n";
    if(top==-1) cout<<"\nStack is empty\n";
    else{
    for(int i=0;i<=top;i++)
    cout<<arr[i]<<" ";
    cout<<"\n";
    }
}
 
int main()
{   
    Stack s;
    int choice;
    prev: cout<<"\n1.Push element \n2.Pop Element \n3.Check Empty Stack  \n4.find Top Element \n5.Print Stack \n6.Exit\n";
    cin>>choice;
 
    switch(choice)
    {
        case 1: {
            int x;
            cout<<"\nEnter element to be pushed into stack : ";
            cin>>x;
            s.push(x);
            goto prev;
            break;
        }
        case 2: {
            s.pop();
            goto prev;
            break;
        }
        case 3: {
            if(s.isempty()) cout<<"\nEmpty ";
            else cout<<"\n Not Empty";
            goto prev;
            break;
        }
        case 4: {
            cout<<"\nTopmost element is : "<<s.topelement();
            goto prev;
            break;
        }
        case 5: {
            s.print();
            goto prev;
            break;
        }
        case 6:
        {
            break;
        }
        default:{
            cout<<"\nwrong choice ";
            goto prev;
            break;
        }
    }
 
 
}