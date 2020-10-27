//displying linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node* next;
} *first  = NULL;

struct node * create(int A[], int n )
{
	struct node *t, *last;
	first = new struct node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	for(int i = 1; i<n ; i++)
	{
		t = new struct node;
	    t->data = A[i];
	    t->next = NULL;
	    last->next = t;
	    last = t;
	}
	t=first;
}

void display( struct node *L,int n)
{
	for(int j=0; j<n; j++)
	{
		cout<<L->data<<" ";
		L = L->next;
	}
	
}
	


int main()
{
	struct node *printer;
	int A[]  = {1,2,33,23,53,6,57,34,76,22};
	printer = create(A,10);
	display(printer,10);
}
