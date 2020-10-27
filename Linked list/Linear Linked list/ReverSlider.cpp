//Reversing pointer or Sliding pointer

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
}*first;

void create(int n)
{
	struct node *t, *last;
	for(int i = 0; i<n; i++)
	{
		t = new struct node;
		if(first == NULL)
		{
			first = t;
			cin>>t->data;
			t->next = NULL;
			last = t;
		}
		else
		{
			last->next = t;
			cin>>t->data;
			t->next = NULL;
			last = t;
		}
	}
}

void Rslider(struct node *p)
{
	struct node *q , *r;
	p = first;
	q = NULL;
	r = NULL;
	while(p)
	{
		r = q;
	    q = p;
		p = p->next;
		q->next = r;
	}
	q->next = r;
	r = q;
	q = p;
	first =  r;
	}
	

void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<"\n";
}


int main()
{
  cout<<"Enter the length of List: ";
  int n;
  cin>>n;
  create(n);
  display(first);
  Rslider(first);
  cout<<"Reversal Traversal: ";
  display(first);
}

