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
	for(int i=0; i<n; i++)
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
			last->next  = t;
			cin>>t->data;
			t->next = NULL;
			last = t;
		}
	}
}

int length(struct node *p)
{
	int count = 0;
	while(p)
	{
	 count++;
	 p = p->next;
	}
	return count;
}

void insertion( struct node *p, int index, int value)
{
	struct node *t, *last;
	
	if(index < 0 || index > length(p))
	return;
	t = new struct node;

		if(index ==0)
		{
		    cin>>t->data;
			t->next = first;
			first = t;
				
		}
		else
		{
			for(int i = 0; i<length(p)-1; i++)
			p = p->next;
			t->data = value;
		    t->next = p->next;
		    p->next = t;
		    
		}
	
	
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

int main()
{
	int length, pos, value;
  cout<<"Enter the length, pos & value: ";
  cin>>length>>pos>>value;
  create(length);
  display(first);
  insertion(first, pos, value);
  display(first);

}

