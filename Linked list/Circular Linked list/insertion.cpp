//Inserting in circular linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
}*first;

void display(struct node *p)
{
  while(p->next != first)
  {
  	cout<<p->data<<" ";
  	
  	p = p->next;
  }
  cout<<p->data;
  cout<<"\n";
  return;
}

void create(int n)
{
   struct node *t, *last;
   for(int i= 0; i<n; i++)
   {
   	t = new struct node;
   	if(first == NULL)
   	{
   		first = t;
   		cin>>t->data;
   		t->next = first;
   		last = t;
   		
	   }
	   else
	   {
	   	last->next = t;
	   	cin>>t->data;
	   	t->next = first;
	   	last = t;
	   }
	   
   }

}

void insertion(struct node *p,int pos, int value)
{
	struct node *last, *t;
	int count=0;
	t = new struct node;
	
	while(p)
	{
		
		count++;
		if(count != pos)
		{
			last = p;
			if(p->next == first)
			{
				t->data = value;
				p->next = t;
				t->next =first;
				return;
			}
			p = p->next;
			
		}
		else
		{
			if(count == pos && pos ==1)
			{
				t->data = value;
				t->next = first;
				first = t;
				return;
			}
			if(count == pos)
			{
				last->next = t;
				t->data = value;
				t->next = p;
				return;
			}
		}
		
		
	
		
	
		
	}
	
				p->next = t;
				t->data = value;
				t->next = first;
			    return;
			
	

}

int main()
{
  cout<<"Enter the length, value and position: ";
  int n,pos,val;
  cin>>n>>val>>pos;
  create(n);
  insertion(first,pos,val);
  display(first);
}

