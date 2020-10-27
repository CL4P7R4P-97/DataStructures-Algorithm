//Insertion in doubly Linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
 struct node *prev;
}*first = NULL, *last1 = NULL;

void display(struct node *p)
{
	
   while(p)
   {
   	cout<<p->data<<" ";
   	last1  = p;
   	p = p->next;
   	
   }
   
   cout<<"\n";
}

void Rdisplay(struct node *p)
{
  cout<<"Reverse Display : "<<"\n";
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

void insertion(struct node *p, int pos, int value)
{
     struct node *last, *t;
     int count  = 0;
     t = new struct node;
     while(p)
     {
     	count++;
     	if(count != pos)
		 {
		 	cout<<"if"<<"\n";
     	last = p;
     	if(p->next == NULL )
     	{
     		cout<<"if.1"<<"\n";
     		p->next = t;
     		t->data =value;
     		t->next = NULL;
     		t->prev = p;
     		return;
		 }
     	p = p->next;
     	
     }
     else
     {
     	if(count == pos && pos == 1)
     	{
     		cout<<"else.1"<<"\n";
     		t->data = value;
     		t->next = first;
     		first = t;
     		t->prev = NULL;
     		return;
     		
		 }
		 if(count == pos)
		 {
		 	cout<<"else.2"<<"\n";
		 	t->data = value;
		 	last->next = t;
		 	t->next = p;
		 	t->prev  = last;
		 	last  = t;
		 	return;
		 }
	 }
	 
     	
	 }
	 
}

int main()
{
  cout<<"Enter the length pos & value: ";
  int n,posi,val;
  cin>>n>>posi>>val;
  create(n);
  display(first);
  Rdisplay(last1);
  //cout<<first->data;
  
  insertion(first,posi,val);
  display(first);
  
}

