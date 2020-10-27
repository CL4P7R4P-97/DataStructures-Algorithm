//Deleting from doubly linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
 struct node *prev;
}*first = NULL, *last = NULL;

void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p = p->next;
		
	}
	cout<<"\n";

}

void Rdisplay(struct node *p)
{
  while(p)
  {
  	cout<<p->data<<"\n";
  	p = p->prev;
  }
  cout<<"\n";

}

void create(int n)
{
   struct node *t, *last, *temp;
   for(int i = 0 ; i<n ; i++)
   {
   	t = new struct node;
   	if(first == NULL)
   	{
   		first = t;
   		cin>>t->data;
   		t->next = NULL;
   		t->prev = NULL;
   		last = t;
	   }
	   else
	   {
	   	
	   	last->next = t;
	   	cin>>t->data;
	   	t->next = NULL;
	   	t->prev = last;
	   	last = t;
	   }
   }

}

void deletion(struct node *p, int pos)
{
	struct node *last;
	int count = 0;
	while(p)
    {
    	count++;
    	if(count != pos)
    	{
    		last = p;
    		p = p->next;
		}
		else
		{
			if(count == pos && pos == 1)
			{
				first = p->next;
				first->prev = NULL;
				last = first;
				delete p;
				return;
			}
			if(count == pos)
			{
				if(p->next == NULL)
				{
					last ->next = NULL;
					delete p;
					return;
				}
				last->next = p->next;
			    (p->next)->prev = last;
			    last = p->next;
			    return;
				
			}
		}
	}

}

int main()
{
  cout<<"Enter the length & pos: ";
  int n, pos;
  cin>>n>>pos;
  create(n);
  display(first);
  Rdisplay(last);
  deletion(first, pos);
  display(first);
}

