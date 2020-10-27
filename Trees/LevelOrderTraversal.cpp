//Level order

#include<bits/stdc++.h>
using namespace std;


struct Tnode
{
	int data;
	struct Tnode *left;
	struct Tnode *right;
}*root, *p, *q;


struct Qnode
{
	struct Tnode *data;
	struct Qnode *next;
}*head, *rear;


void enqueue(struct Tnode *tn)
{
//	cout<<"Enqueueing .."<<tn<<" \n";
	struct Qnode *qn = new struct Qnode;
	if(qn == NULL)
	{
		cout<<"Heap is full\n";
	}
	else
	{
		if(head == NULL)
		{
			head = qn;
			rear = qn;
			qn->data = tn;
			qn->next = NULL;
			
		}
		else
		{
			rear->next = qn;
			qn->data = tn;
			qn->next = NULL;
			rear = qn;
			
			
		}
	}
}

int isEmpty(struct Qnode *t)
{
	if(t == NULL)
	{
		cout<<"Empty\n";
		return 0;
	}
	else 
	return 1;
}

struct Tnode * dequeue()
{
	struct Tnode *tt = new struct Tnode;
	tt = head->data;
	head->data = 0;
	head = head->next;
	//cout<<"Dequeued.. "<<tt<<" \n";
	return tt;
}

void levelOrder(struct Tnode *tn)
{
	head = NULL; rear = NULL;
	struct Tnode *tt = new struct Tnode;
	tt = tn;
	enqueue(tt);
	while(isEmpty(head))
	{
		q = dequeue();
	     cout<<q->data<<" ";
	     if(q->left != NULL)
	     enqueue(q->left);
	     if(q->right != NULL)
	     enqueue(q->right);
	}
	
}

int main()
{
	int ip;
	root = new struct Tnode;
	cout<<"Enter the root element: ";
	cin>>root->data;
	enqueue(root);
	while(isEmpty(head))
	{
		p = dequeue();
		cout<<"Enter the left child element: ";
		cin>>ip;
		if(ip != -1)
		{
			struct Tnode *tn = new struct Tnode;
			p->left = tn;
			tn->data = ip;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
			
		}
		cout<<"Enter the right child element: ";
		cin>>ip;
		if(ip != -1)
		{
			struct Tnode *tn = new struct Tnode;
			p->right = tn;
			tn->data = ip;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
		}
	}
	levelOrder(root);
}

