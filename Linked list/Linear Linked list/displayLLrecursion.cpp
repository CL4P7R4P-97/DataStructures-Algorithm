//displaying using recursion

#include<bits/stdc++.h>

using namespace std;
struct node
{
	int data;
	struct node *next;
}*first;


void create(int A[], int n)
{
	struct node *t, *last;
	first = new struct node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	
	for(int i = 1; i<n; i++)
	{
		t = new struct node;
		t->data = A[i];
		t->next = NULL;
		last->next = t;
		last = t;
	}
	//t  = first;
    //	return t;

}
void display( struct node *h)
{
	if(h!=0)
	{
		cout<<h->data<<" ";
		display(h->next);
	}
	
}

void displayR(struct node *h)
{
	if(h != 0)
	{
	displayR(h->next);
	cout<<h->data<<" ";
}
}

int main()
{
	
	int A[] = {1,2,3,4,5,6,7,8,9,0};
	create(A,10);
	display(first);
	cout<<"\n";
	displayR(first);
	
}
