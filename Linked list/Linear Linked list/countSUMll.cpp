//sum of all element of linked list

#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
}*first = NULL;

void create( int A[], int n)
{
	struct node *t, *last;
	first = new struct node;
	first->data = A[0];
	first->next = NULL;
	last = first;
	for(int i = 1; i<n; i++)
	{
	     t = new struct node ;
	     t->data = A[i];
	     t->next = NULL;
	     last->next= t;
	     last = t;
	    // cout<<"done"<<"\n";
	     
	}
}
void display(struct node *h)
{
	while(h)
	{
		cout<<h->data<<" ";
		h = h->next;
	}
}
int sum(struct node *h)
{
	if(!h)
	{
		return 0;
	}
	else
	return sum(h->next) + h->data;
}

int count(struct node *h)
{
	if(h==0)
	return 0;
	else
	return count(h->next)+1;
}

int main()
{
	int A[] = {234,35,23,68,45,35,73,53,66,45};
	create(A,10);
	display( first);
	cout<<"\nsum: ";
	cout<<sum( first)<<"\n";
	cout<<"count: ";
	cout<<count(first);
}
