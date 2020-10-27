#include<bits/stdc++.h>
using namespace std;

struct Tnode
{
	int data ;
	struct Tnode *left;
	int height; 
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

int height(struct Tnode *p)
{
     int hl, hr;
     hl = p && p->left ? p->left->height:0;
     hr = p && p->right ? p->right->height:0;
     if(hl > hr)
     {
     	cout<<"H:"<< hl+1<<" ";
     	return hl+1;
	 }
     else
     {
     	cout<<"H:"<<hr+1<<" ";
     	return hr+1;
	 }
     

}

int balanceFactor(struct Tnode *p)
{
     int hl, hr;
     hl = p && p->left ? p->left->height: 0;
     hr = p && p->right ? p->right->height: 0;
     cout<<"BF: "<<hl-hr<<"\n";
	 return hl-hr;	
}

struct Tnode * LLrotation(struct Tnode *t)
{
	cout<<"LL-rotation\n";
	struct Tnode *tl, *tlr;
	
	tl = t->left;
	tlr = tl->right;
	
	t->left = tlr;
	tl->right = t;
	
	if(t == root)
	root = tl;
	return tl;

}


struct Tnode * RRrotation(struct Tnode *t)
{
	cout<<"RR rotation\n";
	struct Tnode *tr, *trl;
	tr = t->right;
	trl = tr->left;
	
	tr->left = t;
	t->right  = trl;
	
	t->height = height(t);
	tr->height = height(tr);
	
	if(t == root)
	root = tr;
	return tr;
}


struct Tnode * RLrotation(struct Tnode *t)
{
   cout<<"RL-rotation\n";
   struct Tnode *tr, *trl;
   
   tr = t->right;
   trl = tr->left;
   
   tr->left = trl->right;
   t->right = trl->left;
   
   trl->left = t;
   trl->right = tr;
   
   if(root == t)
   root = trl;
   return trl;


}

struct Tnode * LRrotation(struct Tnode *t)
{
   cout<<"LR-rotation\n";
   struct Tnode *tl, *tlr;
   
   tl = t->left;
   tlr = tl->right;
   
   t->left = tlr->right;
   tl->right  = tlr->left;
   
   tlr->right = t;
   tlr->left = tl;
   
   
   
   if(t == root)
   root = tlr;
   return tlr;
}



struct Tnode * insertR(struct Tnode *t,int data)
{
	if(t == NULL)
	{
		struct Tnode *tn = new struct Tnode;
		tn->data = data;
		tn->height = 1;
		tn->left = NULL;
		tn->right  = NULL;
		return tn;
	}
	if(data < t->data)
	{
		t->left = insertR(t->left,data);
	}
	else if(data > t->data)
	{
		t->right = insertR(t->right,data);
	}
	
	t->height = height(t);
	if(balanceFactor(t) == 2 && balanceFactor(t->left) == 1)
    return	LLrotation(t);
	else if(balanceFactor(t) == -2  && balanceFactor(t->right) == -1 )
	return RRrotation(t);
	else if(balanceFactor(t) == 2 && balanceFactor(t->left) == -1)
	return LRrotation(t);
	else if(balanceFactor(t) == -2 && balanceFactor(t->right) == 1)
	return RLrotation(t);
	
	return t;
}


int main()
{

 root = insertR(root,30);
 insertR(root,40);
 insertR(root,35);

 cout<<"\n";
 traverse(root);
 return 0;
	
	
}
