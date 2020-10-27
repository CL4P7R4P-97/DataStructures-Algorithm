//Implementing stack with Linked list;

#include<bits/stdc++.h>
using namespace std;



struct node
{
	int data;
	struct node *next;
}*top = NULL;

void display(struct node *p)
{
	while(p)
	{
		cout<<p->data<<" ";
		p = p->next;
	}
}


void push( int value)
{
	struct node *t;
	t = new struct node;
	if(t == NULL )
	{
		cout<<"Overflow brah!"<<"\n";
	}
	else
	{
		if( top == NULL)
		{
			t->data = value;
			t->next = NULL;
			top = t;
	
		}
		else
		{
			t->data = value;
			t->next = top;
			top = t;
			
		}
	}

}

void pop()
{
	if(top == NULL)
	{
		cout<<"Stack Underflow brah! "<<"\n";
	}
	else
	{
		cout<<"Popping... "<<top->data<<"\n";
		top = top->next;
		
	}
}

int main()
{
	
  cout<<"Enter the no of elements to enter: ";
  int n, num,pval;
  cin>>n;
  for(int i=0 ;i<n; i++)
  {
  	cin>>num;
  	cout<<"Pushing ..."<<num<<"\n";
  	push(num);
  }
 
  display(top);
  cout<<"\nEnter the times to pop: "<<"\n";
  cin>>pval;
  for(int i =0; i<pval; i++)
  {
  	
  	pop();
  	
  }
  display(top);
  
}

