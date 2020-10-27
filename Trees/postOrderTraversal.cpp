//postOrderTraversal

#include<bits/stdc++.h>
using namespace std;

struct Tnode
{
	int data;
	struct Tnode *left;
	struct Tnode *right;
	
}*root, *p;

struct Qnode
{
	struct Tnode *data;
	struct Qnode *next;
}*head, *rear;


void enqueue(struct Tnode *t)
{
	cout<<"Queueing... "<<t<<"\n";
	struct Qnode *qn = new struct Qnode;
	if(qn == NULL)
	{
		cout<<"Heap is full! \n";
		return;
	}
	else
	{
		if(head == NULL)
		{
			head = qn;
			rear = qn;
			qn->data = t;
			qn->next = NULL;
		}
		else
		{
			qn->data = t;
			qn->next  = NULL;
			rear->next = qn;
			rear = qn;
		}
	}
}

struct Tnode * dequeue()
{
	struct Tnode *tt ;
	tt = head->data;
	head->data = 0;
	head = head->next;
	cout<<"Dequeued ."<<tt<<"\n";
	return tt;
}

int isEmpty(struct Qnode *f)
{
	if(f == NULL)
	{
		cout<<"Empty.!"<<"\n";
		return 0;
	}
	else
	return 1;
	
}

void postOrderR(struct Tnode *rr)
{
	if(rr != NULL)
	{
		postOrderR(rr->left);
		postOrderR(rr->right);
		cout<<rr->data<<" ";
	}
}


int main()
{
	int ip;
    root = new struct Tnode;
    cout<<"Enter the data for root node: ";
    cin>>root->data;
    enqueue(root);
    while(isEmpty(head))
    {
    	p = dequeue();
    	cout<<"Enter the left child: ";
    	cin>>ip;
    	if(ip != -1)
    	{
    		struct Tnode *tn = new struct Tnode;
    		p->left = tn;
    		tn->data = ip;
    		tn->left = NULL;
    		tn->right = NULL;
    		enqueue(tn);
    		ip = -1;
		}
		cout<<"Enter the element for the right child: ";
		cin>>ip;
		if(ip != -1)
		{
			struct Tnode *tn = new struct Tnode;
			p->right = tn;
			tn->data = ip;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
			ip  = -1;
		}
	}
	postOrderR(root);
	
}
