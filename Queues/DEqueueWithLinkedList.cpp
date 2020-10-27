//DEqueue with Linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
 struct node *prev;
}*front, *rear, *head;

void display()
{
	struct node *t;
	t = front;
   while(t)
   {
   	cout<<t->data<<" ";
   	t = t->prev;
   }
   cout<<"\n";
}

void enqueueWithR(int val)
{
	struct node *t;
    t = 	new struct node ;
    if(t== NULL)
   {
	cout<<"Heap full! \n"; return ;}
	
	if(rear == NULL)
	{
		t->data = val;
		t->next = NULL;
		t->prev  = NULL;
		rear = t;
		front = rear;
	}
	else
	{
		t->data = val;
		t->next = rear;
		t->prev  = NULL;
		rear->prev = t;
		rear = t;
	}
	display();
}

void dequeueWithR()
{
	if(rear == front)
	{
		cout<<"Empty ! \n";
	}
	else
	{
		rear = rear->next;
		rear->prev = NULL;
		
	}
		display();
}

void enqueueWithF(int val)
{
	struct node *t;
	t = new struct node;
	if(t == NULL)
	{
	cout<<"Heap full ! ";
	return;
}
if(front == NULL)
{
	t->data = val;
	t->next = NULL;
	t->prev = front;
	front = t;
}
else
{
	t->data = val;
	t->next = NULL;
	t->prev = front;
	front->next = t;
	front = t;
}
	display();


}

void dequeueWithF()
{
	if(front == NULL)
	{
		cout<<"already empty";
	}
	else
	{
		front = front->prev;
		front->next = NULL;
		
		
	}
		display();
}
int main()
{
 enqueueWithR(100);
 enqueueWithR(200);
 enqueueWithR(300);
 enqueueWithR(400);
 dequeueWithR();
 dequeueWithR();
 enqueueWithF(1000);
 enqueueWithF(2000);
 dequeueWithF();
 
}

