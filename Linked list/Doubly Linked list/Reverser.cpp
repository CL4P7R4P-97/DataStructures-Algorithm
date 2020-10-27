//Reversing the doubly linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
 struct node *prev;
}*first, *last1;

void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		last1= p;
		p = p->next;
	}
	cout<<"\n";

}

void Rdisplay(struct node *p)
{
  while(p)
  {
  	cout<<p->data<<" ";
  	p = p->prev;
  }
  cout<<"\n";

}

void create(int n)
{
   struct node *t, *last;
   for(int i = 0 ; i<n; i++)
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

void Reverser(struct node *p)
{
	struct node *temp, *tptr;
	int count= 0;
	while(p)
	{
		count++;
		
	
	   if(p == first)
	  {
	  	//cout<<"first "<<count<<" ";
	  	p->prev = p->next;
	  	p->next = NULL;
	  	p = p->prev;
	  	//cout<<p->data<<" "<<"\n";
	  	
	  	
	  }
	  	else if(p->next == NULL)
	  {
	  //	cout<<"last"<<" "<<count<<" ";
	  	
	  	tptr = p->prev;
	  	p->prev = NULL;
	  	p->next = tptr;
	  	first = p;
	  	p = p->prev;
	  	//cout<<"\n";
	  	
	  	
	  }
	   
	  else{
	  //cout<<" elser"<<count;
	  tptr = p->prev;
	  p->prev = p->next;
	  p->next = tptr;
	  p = p->prev;
	  //cout<<p->data<<" ";
	  //cout<<"\n";
}
	}
	

}

int main()
{
  cout<<"Enter the length: ";
  int n;
  cin>>n;
  create(n);
  display(first);
  Rdisplay(last1);
  Reverser(first);
  display(first);
}

