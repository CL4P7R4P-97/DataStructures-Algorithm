//Improved Searching in LL using Move to head

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
	cout<<"Enter the data elements: ";
	for(int i = 0 ; i<n;i++)
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
			cin>>t->data;
			last->next = t;
			t->next = NULL;
			last = t;
			
		}
	}
}

int m2Head(struct node *p, int key)
{
	int count=0;
	struct node *head, *q = NULL;
	head  = p;
	while(p != NULL)
	{
		count++;
		if(p->data != key)
		{
			q = p;
			p = p->next;
		}
		else
		{
			cout<<"Found ! at: ";
		   
		   q->next = p->next;
		   p->next = head;	
		   first = p;
		   p = NULL;
		}
	}
	return count;
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
	int n,key;
	cout<<"Enter the LL lenght and KEY: ";
	cin>>n>>key;
    create(n);
	display(first);
	cout<<m2Head(first,key)<<"\n";
	display(first);
	
	
}
