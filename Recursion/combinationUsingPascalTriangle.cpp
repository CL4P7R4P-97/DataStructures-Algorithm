//combination using pascal's triangle
#include<bits/stdc++.h>
using namespace std;

int Pascalcombi(int n, int r)
{
	if(r==1)
	return n;
	if(n==0||n==r)
	return 1;
	return Pascalcombi(n-1,r-1) + Pascalcombi(n-1,r);
	
}

int main()
{
	int n,r;
	cin>>n>>r;
	cout<<Pascalcombi(n,r);
}
