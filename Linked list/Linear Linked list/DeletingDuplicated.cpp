//removing duplicateIN sorted array

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
			last  = t;
		}
	}
}

void AntiDuplicater(struct node *p)
{
	struct node *t, *last;
	last = first->next;
	while(p&&last)
	{
	   if(p->data == last->data)
	   {
	   	 cout<<"Removed: "<<last->data<<"\n";
	   	 last->next = p->next;
	   	 delete p;
	   	 p = last->next;
	   }
	   last = p;
	   p= p->next;
	}
}

void display(struct node *p)
{
	while(p)
{
	cout<<p->data<<" ";
	p  = p->next;
}
cout<<"\n";
}

int main()
{
  cout<<"Enter the length of the list: ";
  int n;
  cin>>n;
  create(n);
  AntiDuplicater(first);
  display(first);
}

