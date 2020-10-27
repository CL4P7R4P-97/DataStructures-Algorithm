//Insertion Sort with linked list;


#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
}*head,*tail;


void Print(struct node *t)
{
	while(t)
	{
		cout<<t->data<<" ";
		t = t->next;
	}
	cout<<"\n";
}


void insert(struct node *t,int ele)
{
	cout<<"Inserting: "<<ele<<"\n";
	struct node *temp;
	struct node *tt  = new struct node;
	if(head == NULL )
	{
		head = tt;
		tt->data = ele;
		tt->next = NULL;
		tail = tt;
		
		
	}
	else
	{
	
		cout<<"Before: ";
		Print(head);
		while(t != NULL )
		{
		     if(t->data > ele)
		     {
		     	if(t == head)
		     	{
				 cout<<"Inserting at start!\n";
		     	tt->next = head;
	        	tt->data = ele;
	        	head = tt;
	        	cout<<"Sorted: ";
	         	Print(head);
	        	cout<<"\n";
	            return;
	            }
	            else
	            {
	            	cout<<"Inserting in between!\n";
	            	temp->next = tt;
	            	tt->data = ele;
	            	tt->next = t;
	            //	tail = tt;
	            	cout<<"Sorted: ";
	            	Print(head);
	            	cout<<"\n";
	                 return;
				}
			 }
			 
			 temp = t;
			 t = t->next;
			
		}
		cout<<"Inserting in End!\n";
		tail->next = tt;
		tt->data = ele;
		tt->next  = NULL;
		tail = tt;
		
	
	
		
		
	}
     	cout<<"Sorted: ";
		Print(head);
		cout<<"\n";
}

int main()
{
	insert(head, 6);
	insert(head, 5);
	insert(head, 4);
	insert(head, 1);
	insert(head, 3);
	insert(head, 2);
	Print(head);
}
