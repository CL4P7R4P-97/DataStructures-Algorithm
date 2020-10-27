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
void Sinsert(struct node *p, int value)
{
	struct node *last, *t;
	t = new struct node;
	while(p)
	{
		if(p->data < value)
		{
		
		last = p;
		if(p->next == NULL)
		{
			t->data = value;
			t->next = NULL;
			last->next = t;
			last = t;
			return;
		}
		p = p->next;
	}
		else
		{
		        if(p->data > value)
		        {
		        	if(first == p)
		        	{
		        		t->data = value;
		        		t->next = p;
		        		t = first;
		        		return;
					}
					else
					{
						t->data = value;
						t->next = p;
						last->next = t;
						last = t;
						return;
						
					}
				}
			
				
			
			
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


int main()
{
  int n, value;
  cin>>n>>value;
  create(n);
  display(first);
  Sinsert(first,value );
  display(first);
}

