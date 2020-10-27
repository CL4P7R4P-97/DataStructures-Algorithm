//Deletion from circular linked list

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
}

void create(int n)
{
  struct node *t, *last;
  for(int i = 0 ; i<n ;i++)
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

void Deletion(struct node *p, int pos)
{
    struct node *last;
    int count = 0;
    while(p->next != first)
    {
    	count++;
    	if(count != pos)
    	{
    		cout<<"if"<<"\n";
    		last = p;
    		p = p->next;
		}
		else
		{
			if(count == pos && pos == 1)
			{
				cout<<"else.1"<<"\n";
				first = first->next;
				delete p;
				return;
			}
			if(count == pos)
			{
				cout<<"else.2"<<"\n";
				last->next = p->next;
				delete p;
				return;
			}
		}
	}
	last->next = first;
	delete p;
}

int main()
{
  cout<<"Enter the length and pos: ";
  int n, pos;
  cin>>n>>pos;
  create(n);
  display(first);
  Deletion(first, pos);
  display(first);
}

