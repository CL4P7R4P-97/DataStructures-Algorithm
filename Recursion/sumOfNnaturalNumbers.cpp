#include<bits/stdc++.h>
//SUm of N natural numbers with recursion
using namespace std;

int sumOfN(int n)
{
	if(n==0)
	return 0;
	else
	return sumOfN(n-1) + n;
	
	//without recursion
	/*
	sum = 0;
	for(int i = 1; i<=n; i++)
	{
	sum = sum + i;
}
	*/
	
}

int main()
{
	int n;
	cin>>n;
	cout<<sumOfN(n);
	
}
