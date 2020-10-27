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
   	  if(p != NULL)
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

void insertBST(struct Tnode *tt, int data)
{
	struct Tnode *t, *r;
	t = tt;
	while(t != NULL)
	{
		if(data < t->data)
	 	{
			cout<<t->data<<" ";
			r = t;
			t = t->left;
		}
		else 
			{
		    	cout<<t->data<<" ";
		    	r = t;
		    	t = t->right;
	    	}
	}
	if(r->data > data)
	{
		struct Tnode *tn = new struct Tnode;
		tn->data = data;
	    tn->left = NULL;
     	tn->right = NULL;

		r->left = tn;
		return;
		
	}
	else
	{
     struct Tnode *tn = new struct Tnode;
    tn->data = data;
    tn->left = NULL;
	tn->right = NULL;
	r->right = tn;
	return;
}

	//traverse(root);	

}

struct Tnode * insertBSTR(struct Tnode *t, int data)
{


    if(t == NULL)
    {
    	cout<<"creating\n";
       	struct Tnode *tn = new struct Tnode;
       	tn->data = data;
		tn->left = NULL;
		tn->right = NULL;
		return tn;
		
	}


		cout<<"LOOP\n";
		if(data < t->data)
		{
			cout<<"left\n";
			t->left  =  insertBSTR(t->left, data);
			
		}
		
		else if(data > t->data)
		{
			cout<<"right\n";
			t->right =  insertBSTR(t->right, data);
		   
		}
		else
		return t;
	


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
	insertBST(root,65);
	insertBSTR(root,80);
	traverse(root);
	inorderR(root);
	
}
