//Displaying Doubly Linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
 struct node *prev;
}*first,*last;

void display(struct node *p)
{
  while(p->next != NULL)
  {
  	cout<<p->data<<" ";
  	p = p->next;
  }
  last = p;
  cout<<p->data;
  cout<<"\n";
}



void create(int n)
{
   struct node *last , *t;
   for(int i = 0; i<n; i++)
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

void Rdisplay(struct node *p)
{
	while(p->prev != NULL)
	{
		cout<<p->data<<" ";
		p = p->prev;
	}
	cout<<p->data;
	cout<<"\n";
}



int main()
{
  cout<<"Enter the length: ";
  int n;
  cin>>n;
  create(n);
  display(first);
  Rdisplay(last);
}

