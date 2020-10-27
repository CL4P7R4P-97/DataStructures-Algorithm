//postorder Traversal with iterative

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

struct node
{
	struct Tnode *data;
	struct node *next;
}*top;



void enqueue(struct Tnode *tn)
{
	struct Qnode *tt = new struct Qnode;
	if(tt == NULL)
	{
		cout<<"Heap is full\n";
	}
	else
	{
		if(head == NULL)
		{
			head = tt;
			rear  = tt;
			tt->data = tn;
			tt->next = NULL;
		}
		else
		{
			rear->next = tt;
			tt->data = tn;
			tt->next = NULL;
			rear = tt;
		}
	}
}

struct Tnode * dequeue()
{
	struct Tnode *tt = new struct Tnode;
	tt = head->data;
	head->data= 0;
	head =  head->next;
	return tt;
}

void push(struct Tnode *tad)
{
	struct node *t = new struct node;
	if(t == NULL)
	{
		cout<<"Heap is full! \n";
	}
	else
	{
		if(top == NULL)
		{
			top = t;
			t->data = tad;
			t->next = NULL;
		}
		else
		{
			t->next = top;
			top = t;
			t->data = tad;
		}
	}
}



struct Tnode * pop()
{
	struct Tnode *tt = new struct Tnode;
	if(top == NULL)
	{
		cout<<"Already Empty \n";
	}
	else
	{
		tt = top->data;
	  top = top->next;	
	  return tt;
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


void postOrder(struct Tnode *rr)
{
	cout<<"PostOrder: ";
	while(rr || top)
	{
		if(rr)
		{
			push(rr);
			if(rr->left != NULL)
			rr = rr->left;
			else if(rr->right != NULL)
			rr = rr->right;
		}
		else
		{
			rr = pop();
			cout<<rr->data;
//			cout<<rr->data<<" ";
			
		}
	}
	cout<<"\n";
}


void preOrder(struct Tnode *rr)
{
	cout<<"Preorder: ";
	while(rr || top)
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
	cout<<"\n";
}

void levelOrder(struct Tnode *rr)
{
	cout<<"\nLevel Order: ";
	head = NULL; rear = NULL;
	struct Tnode *T = new struct Tnode;
	T = rr;
	enqueue(T);
	while(isEmpty(head))
	{
	  q = dequeue()	;
	  cout<<q->data<<" ";
	  if(q->left != NULL)
	  enqueue(q->left);
	  if(q->right != NULL)
	  enqueue(q->right);
	}
	cout<<"\n";
}


void inOrder(struct Tnode *rr)
{
	cout<<"Inorder: ";
	while(rr||top)
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
	cout<<"\n";
}


int main()
{
	int ip;
	root = new struct Tnode;
	cout<<"Enter the data for root: ";
	cin>>root->data;
	enqueue(root);
	while(isEmpty(head))
	{
		p = dequeue();
		cout<<"Enter data for right child: ";
		cin>>ip;
		if(ip != -1)
		{
			struct Tnode *tn  = new struct Tnode;
			p->left = tn;
			tn->data = ip;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
		}
		cout<<"Enter the data for right child : ";
		cin>>ip;
		if(ip != -1)
		{
			struct Tnode *tn = new struct Tnode;
			p->right  = tn;
			tn->data = ip;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
		}
	}
	postOrder(root);
	preOrder(root);
	inOrder(root);
	levelOrder(root);
	
	
	
	
	
	
}
