//Parenthesis matching with Stack with Arrays

#include<bits/stdc++.h>
using namespace std;
int flag = 0;
struct node
{
	char data;
	struct node *next;
	
};


struct Stack 
{
	int size;
	int top ;
	int *sptr;
};




void create(struct Stack &ss, int siz)
{
	cout<<"creating... ..."<<"\n";
	ss.size = siz;
	ss.top = -1;
	ss.sptr = new int[siz];
}

void push(struct Stack &s, char val)
{
	if(s.top == s.size-1)
	{
		cout<<"Stack overflow ! "<<"\n";
		flag = -1;
}
else
	{
		s.top += 1;
		s.sptr[s.top] = val;
	}
	
	
}

void pop(struct Stack &ss)
{
	if(ss.top == -1)
	{
		cout<<"Stack Underflow! "<<"\n";
		flag = -1;
	}
	else
	{
		ss.sptr[ss.top]  = 0;
		ss.top -= 1;
	}
}

int main()
{
	int i=0, stsiz;
	struct Stack st;
	cout<<"Enter the size of stack: ";
	cin>>stsiz;
	create(st,stsiz);
    char str[20] = "";
    cout<<"\nEnter the String: ";
    cin>>str;
    while(str[i] != '\0')
    {
    	if(str[i] == '(')
    	{
    		push(st,'(');
		}
		if(str[i] == ')')
		{
			pop(st);
		}
		i++;
	}
	
	if(flag ==-1)
	{
		cout<<"Unbalanced! "<<"\n";
	}
	else
	{
		cout<<"Balanced! ";
	}
}
