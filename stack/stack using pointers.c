#include <stdio.h>
#include<stdlib.h>
# define STACKSIZE 100
# define TRUE 1
# define FALSE 0
	struct stack{
	    int top;
	    int items[STACKSIZE];
	};
	int empty (struct stack *);
   	int pop(struct stack *);
    void push(struct stack *, int);
int main(void) {
	struct stack s;                    
	s.top=-1;
	int x=10, i=0;	
    
    push(&s,x);  
    i=pop(&s);
    printf("%d", i);
    return 0;
}	
int pop(struct stack *ps){
    if(empty(ps)){
        printf("stack underflow");
        exit(1);
    }
    return(ps->items[ps->top--]);   
}
void push(struct stack *ps, int x){
    printf("\n%d\n",++(ps->top));
    ps->items[++(ps->top)]=x;
    
}
int empty(struct stack *ps){
    if (ps->top==-1)
        return(TRUE);
    else
        return(FALSE);
}
/*	if(empty(&s))
	    printf("stack empty");
	else
	    printf("stack not empty"); */