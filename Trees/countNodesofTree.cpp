//Heigh and count of nodes of tree
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
}*head , *rear;


void enqueue(struct Tnode *t)
{
	struct Qnode *qn  = new struct Qnode;
	if(qn == NULL)
	{
		cout<<"heap is full! "<<"\n";
	}
	else
	{
		if(head == NULL)
		{
			head = qn;
			rear = qn;
			qn->data = t;
			qn->next =NULL;
		}
		else
		{
			qn->data =t;
			rear->next = qn;
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
		cout<<"Empty! "<<"\n";
		return 0;
	}
	else
	return 1;
}


int rooTnodes(struct Tnode *rr) // number of root nodes
{
	int x, y;
    if(rr != NULL)
    {
    
           x = rooTnodes(rr->left);
       
    	   y = rooTnodes(rr->right);
    	   
     
	
	if( rr->left == NULL && rr->right == NULL)
	{
		return x+y+1;
	}
	else 
	return x+y;
}
return 0;
	 
}

int Totalnodes (struct Tnode *rr)
{
	int x, y;
	if(rr != NULL)
	{
		 x = Totalnodes(rr->left);
		 y = Totalnodes(rr->right);
		 
		 return x + y + 1;
	}
	return  0;
}

int nodesDegree2(struct Tnode *rr)
{
	int x, y;
	if(rr != NULL)
	{
		x = nodesDegree2(rr->left);
		y = nodesDegree2(rr->right);
		
	
	if(rr->right && rr->left)
	return x+ y + 1;
	else
	return x + y;
}
return 0;
}

int nodesDegree1(struct Tnode *rr)
{
	int x, y;
	if(rr != NULL)
	{
		x = nodesDegree1(rr->left);
		y = nodesDegree1(rr->right);
		
		if((rr->left == NULL && rr->right != NULL) || (rr->right == NULL && rr->left != NULL))
		return x+y+1;
		else
		return x+y;
	}
	return 0;
}


int sumOfnodes(struct Tnode *rr)
{
	int x, y;
	if(rr != NULL)
	{
		x = sumOfnodes(rr->left);
		y = sumOfnodes(rr->right);
		
		return x+y+rr->data;
	}
	return 0;
}

int fun(struct Tnode *rr)
{
	int x, y;
	if(rr != NULL)
	{
		x = fun(rr->left);
		y = fun(rr->right);
		
		if(x > y)
		return x+1;
		else 
		return y+1;
	}
	return 0;
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
		cout<<"Enter data for left child: ";
		cin>>ip;
		if(ip != -1)
		{
			struct Tnode *T = new struct Tnode;
			p->left  = T;
			T->data = ip;
			T->left = NULL;
			T->right = NULL;
			enqueue(T);
		}
		cout<<"Enter the data for right child: ";
		cin>>ip;
		if(ip != -1)
		{
			struct Tnode *TT = new struct Tnode;
			p->right = TT;
			TT->data = ip;
			TT->left = NULL;
			TT->right = NULL;
			enqueue(TT);
		}
	}
	cout<<rooTnodes(root)<<"\n";
	cout<<Totalnodes(root)<<"\n";
	cout<<nodesDegree2(root)<<"\n";
	cout<<nodesDegree1(root)<<"\n";
	cout<<sumOfnodes(root)<<"\n";
	cout<<fun(root)<<"\n";
}


