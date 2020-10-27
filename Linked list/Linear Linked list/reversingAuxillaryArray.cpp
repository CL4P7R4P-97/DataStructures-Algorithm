//Reversing LL using auxillary array

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
	cout<<"Enter the element: ";
	for(int i = 0; i<n;i++)
	{
		t  = new struct node;
		
		if(first == NULL)
		{
			cin>>t->data;
			first = t;
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
	cout<<"\n";
}

void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
	cout<<"\n";
}


void reverse(struct node *p, int n)
{
	int *k = new int[n];
	struct node *temp;
	temp = p;
	int i = 0;
	while(p)
	{
		k[i] = p->data;
		p = p->next;
		i++;
	}
	i  = i-1;
	p = temp;
	while(p)
	{
		p->data = k[i];
		p = p->next;
		i--;
		
	}
	return;
}

int main()
{
  cout<<"Enter the length of LL: ";
  int n;
  cin>>n;
  create(n);
  display(first);
  reverse(first,n);
  display(first);
}

