//Inorder Traversal
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


void enqueue(struct Tnode *tn)
{
	cout<<"Enqueueing: "<<tn<<"\n";
	struct Qnode *qn;
	qn  = new struct Qnode;
	if(qn == NULL)
	{
		cout<<"Heap full! "<<"\n";
		return ;
	}
	else
	{
		if(head == NULL)
		{
			head = qn;
			rear = qn;
			qn->data  = tn;
			qn->next = NULL;
			
		}
		else
		{
			rear->next = qn;
			qn->next = NULL;
			qn->data = tn;
			rear = qn;
			
		}
	}
}


struct Tnode * dequeue()
{
	struct Tnode *tt;
	tt  = new struct Tnode;
    
		tt = head->data;
		head->data = 0;
		head = head->next;
		cout<<"Dequeued "<<tt<<"\n";
		return tt;
}

int isEmpty(struct Qnode *ff)
{
	if(ff == NULL)
	{
		cout<<"Queue has no tree node Addresses! "<<"\n";
		return 0;
	}
	else
	return 1;
}

void inorderR(struct Tnode *rr)
{
	if(rr != NULL)
	{
		inorderR(rr->left);
		cout<<rr->data<<" ";
		inorderR(rr->right);
	}
}


int main()
{
	int response;
	root = new struct Tnode ;
	cout<<"Enter the element for root node: ";
	cin>>root->data;
	enqueue(root);
	while(isEmpty(head))
	{
		p  = dequeue();
		cout<<"Enter data for left child: ";
		cin>>response;
		if(response != -1)
		{
			
		struct Tnode *tn = new struct Tnode;
		p->left = tn;
		tn->data = response;
		tn->left = NULL;
		tn->right = NULL;
		enqueue(tn);
		response = -1;
     	}
		
		cout<<"Enter the element for the right child: ";
		cin>>response;
		if(response != -1)
		{
			struct Tnode *tn = new struct Tnode;
			p->right = tn;
			tn->data = response;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
			response = -1;
			
		}
		
	}
	inorderR(root);
	
	
		
		
		
	}
	

