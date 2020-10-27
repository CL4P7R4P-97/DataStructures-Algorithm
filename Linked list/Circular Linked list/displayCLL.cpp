//Circular linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
}*first;

void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		if(p->next == first)
		break;
		else
		p = p->next;
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



int main()
{
  int n;
  cin>>n;
  create(n);
  display(first);
}

