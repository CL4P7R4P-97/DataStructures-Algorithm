//concatenating two linked list

#include<bits/stdc++.h>
using namespace std;

struct node
{
 int data;
 struct node *next;
}*first1 , *first2, *finalP;

void display(struct node *p)
{
   while(p)
   {
   	cout<<p->data<<" ";
   	p = p->next;
   }
   cout<<"\n";
}

struct node * create(int n)
{
	struct node *head  = NULL;
    struct node *t, *last;
    for(int i = 0; i<n ; i++)
    {
    	t = new struct node;
    	if(head == NULL)
    	{
    		head = t;
    		cin>>t->data;
    		t->next = NULL;
    		last = t;
		}
		else
		{
			last->next = t;
			cin>>t->data;
			t->next = NULL;
			last = t;
		}
	}
return head;
}


struct node * concatenator(struct node *h1, struct node *h2)
{
	struct node *temp;
	temp = h1;
    while(h1)
    {
    	if(h1->next == NULL)
    	{
    		break;
	}
    	h1 = h1->next;
    	
	}
	h1->next = h2;
	return temp;
}

int main()
{
  int n;
  cout<<"Enter the lenght: ";
  cin>>n;
  first1 = create(n);
  cout<<"\nEnter for next list: ";
  first2  = create(n);
  display(first1);
  display(first2);
  finalP = concatenator(first1,first2);
  display(finalP);
}

