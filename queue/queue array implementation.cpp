#include<iostream>
using namespace std;
#define maxqueue 100
class queue
{
    public:
        int items[maxqueue];
        int size=0;
        int front=0;
        int rear=maxqueue-1;
        int full()
        {
            if(size==maxqueue)
            {
               
                return 0;
            }
            else   
            {
               
                return 1;
            }
        }
        int empty()
        {
            if(size==0)
            {
              
                return 0;
            }
            else
            {
            
                return 1;
            }
        }
        void enqueue(int data)
        {
            if(full()==0)
            {
                cout<<"queue is full\n";
                return;
            }
            if(full()==1)
            {
                rear = (rear + 1) % maxqueue;
                size++;
                items[rear] = data;
            }
        }
        void dequeue()
        {
            if(empty()==0)
            {
                cout<<"no element remaining in queue\n";
                return;
            }
            if(empty()==1)
            {
                int data = items[front];
                front = (front + 1) % maxqueue;
                size--;
            }
        }
        void getfront()
        {
            if(empty()==0)
            {
                cout<<"no elements in queue\n";
            }
            else
            {
                cout<<items[front]<<endl;
            }
        }
        void getrear()
        {
            if(empty()==0)
            {
                cout<<"no elements in queue\n";
            }
            else
            {
                cout<<items[rear]<<endl;
            }
        }
};
int main()
{
    queue a;
    a.enqueue(54);
    a.enqueue(23);
    a.dequeue();
    /*
    
    a.enqueue(67);
    a.enqueue(45);
    
    a.enqueue(676);
    a.getfront();
    a.getrear();*/
    a.getrear();
    a.getfront();
}
