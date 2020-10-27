//Circular linked list

#include<bits/stdc++.h>

using namespace std;

struct Queue 
{
	int size;
	int front;
	int rear;
	int *arr;
};

void create( struct Queue &q, int si )
{
	q.front  = 0;
	q.size  = si;
	q.rear = 0;
	q.arr = new int[si+1];
}

void enqueue(struct Queue &q, int val)
{
	
	cout<<"Inserting.. "<<val<<"\n";
	
	if((q.rear + 1) % (q.size + 1) == q.front )
	{
		cout<<"Full!";
	}
	else
	{
		
		q.rear = (q.rear + 1) % (q.size + 1);
		q.arr[q.rear] = val;
	}
	cout<<"rear at: "<<q.rear<<"\n";
}

void dequeue(struct Queue &q )
{
		
	if((q.front + 1) % (q.size + 1) == q.rear)
	{
		cout<<cout<<"empty";
	}
	else
	{
		q.front = (q.front + 1) % (q.size + 1);
		q.arr[q.front] = 0;
	}
	cout<<"front at: "<<q.front<<"\n";
}

void display(struct Queue &q)
{
	cout<<"Displaying: ";
int i = q.front + 1;
while(i != (q.rear+1)% (q.size+1))
{
	cout<<q.arr[i]<<" ";
	i = (i+1)%(q.size + 1);
}

}


int main()
{
	struct Queue qq;
	create(qq,4);
	enqueue(qq, 10);
	enqueue(qq, 20);
	enqueue(qq,30);

	display(qq);
	dequeue(qq);

	enqueue(qq,100);
	enqueue(qq,200);
	display(qq);
}
