#include <iostream>
#include<conio.h>
using namespace std;
struct Node 
{
	int data;
	struct Node* next;
	Node(int data)
	{
		this->data = data;
		next = NULL;
	}
};

struct LinkedList 
{
	Node* head;
	LinkedList() { head = NULL; }
	void reverse()
	{
		Node* current = head;
		Node *prev = NULL, *next = NULL;

		while (current != NULL) 
        {
			next = current->next;
            //reverse current node pointer
			current->next = prev;
			prev = current;
			current = next;
		}
		head = prev;
	}
	void print()
	{
		struct Node* temp = head;
		while (temp != NULL) 
        {
			cout << temp->data << " ";
			temp = temp->next;
		}
	}

	void push(int data)
	{
		Node* temp = new Node(data);
		temp->next = head;
		head = temp;
	}

    void insertnodeatbeginning(int data)
    {
        
        struct Node *newnode;
        newnode = (struct Node*)malloc(sizeof(struct Node));
        if(newnode == NULL)
        {
            printf("Unable to allocate memory.");
        }
        else
        {
            newnode->data = data; 
            newnode->next = head; 
            head = newnode;           
        }
    }

    void insertatend(int val)
    {
        
        Node* n= new Node(val);
        if(head==NULL)
        {
            head =n;
            return ;
        }
        Node* temp=head;
        while ((temp->next)!=NULL)
        {
            temp=temp->next;
        }
        temp->next=n;
    } 

    void insert(int val , int index)
    {
        Node* n= new Node(val);
        int t=index;
        Node* temp=head;
        while(t--)
        {
            temp=temp->next;
        }
        Node* temp2=temp->next;
        temp->next=n;
        n->next=temp2;
    } 

    void deletenode(int position)
    {
        if (head == NULL)
            return;
        Node* temp =head;

        if (position == 0)
        {
            head = temp->next;
            free(temp);            
            return;
        }
        for(int i = 0; temp!= NULL && i < position - 1; i++)
            temp = temp->next;

        if (temp == NULL || temp->next == NULL)
            return;
        Node *Next = temp->next->next;
        free(temp->next);
        temp->next = Next;
    }

};
int main()
{
	/* Start with the empty list */
	//here next and prev means that is written with output
	
    LinkedList ll;
	ll.push(20);
	ll.push(4);
	ll.push(15);
	ll.push(85);
    cout << "Given linked list\n";
	ll.print();
    ll.insertnodeatbeginning(105);
    cout << "\nGiven linked list after inserting at beginning\n";
	ll.print();
    ll.insertatend(50);
    cout << "\nGiven linked list after inserting at end\n";
	ll.print();
    ll.insert(37,3);
    cout << "\nGiven linked list after inserting after a given position\n";
	ll.print();
    ll.deletenode(4);
	cout << "\nGiven linked list after deleting a node at a given position\n";
    ll.print();
	ll.reverse();

	cout << "\nReversed Linked list \n";
	ll.print();

	
	getch();
	return 0;

}
