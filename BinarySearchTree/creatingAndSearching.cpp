//Inserting in BST and searching for an element

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


void enqueue( struct Tnode *t)
{
	struct Qnode *qn = new struct Qnode;
	if(qn == NULL)
	{
		cout<<"Heap is FULL! \n";
		return;
	}
	else
	{
		if(head == NULL)
		{
			head = qn;
			qn->next = NULL;
			qn->data = t;
			rear = qn;
		}
		else
		{
			rear->next = qn;
			qn->data = t;
			qn->next = NULL;
			rear = qn;
		}
	}
}

struct Tnode * dequeue()
{
	struct Tnode *tt = new struct Tnode;
	tt = head->data;
	head->data = 0;
	head = head->next;
	return tt;
	
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


struct Tnode * BsearchR(struct Tnode *t,int key)
{
	if(t == NULL)
	return NULL;
	else
	{
		if(key == t->data)
		{
			cout<<"Found! \n";
			return t;
		}
		if(key < t->data)
		return BsearchR(t->left,key);
		else
		return BsearchR(t->right,key);
	}
}

struct Tnode * BsearchI(struct Tnode *t,int key)
{
	while(t != NULL)
	{
		if(key == t->data)
		{
			cout<<"Found\n";
			return t;
		}
		else if(key < t->data)
		{
			t = t->left;
		}
		else
		{
			t = t->right;
		}
	}
	cout<<"Not Found\n";
	return NULL;
}



int main()
{
  int input;
  root = new struct Tnode;
  cout<<"Enter the data for root element: ";
  cin>>root->data;
  enqueue(root);
  while(isEmpty(head))
  {
  	p = dequeue();
  	cout<<"Enter the left child data: ";
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
	  cout<<"Enter the right child data: ";
	  cin>>input;
	  if(input != -1)
	  {
	  	struct Tnode *tn = new struct Tnode;
	  	p->right = tn;
	  	tn->data = input;
	  	tn->left = NULL;
	  	tn->right = NULL;
	  	enqueue(tn);
	  }
  }
 BsearchR(root,50);
 BsearchI(root,90);
	
}
