//Preorder traversal
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
	cout<<"Enqueueing ... "<<tn<<"\n";
    struct Qnode *qn;
    qn = new struct  Qnode;
	if(qn == NULL) 
	{
		cout<<"Heap is full "<<"\n";
	}
    if(head == NULL)
    {
    	head  = qn;
    	qn->data = tn;
    	qn->next = NULL;
    	rear = qn;
	}
	else
	{
		rear->next = qn;
		qn->data = tn;
		qn->next = NULL;
		rear = qn;
	}
}

struct Tnode * dequeue()
{
	struct Tnode *tt;
	tt = head->data;
	head->data = 0;
	head = head->next;
	cout<<"Dequeued ... "<<tt<<"\n";
	return tt;

}

int isEmpty(struct Qnode *ff)
{
	if(head == NULL)
	{
	   cout<<"Empty\n";
	   return 0;
	}
	else
	 return 1;
}

void preorderR(struct Tnode *r)
{
	if(r != NULL)
	{
		cout<<r->data<<" ";
		preorderR(r->left);
		preorderR(r->right);
	}
}



int main()
{
	int response = -1;
	cout<<"Enter the element for root node: ";
	root = new struct Tnode ;
	cin>>root->data;
	enqueue(root);
	while(isEmpty(head))
	{
		p = dequeue();
		cout<<"Enter the left child: ";
		cin>>response;
		if(response != -1)
		{
			struct Tnode *tn;
			tn = new struct Tnode;
			p->left = tn;
			tn->data = response;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
			response = -1;
		}
		cout<<"Enter the right child: ";
		cin>>response;
		if(response != -1)
		{
			struct Tnode *tn;
			tn = new struct Tnode;
			p->right = tn;
			tn->data = response;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
			response = -1;
		}
	}
	preorderR(root);
	
}
