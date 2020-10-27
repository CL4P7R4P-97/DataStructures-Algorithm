//Finding the maximum element in linked list


#include<bits/stdc++.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
} *first;

void create(int n)
{
	struct node *t, *last;
	cout<<"Enter the data value: ";
	for(int i = 0; i<n; i++)
	{
		t = new node;
		
		if(first == NULL)
		{
			first = t;
			//cout<<"Enter the data value: ";
			cin>>t->data;
			t->next = NULL;
			last = t;
		}
		else
		{
			last->next = t;
			//cout<<"\nEnter the data value: ";
			cin>>t->data;
			t->next  = NULL;
			last = t;	
		}
	
	}
}

void display(struct node *p)
{
	while(p != NULL)
	{
		cout<<p->data<<"-->";
		p = p->next;
	}
	cout<<"\n";
}

void maxi(struct node *p)
{
	int maxo = p->data;
	while(p != NULL)
	{
		if(p->data > maxo)
		{
			maxo = p->data;
			
		}
		p = p->next;
	}
	cout<<"max is: "<<maxo<<"\n";
}

	





int main()
{
	int n;
	cout<<"Enter the no. of nodes you want to create: ";
	cin>>n;
	create(n);
	maxi(first);
	display(first);
}
