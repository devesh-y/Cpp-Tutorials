#include <bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	Node* next;
	Node(int d)
	{
		data = d;
		next = NULL;
	}
};

struct Queue {
	Node *front, *rear;
	Queue()
	{
		front =NULL;
		rear = NULL;
		
	}

	void enQueue(int x)
	{
		Node* temp = new Node(x);
		if (rear == NULL) 
		{
			front =temp; 
			rear = temp;
			return;
		}
		//rear is 15 
		//rear->next=20
		//15->20
		//now 20 is rear
		
		rear->next = temp;
		rear = temp;
	}

	void deQueue()
	{
		if (front == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		Node* temp = front;
		front = front->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
};
//if you wanted to know how did front->next get to know location than it should be remmber that address is linking when we write rear->next=temp
int main()
{

	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.enQueue(30);
	cout<<(unsigned long long int)q.front<<endl;
	cout<<(unsigned long long int)q.front->next<<endl;
	cout<<(unsigned long long int)q.rear<<endl;
	cout<<(q.front)->data<<endl;
	cout<<((q.front)->next)->data<<endl;
	cout<<((q.front)->next)->next->data;
	//cout<<endl<<(q.front->next)->next->data;
	/*
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Front : " << (q.front)->data << endl;
	cout << "Queue Rear : " << (q.rear)->data;
	*/
}

