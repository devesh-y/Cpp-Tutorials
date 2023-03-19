#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX 6

int intArray[MAX];
int front = 0;
int rear = -1;
int itemCount = 0;

int peek() {
   return intArray[front];
}

bool isEmpty() {
   return itemCount == 0;
}

bool isFull() {
   return itemCount == MAX;
}

int size() {
   return itemCount;
}  

void insert(int data) {

   if(!isFull()) {
	
      if(rear == MAX-1) {
         rear = -1;            
      }       

      intArray[++rear] = data;
      itemCount++;
   }
   else
   {
       printf("overflow\n");
   }
}

int removeData() {
   int data = intArray[front++];
	
   if(front == MAX) {
      front = 0;
   }
	
   itemCount--;
   printf("removed\n");
   return data;  
   
}

int main() {
   /* insert 5 items */
   insert(3);
   insert(5);
   insert(9);
   insert(1);
   insert(12);
   insert(56);
   insert(676);
   removeData();removeData();
   removeData();
   removeData();
   removeData();
   removeData();
   insert(46);
   insert(46);
   insert(46);insert(46);insert(46);insert(46);insert(46);
   removeData();
   removeData();
   insert(464);
   insert(46);
   printf("%d",isFull());


}