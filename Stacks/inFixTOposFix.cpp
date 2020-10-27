//Converting infix to post fix

#include<bits/stdc++.h>
using namespace std;

char post[10] = "";
int i=0, j=0;


struct node
{
	char data;
	struct node *next;
	
}*top = NULL;



int isOperand(char c)
{
//	cout<<"checking operand.."<<c<<"\n";
    if(c == '+' || c == '-' || c == '*' || c == '/')	
    {
    	return 0;
	}
	else
	return 1;
}

int prec(char c)
{
		
//	cout<<"checking precedence.."<<c<<"\n";
	if(c == '+' || c == '-' )
	{
		return 1;
	}
	else if( c == '*' || c == '/')
	{
		return 2;
	}
	return 0;
}

void push(char c)
{

//	cout<<"\nInside push"<<"\n";
	struct node *t;
	t = new struct node;
	if(t == NULL)
	{
		cout<<"Overflow! "<<"\n";
	}
	else
	{
	   if(top == NULL)	
	   {
	   	t->data = c;
	   	t->next = NULL;
	   	top = t;
	   	
	   	cout<<"pushed"<<"\n";
	   }
	   else
	   {
	   	  t->data = c;
	   	  t->next = top;
	   	  top  = t;
	   	cout<<"pushed"<"\n";
	   }
	}
}

void pop()
{
//	cout<<"\nInsidepop"<<"\n";
	
	if(top == NULL)
	{
		cout<<"Underflow! "<<"\n";
	}
	else
	{
		
		//cout<<top->data<<"\n";
		post[j] = top->data;
		j++;
		top = top->next;
		if(top == NULL)
		cout<<"popped\n";
	}
}

int main()
{


	char ch[] = "a+b*c-d";
	
    cout<<ch<<"\n";
	while(ch[i] != '\0')
	{
		if(isOperand(ch[i]))
		{
			cout<<"Topostfix: ";
			post[j] = ch[i];
			j++;
			
			cout<<ch[i]<<"\n";
		}
		else
		{
			if(top == NULL)
			{
				push(ch[i]);
				
			}
            	else if(prec(ch[i]) > prec(top->data))
				{
					cout<<"pushing... "<<"\n";
					push(ch[i]);
				}
					
			 else{
			 
			
					while(prec(ch[i]) <= prec(top->data) &&  top != NULL)
				{
					//cout<<"about to pop "<<"\n";
					pop();
					if(top == NULL)
					break;
				}
				push(ch[i]);
				}
			}
			
		
		i++;
	}
	while(top != NULL)
	pop();
	
	//cout<<"printing..  ";
	cout<<post<<"\n";
	
    
}
