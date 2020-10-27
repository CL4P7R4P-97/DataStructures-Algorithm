// factorial using recursion 

#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	if(n==0||n==1)
	{
		return n;
	}
	else
	{
		return factorial(n-1)*n;
	}
}

int main()
{
	int n;
	cin>>n;
	cout<<factorial(n);
}

