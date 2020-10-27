//Iterative inorder traversal

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


struct node
{
	struct Tnode *Tdata;
	struct node *next;
}*top;


void push(struct Tnode *tt)
{
	struct node *t  = new struct node;
	if(t == NULL)
	{
		cout<<"Heap is full! "<<"\n";
	}
	else
	{
		if(top == NULL)
		{
			top = t;
			t->Tdata = tt;
			t->next = NULL;
		}
		else
		{
		    t->Tdata = tt;
		    t->next = top;
		    top = t;		
		}
	}
}

struct Tnode * pop()
{
	struct Tnode *tn = new struct Tnode;
	if(top == NULL)
	{
		cout<<"Already Empty \n";
		
	}
	else
	{
		
		
		tn = top->Tdata;
	//	cout<<"about to pop\n"<<tn<<" \n";
		top  = top->next;
		return tn;
	}
}






void enqueue( struct Tnode *tn)
{
	cout<<"Enqueueing.. "<<tn<<"\n";
	struct Qnode *qn = new struct Qnode;
	if(qn == NULL)
	{
		cout<<"Heap is full!"<<"\n";
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
			qn->data = tn;
			qn->next = NULL;
			rear->next = qn;
			rear = qn;
		}
	}
}

struct Tnode * Dequeue( )
{
	struct Tnode *tt  = new struct Tnode;
	tt = head->data;
	head->data = 0;
	head = head->next;
//	cout<<"Dequeued.. "<<tt<<"\n";
	return tt;
}

int isEmpty(struct Qnode *qn)
{
	if(qn == NULL)
	{
		cout<<"Empty\n";
		return 0;
	}
	else
	return 1;
}

void inorder(struct Tnode *rr)
{
	while(rr || top )
	{
	
		if(rr)
		{
	
		push(rr);
		rr = rr->left;
    	}
	else
	{
	
		rr = pop();
	    cout<<rr->data<<" ";
		rr = rr->right;
	
	
      
		
	}
		
	}
}


int main()
{
	int ip;
	root = new struct Tnode;
	cout<<"Enter the element for root node: ";
	cin>>root->data;
	enqueue(root);
	while(isEmpty(head))
	{
		p  = Dequeue();
		cout<<"Enter the element for left child: ";
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
		cout<<"Enter the element for right child: ";
		cin>>ip;
		if(ip != -1)
		{
			struct Tnode *tn = new struct Tnode;
			p->right = tn;
			tn->data  = ip;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
			ip = -1;
		}
	}
	inorder(root);
	
}
