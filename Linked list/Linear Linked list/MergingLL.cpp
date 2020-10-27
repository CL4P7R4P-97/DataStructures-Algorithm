//Merging two linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
}*first, *second;

void display(struct node *p)
{
	cout<<"Printing------------>>>>>";
	while(p)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<"\n";

}
struct node * create(int n, struct node *p)
{
  struct node *t, *last;
  cout<<"\nEnter the sorted list items: ";
  for(int i = 0; i<n; i++)
  {
  	t = new struct node;
  	if( p == NULL)	
  	{
  		p = t;
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
  return p;
  

}

struct node * merger(struct node *h1, struct node *h2)
{
      	struct node *header, *tail;
      	if(h1->data <= h2->data)
      	{
      	     header = h1;
      	     tail = header;
      	     h1 = h1->next;
      	     header->next = NULL;
		  }
		  else
		  {
		  header = h2;
		  tail = header;
		  h2  = h2->next;
		  header->next = NULL;
		  }
		  while( h1&&h2)
		  {
		  	if(h1->data <= h2->data)
		  	{
		  		tail->next = h1;
		  		tail = h1;
		  		h1 = h1->next;
		  		tail->next = NULL;
		  		
			  }
			  else
			  {
			  	tail->next = h2;
			  	tail = h2;
			  	h2 = h2->next;
			    tail->next = NULL;
			  }
		  }
		  if(h1 != NULL)
		  {
		  	tail->next = h1;
		  	tail  = h1;
		  	h1 = h1->next;
		  	tail->next = NULL;
		  }
		  else
		  {
		  	tail->next = h2;
		  	tail = h2;
		  	h2 = h2->next;
		  }
		  
		    return header;
		  	
		  }


int main()
{
  cout<<"Enter the length limit: ";
  int n,m;
  cin>>n>>m;
  first = create(n,first);
  display(first);
  second = create(m,second);
  display(second);
  cout<<"Merging.......\n";
  display(merger(first,second));
}

