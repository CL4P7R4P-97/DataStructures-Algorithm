//Deleting a node from linked list

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
	for(int i=0; i<n; i++)
	{
		t = new struct node;
		if(first == NULL)
		{
			first = t;
			cin>>t->data;
			t->next  = NULL;
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

void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<"\n";
}

void deletion(struct node *p , int pos)
{
	int count= 0;
	struct node *last;
	while(p)
	{
		count++;
		
		if(pos == count && count ==1)
		{
			first = p->next;
			return;
		}
		else if(pos == count)
		{
			last->next = p->next;
		
			return;
		}
		
		else if(pos == count && p->next == NULL)
		{
			last->next = NULL;
			return;
		}
		last = p;
		p = p->next;
	}
}

int main()
{
	
  int n,pos;
  cin>>n>>pos;
  create(n);
  display(first);
  deletion(first, pos);
  display(first);
  
}

