//Implementing Queue with Array using single pointer

#include<bits/stdc++.h>
using namespace std;

struct Queue
{
	int size ;
	int rear ;
	int *arr ;
};


void create(struct Queue &qq, int si)
{
	qq.size = si;
	qq.rear  = -1;
	qq.arr = new int[si];
}

void enqueue(struct Queue &qq, int val)
{
	if(qq.rear == qq.size-1 )
	{
		cout<<"Full! "<<"\n";
	}
	else if(qq.rear < qq.size)
	{
		qq.rear += 1;
		qq.arr[qq.rear] = val;
	}
	else
	{
		cout<<"full!"<<"\n";
	}
	
}

void dequeue(struct Queue &qq)
{
	if(qq.rear == -1)
	cout<<"Not Possible"<<"\n";
	for(int i = 0; i<qq.rear; i++)
	{
		qq.arr[i] = qq.arr[i+1];
		qq.arr[i+1] = 0;
		
	}
	qq.rear -= 1;
	}

void display(struct Queue &qq)
{
	for(int i=0; i<=qq.rear; i++)
	{
		cout<<qq.arr[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int num, ele,dnum,si;
	struct Queue q;
	cout<<"Enter the size of Queue: ";
	cin>>si;
	create(q,si);
x:	cout<<"Enter the no. elements to enqueue: ";
	cin>>num;
	for(int i = 0 ; i<num; i++)
	{
		cin>>ele;
		enqueue(q,ele);
	}
display(q);
	cout<<"Enter the no. to perform dequeue: ";
	cin>>dnum;
	for(int i = 0; i<dnum; i++)
	{
		dequeue(q);
	}
	display(q);
	goto x;
	
}
