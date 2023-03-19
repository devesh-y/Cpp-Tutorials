#include<iostream>
#include<string.h>
using namespace std;
struct stack{
    int size;
    int top;
    char *arr;
};
int isfull(stack *sp)
{
    if(sp->top==sp->size-1)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int isempty(stack *sp){
    if(sp->top==-1)
    {
        return 1;
    }
    else{
        return 0;
    }
    
}
void push(stack *sp,char p)
{
    if(isfull(sp))
    {
        cout<<"stack overflow\n";
    }
    else{
        sp->top++;
        sp->arr[sp->top]=p;
        cout<<"the character "<<p<< " has been successfully pushed into the stack\n";


    }
}
char pop(stack *sp)
{
    if(isempty(sp))
    {
        cout<<"stack already empty\n";
        
    }
    else{
        char p=sp->arr[sp->top];
        sp->top--;
        return p;
    }
}

int precedence(char ch)
{
    if(ch=='*' || ch=='/')
    {
        return 3;
    }
    if(ch=='+'|| ch=='-')
    {
        return 2;
    }
    else{
        return 0;
    }
}
int isoperator(char ch)
{
    if(ch=='+' || ch=='-' || ch=='*' || ch=='/')
    {
        return 1;

    }
    else{
        return 0;
    }
}
char stacktop(stack *sp)
{
    return (sp->arr[sp->top]);
}
char * infixtopostfix(char* infix)
{
    struct stack *sp=new stack;
    sp->size=100;
    sp->top=-1;
    sp->arr=(char*)malloc(sp->size);
    char *postfix=(char*)malloc(strlen(infix)+1);
    int i=0;
    int j=0;
    while(infix[i]!='\0')
    {
        if(!isoperator(infix[i]))
        {
            postfix[j]=infix[i];
            j++;
            i++;
        }
        else{
            if(precedence(infix[i])>precedence(stacktop(sp)))
            {
                push(sp,infix[i]);
                i++;
            }
            else{
                postfix[j]=pop(sp);
                j++;
            }
        }
    }
    while(!isempty(sp))
    {
        postfix[j]=pop(sp);
        j++;
    }
    postfix[j]='\0';
    return postfix;
}
int main()
{
    char *infix="a-b+t/6";
    cout<<infixtopostfix(infix);
    
}