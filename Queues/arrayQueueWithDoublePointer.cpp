//Implementing queue with array using two Pointers

#include<bits/stdc++.h>
using namespace std;

struct Queue
{
	int size;
	int front;
	int rear;
	int *arr;
};

void create(struct Queue &qq,int s)
{
	qq.size = s;
	qq.front = -1;
	qq.rear = -1;
	qq.arr = new int[s];
}


void dequeue( struct Queue &qq)
{
	if(qq.front == qq.rear)
	{
	
	cout<<"Empty Already! "<<"\n";
	cout<<"Resetting ... \n";
	qq.front = -1;
	qq.rear  = -1;
	return;
}
	
	else
	{
		qq.front += 1;
		qq.arr[qq.front] = 0;
		
	}
}


int enqueue(struct Queue &qq, int val)
{
	if(qq.rear == qq.size-1)
	{
		cout<<"!Full\n";
		
		cout<<"Dequeueing / Resetting  queue for new list! \n";
		while(qq.front < qq.rear)
		{
			dequeue(qq);
		}
		return -1;
		
	}
	else
	{
		qq.rear += 1;
		qq.arr[qq.rear] = val;
		
	}
}



void display(struct Queue &qq)
{
	cout<<"Displaying.. ..\n";
	for(int i= qq.front+1; i<=qq.rear; i++)
	{
		cout<<qq.arr[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	Queue q;
  int qsize, eqnum, val, dnum;
  cout<<"Enter the size of queue: ";
  cin>>qsize;
  create(q,qsize);
  x: cout<<"Enter the no. of elements to enqueue: ";
  cin>>eqnum;
  int k;
  for(int i =0; i<eqnum; i++)
  {
  	cin>>val;
  	k = enqueue(q,val);
  	if(k== -1)
  	break;
  }
  display(q);
  cout<<"Enter the element to dequeue";
  cin>>dnum;
  
  for(int i=0 ;i<dnum; i++)
  {
  	dequeue(q);
  	
  }
  display(q);
  goto x;
  
}

