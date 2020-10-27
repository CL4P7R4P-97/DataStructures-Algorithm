//Implementing Queue with 2 stacks

#include<bits/stdc++.h>
using namespace std;

struct Stack
{
	int size;
	int top;
	int *arr;
}st1, st2;

void display(struct Stack &ss)
{
	int i  = ss.top;
	
	while(i != -1)
	{
		cout<<ss.arr[i]<<" ";
		i--;
	}
	cout<<"\n";
}

void create(struct Stack &ss, struct Stack &ss2, int si )
{
	ss.size = si;
	ss2.size = si;
	 ss2.top = -1;
	 ss.top = -1;
	ss.arr = new int[si];
	ss2.arr = new int[si];
}

void enqueue(struct Stack &ss, int val)
{
	
	if(ss.top == ss.size-1)
	{
		cout<<"Stack Full! "<<"\n";
	}
	else
	{
		ss.top += 1;
		ss.arr[ss.top] = val;
	}
}

void dequeue(struct Stack &ss, struct Stack &ss2)
{
	int ele;
	if(ss.top == -1)
	{
		cout<<"Empty !"<<"\n";
	}
	else
	{
		
	  if(ss2.top == ss2.size -1 )	
	  {
	  	cout<<"Stack 2 is full"<<"\n";
	  }
	  else
	  {
	  	
	  	while(ss.top != -1){
	     ele = ss.arr[ss.top] ;
	     ss.arr[ss.top] = 0;
	     ss.top -= 1;
	     ss2.top += 1;
	     ss2.arr[ss2.top] = ele;
	    
	     
	 }
	  }
	}
}

void deQfinalStack()
{
   if(st2.top == st2.size-1)
   {
   	cout<<"Underflow";
   }
   else
   {
   	
   	while(st2.top != -1)
   	{
   	cout<<st2.arr[st2.top]<<" ";
   	st2.arr[st2.top] = 0;
   	st2.top -= 1;
   }
   	
   }
}


int main()
{
	create(st1, st2, 5);
	enqueue(st1,10);
	enqueue(st1,20);
	enqueue(st1,30);
	enqueue(st1,40);
	display(st1);
	dequeue(st1,st2);
	display(st2);
	deQfinalStack();
	
}
