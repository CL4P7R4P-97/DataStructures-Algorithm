//

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
}*first, *second;

void display(struct node *p)
{
   while(p)
   {
   	cout<<p->data<<" ";
   	p = p->next;
   }
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
  		last = t;
	  }
	  else
	  {
	  	last->next = t;
	  	cin>>t->data;
	  	t->next = NULL;
	  	last =t;
	  }
  }
}

//void Rprinter(struct node *p)                just printing in reverse.
//{
//      if(p == NULL)
//      {
//      	return;
//	  }
//	  else
//	  {
//	  
//	  Rprinter(p->next);
//      cout<<p->data<<" ";
//  }
//
//}

void Rprinter(struct node *p, struct node *q)
{
	//changing link
	if(p != NULL)
	{
		Rprinter(p->next,p);
		p->next = q;
	}
	else
	first = q;
	
}

int main()
{
  cout<<"Enter the length of list: ";
  int n;
  cin>>n;
  create(n);
  display(first);
  Rprinter(first,second);
  display(first);
  
}

