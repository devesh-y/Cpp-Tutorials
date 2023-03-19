#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
}*front, *back;
 

void initialize() 
{
    front = back = NULL;
}
 
int getsize() 
{
    struct node *temp = front;
    int count = 0;
     
    if(front == NULL && back == NULL)
        return 0;
 
    while(temp != back)
    {
        count++;
        temp = temp->next;
    }
    if(temp == back)
        count++;
         
    return count;
}
 
int getfrontelement() 
{
    return front->data;
}
int getlastelement() 
{
    return back->data;
}

void isempty() 
{
    if (front == NULL && back == NULL)
        printf("Empty Queue\n");
    else
        printf("Queue is not Empty\n");
}

void enqueue(int num) 
{
    struct node *temp;
    temp = (struct node *)malloc(sizeof(struct node));
    temp->data = num;
    temp->next = NULL;
     
    if (back == NULL) 
    {
        front = back = temp;
    } 
    else 
    {
        back->next = temp;
        back = temp;
    }
}

void dequeue() 
{
    struct node *temp;
    if (front == NULL) 
    {
        printf("\nQueue is Empty \n");
        return;
    } 
    else 
    {
        temp = front;
        front = front->next;
        if(front == NULL)
        {
            back = NULL;
        }
        printf("Removed Element : %d\n", temp->data);
        free(temp);
    }
}

void printqueue() 
{
    struct node *temp = front;
  
    if ((front == NULL) && (back == NULL)) 
    {
        printf("Queue is Empty\n");
        return;
    }
 
    while (temp != NULL) 
    {
        printf("%d", temp->data);
        temp = temp->next;
        if(temp != NULL)
            printf("-->");
    }
}
 
int main() 
{
    /* Initializing Queue */
    initialize();
    /* Adding elements in Queue */
    enqueue(1);
    enqueue(3);
    enqueue(7);
    enqueue(5);
    enqueue(10);
    /* Printing Queue */
    printqueue();
    /* Printing size of Queue */
    printf("\nSize of Queue : %d\n", getsize());
    /* Printing front and rear element of Queue */
    printf("Front Element : %d\n", getfrontelement());
    printf("Rear Element : %d\n", getlastelement());
    /* Removing Elementd from Queue */
    dequeue();
    dequeue();
    dequeue();
    dequeue();    
    dequeue();
    dequeue();
     
    return 0;
}