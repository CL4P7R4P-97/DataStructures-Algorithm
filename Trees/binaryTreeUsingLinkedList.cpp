//Creating Binary tree with liked list
#include<bits/stdc++.h>

using namespace std;

struct Qnode
{
	struct Tnode *data;
	struct Qnode *next;
}*head, *rear;

struct Tnode
{
	int data;
	struct Tnode *left;
	struct Tnode *right;
	
}*root, *p;


void enqueue(struct Tnode *tnode )
{
	cout<<"enqueueing: "<<tnode<<"\n";
	struct Qnode *t;
	t  = new struct Qnode;
	if(t == NULL)
	{
		cout<<"Heap full ! "<<"\n";
		return;
	}
	if(head == NULL)
	{
		t->data = tnode;
		t->next = NULL;
		rear = t;
		head = t;
	}
	else
	{
		t->data = tnode;
		t->next  = NULL;
		rear->next = t;
		rear = t;
	}
}

int queueIsEmpty()
{
	if( head == NULL)
	{
		cout<<"Queue Empty "<<"\n";
		return 0;
	}
	else
	return 1;
}

struct Tnode * dequeue()
{
	struct Tnode *tt;

        
		tt = head->data;
		cout<<"Dequeued: "<<head->data<<"\n";
		head->data = 0;
		head = head->next;
		return tt;
	
}



int main()
{
	int response;
	cout<<"Enter the root node: ";
	root = new struct Tnode ;
	cin>>root->data;
    enqueue(root);
    while(queueIsEmpty())
    {
    	p = dequeue();
    	cout<<"Enter the left child: "<<"\n";
    	cin>>response;
    	if(response != -1)
    	{
    		cout<<"Creating Left child... \n";
    		struct Tnode *tl;
    		tl = new struct Tnode;
    		p->left = tl;
    		tl->data = response;
    		tl->left = NULL;
    		tl->right = NULL;
    		response = -1;
    		enqueue(tl);
		}
		cout<<"Enter the right child: "<<"\n";
		cin>>response;
		if(response != -1)
		{
			cout<<"Creating right child... \n";
			struct Tnode *tr;
			tr = new struct Tnode;
			p->right = tr;
			tr->data = response;
			tr->left = NULL;
			tr->right = NULL;
			enqueue(tr);
			response = -1;
			
			
			
		}
	}
	
}
