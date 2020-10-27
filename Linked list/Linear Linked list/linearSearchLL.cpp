//Linear Search in linked list

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
	cout<<"Enter the data values: ";
	for(int i = 0; i<n; i++)
	{
		t = new node;
		
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
			t->next = NULL;
			last->next = t;
			last = t;
		}
	}
}


void display(struct node *p)
{
	while(p != NULL)
	{
		cout<<p->data<<" ";
		p=p->next;
	}
	cout<<"\n";
}


int search(struct node *p , int k)
{
	int count = 0;
	while(p != NULL)
	{
		count++;
		if(p->data == k)
		{
			
			cout<<"Found! at:  ";
			return count;
		}
		p = p->next;
		
	}
}

int main()
{
	int n,key;
	cout<<"Enter the length of linked list and key : ";
	cin>>n>>key;
	create(n);
	display(first);
	cout<<search(first, key);
    
	
}
