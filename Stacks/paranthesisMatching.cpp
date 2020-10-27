//Parenthesis matching using linked list

#include<bits/stdc++.h>
using namespace std;
int flag= 0;
struct node
{
  char data;
 struct node *next;
 
}*top = NULL;

void push(char ch)
{
	struct node *t;
	t = new struct node;
	if(t == NULL)
	{
		flag = -1;
		cout<<"Stack overflow brah!"<<"\n";
		return;
	}
	if(top == NULL)
	{
		t->data = ch;
		t->next = NULL;
		top = t;
	}
	else
	{
		t->data = ch;
		t->next = top;
		top = t;
	}
	
}

void pop()
{
	if(top == NULL)
	{
	    flag = -1;
		cout<<"Stack Underflow";
		return;
	}
	else
	{
		cout<<"Popping... "<<top->data<<"\n";
	    top = top->next;	
	}
	
}


int main()
{
	cout<<"Enter the string to check: ";
	int i = 0;
	char str[10] = "";
	gets(str);
	while(str[i] != '\0')
	{
		if(str[i] == '(')
		{
			push('(');
		}
	    if(str[i] == ')')
	    {
	    	pop();
		}
		i++;
	}

if(flag == -1)
{
	cout<<"\nUnbalanced !!!";
}
else
cout<<"\nBalanced !!!";
}
