//Iterative preorder traversal
#include<bits/stdc++.h>
using namespace std;



struct Tnode 
{
	int data ;
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
	struct Tnode *data;
	struct node *next;
	
}*top;

void enqueue(struct Tnode *t)
{
	cout<<"Enqueueing: "<<t<<"\n";
	struct Qnode *qn = new struct Qnode;
	if(qn == NULL)
	{
		cout<<"Heap is full! "<<"\n";
		return;
	}
	else
	{
		if(head == NULL)
		{
			head = qn;
			qn->data = t;
			qn->next = NULL;
			rear = qn;
		}
		else
		{
			rear->next  = qn;
			qn->data = t;
			qn->next = NULL;
			rear = qn;
		}
	}
}

struct Tnode * dequeue()
{
	struct Tnode *tt  = new struct Tnode;
	tt = head->data;
	head->data = 0;
	head = head->next;
	cout<<"Dequeued.. "<<tt<<"\n";
	return tt;
}

void push(struct Tnode *tnadd)
{
    struct node *t = new struct node;
    if(t == NULL)
    {
    	cout<<"Heap is full! "<<"\n";
    	
	}
	else
	{
		if(top == NULL)
		{
			top  = t;
			t->data = tnadd;
			t->next  = NULL;
			
		}
		else
		{
			t->data = tnadd;
			t->next = top;
			top = t;		
		}
	}
}

struct Tnode * pop()
{
	struct Tnode *tt = new struct Tnode;
	if(top == NULL)
	{
		cout<<"Already Empty"<<"\n";
	}
	else
	{
		tt  = top->data;
		top = top->next;
		return tt;
	}
}


int isEmpty(struct Qnode *qn)
{
	if(qn == NULL)
	{
		cout<<"Already Empty! "<<"\n";
		return 0;
	}
	else
	return 1;
	
}

void preorder(struct Tnode *rr)
{

while(top || rr )
{
   if(rr)
   {
   	cout<<rr->data<<" ";
   	push(rr);
   	rr = rr->left;
   }
   else
   {
   	 rr = pop();
   	 rr = rr->right;
   }
    
}

}

int main()
{
	int ip;
	root = new struct Tnode;
	cout<<"Enter the element for the root node: "<<"\n";
	cin>>root->data;
	enqueue(root);
	while(isEmpty(head))
	{
		p = dequeue();
		cout<<"Enter the element for left child: ";
		cin>>ip;
		if(ip != -1)
		{
		     struct Tnode *tn = new struct Tnode;
		     p->left = tn;
		     tn->data = ip;
		     tn->left  = NULL;
		     tn->right = NULL;
		     enqueue(tn);
		}
		cout<<"Enter the element for right child: ";
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
	
	preorder(root);
	
}
