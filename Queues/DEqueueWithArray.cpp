//Implementing the DEqueue with arrays

#include<bits/stdc++.h>
using namespace std;

struct DEqueue
{
	int size;
	int front ;
	int rear;
	int *arr;
};

void display(struct DEqueue &q)
{
	int i = q.front+1;
	while(i <= q.rear)
	{
		cout<<q.arr[i]<<" ";
		i++;
	}
	cout<<"\n";
}

void create(struct DEqueue &q, int ss)
{
	q.size = ss;
	q.front = -1;
	q.rear = -1;
	q.arr = new int [ss];
	cout<<"Created! "<<"\n";
}


void enqueueWithR(struct DEqueue &q, int val)
{
	if(q.rear == q.size )
	{
		cout<<"Full! "<<"\n";
	}
	else
	{
		q.rear += 1;
		q.arr[q.rear] = val;
	}
	display(q);
}

void dequeueWithR(struct DEqueue &q)
{
	if(q.rear == q.front)
	{
		cout<<"Empty"<<"\n";
	}
	else
	{
		q.arr[q.rear] = 0;
		q.rear -= 1;
	}
	display(q);
}

void dequeueWithF(struct DEqueue &q)
{
	if(q.front == q.rear)
	{
		cout<<"Empty"<<"\n";
	}
	else
	{
		q.front += 1;
		q.arr[q.front] = 0;
	}
	display(q);
}

void enqueueWithF(struct DEqueue &q, int val)
{
	if(q.front == -1)
	{
		cout<<"Empty"<<"\n";
	}
	else
	{
		q.arr[q.front] = val;
		q.front -= 1; 
	}
	display(q);
}



int main()
{
	struct DEqueue  dq1;
	create(dq1,5);
	enqueueWithR(dq1, 100);
	enqueueWithR(dq1, 200);
	enqueueWithR(dq1, 300);
	enqueueWithR(dq1,400);
	dequeueWithF(dq1);
	dequeueWithF(dq1);
	dequeueWithF(dq1);
	enqueueWithF(dq1, 1000);
	dequeueWithR(dq1);
	display(dq1);
	
}
