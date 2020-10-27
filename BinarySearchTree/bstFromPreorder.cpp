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


struct Tnode * push(struct Tnode *t)
{
	struct node *sn = new struct node;
	if(top == NULL)
	{
	
		sn->data = t;
		sn->next = NULL;
		top = sn;
		cout<<(sn->data)->data<<"-pushed\n";
	}
	else
	{
		sn->next = top;
		sn->data = t;
		top = sn;
		cout<<(sn->data)->data<<"-pushed\n";
	}
	
}

struct Tnode *  pop()
{
	struct Tnode *tt  = new struct Tnode;
	if(top != NULL)
	{
	tt = top->data;
     top->data = 0;
	 top = top->next;	
	 cout<<tt->data<<"-popped\n";
	 return tt;
}
else
{
	cout<<"already Empty\n";
}
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

void creation(struct Tnode *rr , int arr[], int len)
{
	struct node *nn = new struct node;
	struct Tnode *tnn = new struct Tnode;
	tnn->data = INT_MAX;
	nn->next = NULL;
	nn->data = tnn;
	top = nn;
	int i = 0;
	if(root == NULL)
   	  {
   	  	struct Tnode *tn = new struct Tnode;
   	  	root = tn;
   	  	rr = root;
   	  	tn->data = arr[i++];
   	  	tn->left = NULL;
   	  	tn->right = NULL;
   	  	
		 }
   while(i < len)
   
   {
   	  
		 
		  if(arr[i] < rr->data)
		 {
		 	
		 	struct Tnode *tn  = new struct Tnode;
		 	push(rr);
		 	rr->left = tn;
		 	rr = tn;
		 	tn->data = arr[i++];
		 	tn->left  = NULL;
		 	tn->right = NULL; 
			 
		 }
		 else
		 {
		 	struct Tnode *tn  = new struct Tnode;
		 	if(arr[i] > rr->data && arr[i] < (top->data)->data)
		 	{
		 		cout<<arr[i]<<" "<<(top->data)->data<<"-topdata\n";
			 
			 rr->right  = tn;
			 rr = tn;
			 tn->data = arr[i++] ;
			 tn->left = NULL;
			 tn->right = NULL;
			 
		}
		else 
		{
			rr = pop();
		}
		 }
	  	 
   	
   }
}



int main()
{

	int arr[8] = {30,20,10,15,25,40,50,45};
	creation(root,arr,8);
	traverse(root);
	
	
}
