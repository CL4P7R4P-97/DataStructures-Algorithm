//Implementing the stack with Array.

#include<bits/stdc++.h>
using namespace std;

struct Stack
{
   int size;
   int top;
   int *sptr;
};


void create(struct Stack &s, int siz)
{
    s.size = siz;
    s.top = -1;
    s.sptr = new int [s.size] ;
    
}

void push(struct Stack &s, int value)
{
    if(s.top == s.size-1)
    {
    	cout<<"Overflow brah! "<<"\n";
	}
	else
	{
		cout<<"top-->"<<s.top<<"\n";
		s.top += 1;
		s.sptr[s.top] = value;
		
		
	}
}

void pop(struct Stack &s)
{
	if(s.top == -1)
	{
		cout<<"Stack Underflow !"<<"\n";
	}
	else
	{
		cout<<"Popping... "<<s.sptr[s.top]<<"\n";
		s.sptr[s.top] = 0;
		s.top -= 1;
	}
}

void display(struct Stack &s)
{
	cout<<"Top at : "<<s.top<<"\n";
	for(int i = 0; i<s.top+1; i++)
	{
		cout<<s.sptr[i]<<" ";
	}
	cout<<"\n";
	
}


int main()
{
	int n,num,val,pval;
  struct Stack st;
  cout<<"Enter the size of stack : ";
  cin>>n;
  create(st,n);
  cout<<"Enter the no. of elements you want to enter: ";
  cin>>num;
  cout<<"\nEnter elements: ";
  for(int i = 0; i<num; i++)
  {
  	cin>>val;
  	push(st,val);
  }
  display(st);
  cout<<"Enter the no. of times to call pop: ";
  cin>>pval;
  for(int i=0 ;i<pval; i++)
  {
  	pop(st);
  }
  display(st);
   
  
}

