//Inserting  in binary search tree with/without recursion;

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


void enqueue(struct Tnode *t)
{
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
			qn->data  = t;
			qn->next = NULL;
			rear  = qn;
		}
		else
		{
			rear->next = qn;
			qn->data = t;
			qn->next = NULL;
			rear  = qn;
		}
	}
}

struct Tnode *  dequeue()
{
	struct Tnode *tt = new struct Tnode;
	tt = head->data;
	head->data  =  0;
	head = head->next;
	return tt;
}


int isEmpty()
{
	if(head == NULL)
	{
		cout<<"Empty\n";
		return 0;
	}
	else
	return 1;
}



void traverse(struct Tnode *t)
{
   head = NULL;
   rear = NULL;
   enqueue(t);
   while(isEmpty())
   {
   	  p = dequeue();
   	  if(p)
   	  {
	
   	  cout<<p->data<<" ";
   	  enqueue(p->left);
   	  enqueue(p->right);
      }
    }
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



int height (struct Tnode *tt)
{
	int x, y;
	if(tt == NULL)
	return 0;
	
		x  = height(tt->left);
		y  = height(tt->right);
		
	  return x>y?x+1:y+1;
	
	
}


struct Tnode * inPre(struct Tnode *tt)
{
	while(tt && tt->right != NULL)
	tt = tt->right;
	
	
	return tt;
}

struct Tnode * inSuc(struct Tnode *tt)
{
	while(tt && tt->left != NULL)
	tt = tt->left;
	
	
	return tt;
}


struct Tnode * deletion(struct Tnode *tt, int data)
{
	struct Tnode *tn, *qn;
	struct Tnode  *r;
	
	if(tt == NULL)
	return NULL;
	
	if(tt->left ==  NULL && tt->right == NULL )
	{
		if(tt == root)
		root = NULL;
		free(tt);
		return NULL;
	}
		if(data < tt->data)
		{
			tt = deletion(tt->left,data);
		}
		else if(data > tt->data)
		{
			tt = deletion(tt->right,data);
		}
		else
		{
		
	
    
    if( height(tt->left) > height(tt->right))
    {
    	qn  = inPre(tt->left);
    	tt->data = qn->data;
    	tt->left = deletion(tt->left,qn->data);
	}
	else
	{
		qn = inSuc(tt->right);
		tt->data = qn->data;
		tt->right = deletion(tt->right, qn->data);
	}
}
	
	
}


int main()
{
	int input;
	root  = new struct Tnode;
	cout<<"Enter the Root data: ";
	cin>>root->data;
	enqueue(root);
	while(isEmpty())
	{
		p = dequeue();
		cout<<"Enter the left data: ";
		cin>>input;
		if(input != -1)
		{
			struct Tnode *tn = new struct Tnode;
			p->left = tn;
			tn->data = input;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
		}
		cout<<"Enter the right data: ";
		cin>>input;
		if(input != -1)
		{
			struct Tnode *tn = new struct Tnode;
			p->right = tn;
			tn->data  = input;
			tn->left = NULL;
			tn->right = NULL;
			enqueue(tn);
		}
	}
	traverse(root);
	deletion(root,50);
	traverse(root);
	deletion(root,30);
	traverse(root);
	
	
	
}
