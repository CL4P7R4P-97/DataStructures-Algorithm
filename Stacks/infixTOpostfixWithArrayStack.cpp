//Infix to postfix using array as Stack

#include<bits/stdc++.h>
using namespace std;

char post[10]  = "";
int i = 0,j= 0;


struct Stack
{
	int size;
	int top;
	char *sptr;
}st;


int isOperand(char ch)
{
	if(ch == '+'|| ch == '-'|| ch == '*'|| ch == '/')
	return 0;
	else
	return 1;
}

int prec(char ch)
{
	if(ch == '+'|| ch == '-' )
	return 1;
	else if(ch == '*'|| ch == '/')
	return 2;
	return 0;
}


void create(struct Stack &ss, int s)
{
	ss.top = -1;
	ss.size = s;
	ss.sptr = new char [ss.size];
	cout<<"created\n";
}

void push(struct Stack &ss, int val)
{
	if(ss.top == ss.size -1)
	cout<<"Overflow! "<<"\n";
	else
	{
		ss.top++;
		ss.sptr[ss.top] = val;
	}
	cout<<"pushed\n";
}

void pop(struct Stack &ss)
{
	if(ss.top == -1)
	cout<<"Underflow! "<<"\n";
	else
	{
	   post[j] = ss.sptr[ss.top];
	   j++;
	   ss.sptr[ss.top] = 0;
	   ss.top--;
	}
	cout<<"popped\n";
}



int main()
{
	char str[] = "a+b*c-d/e";
	int stsize;
	
	cout<<"Enter the size of Stack: ";
	cin>>stsize;
	cout<<str<<"\n";
	create(st,stsize);
	while(str[i] != '\0')
	{
		if(isOperand(str[i]))
		{
			cout<<"toPostfix\n";
			post[j] = str[i];
			j++;
		}
		else
		{
			if(st.top == -1)
			{
				push(st,str[i]);
			}
			else if(prec(str[i] ) > prec(st.sptr[st.top]))
			{
				push(st,str[i]);
			}
			else
			{
				while(prec(str[i] ) <= prec(st.sptr[st.top]))
				{
				
				pop(st);
				if(st.top == -1)
				break;}
					push(st,str[i]);
			}
		
			
			
			
			
//			else
//			{
//				while(prec[str[i]] <= prec(st.sptr[st.top]))
//				{
//					pop(st);
//					if(st.top == -1)
//					break;
//				}
//			}


		}
		i++;
	}
	while(st.top != -1)
	{
		pop(st);
	}
	cout<<post;
	
	
}
