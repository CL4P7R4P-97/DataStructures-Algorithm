//Finding middle of linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
 struct node *prev;
}*first;

void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<"\n";

}

//void Rdisplay(struct node *p)
//{
// 
//
//}

void create(int n)
{
   struct node *t, *last;
   for(int i = 0; i<n ; i++)
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

int midFinder(struct node *p)
{
     struct node  *q;
     q = p;
     while(p)
     {
     	p = p->next;
     	if(p)
     	{
     		p = p->next;
     		if(p != NULL)
     		{
			 
		 	q = q->next;
		 }
		 else
		 {
		 	return q->data;
		 }
		 	
	}
		 else
		 {
		 	return q->data;
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
  cout<<midFinder(first);
}

