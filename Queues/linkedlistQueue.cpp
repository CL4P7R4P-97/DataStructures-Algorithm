//

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
}*front = NULL, *rear  = NULL;

void enqueue( int value)
{
	 struct node *t;
     t = new struct node;
     if(t == NULL)
     {
	 
     cout<<"Heap full";
     return;
 }
     if(front == NULL)
     {
     	front = t;
     	t->data = value;
     	t->next = NULL;
     	rear = t;
	 }
	 else
	 {
	 	t->data = value;
	 	t->next = NULL;
	    rear->next = t;
	    rear = t;
	 }
	 
}

void dequeue()
{
	if(front == rear)
	{
		cout<<"Empty\n";
		return;
	}
	else
	{
		front = front->next;
		
	}
}

void display()
{
	struct node *temp = front;
	while(temp)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<"\n";
}

int main()
{
	
	enqueue(20);
	enqueue(30);
	enqueue(40);
	enqueue(50);
	display();
	dequeue();
	dequeue();
	display();
}
