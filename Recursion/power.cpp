//power using recursion
#include<bits/stdc++.h>
using namespace std;

int power(int n, int m )
{
	//optimizing code
	if( m ==0)
	return 1;
	
	if(m % 2 == 0)
	return power(n*n,m/2);
	
	if(m % 2 != 0)
	{
		return power(n*n,(m-1)/2)*n;
	}



/* no optimization!!
	if(m==0)
	return 1;
	else
	return power(n,m-1)*n;
	*/
}

int main()
{
	int num,pow;
	cin>>num>>pow;
	cout<<power(num,pow);
}
