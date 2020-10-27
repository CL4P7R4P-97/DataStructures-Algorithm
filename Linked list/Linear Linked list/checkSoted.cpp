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
	for(int i =0 ; i<n; i++)
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
			cin>>t->data;
			last->next = t;
			t->next = NULL;
			last = t;
		}
	}
}


int checker(struct node *p )
{
	int flag = true;
	struct node *q ;
	q = first->next;
	while(p&&q)
	{
		if(p->data < q->data)
		{
			p= p->next;
			q = q->next;
		}
		else
		return -1;
	}
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
  int n,pos;
  cin>>n>>pos;
  create(n);
  display(first);
  cout<<checker(first);
}

