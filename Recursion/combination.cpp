//combination formula
#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
	if(n==0)
	return 1;
	return factorial(n-1)*n;
}

int combination(int n, int r)
{
	if(r==1)
	return n;
	if(r==0)
	return 1;
	return factorial(n)/(factorial(n-r)*factorial(r));
}

int main()
{
	int n,r;
	cin>>n>>r;
	cout<<combination(n,r);
}
