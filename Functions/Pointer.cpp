#include<bits/stdc++.h>
using namespace std;

int main()
{
	int *p,*k,*q,n,i;
	n = 5;
	p = &n;
	
	//Allocating 5 int spaces in heap with the help of malloc 
	
	k = (int*)malloc(5*sizeof(int));
	cout<<n<<endl;
	cout<<*p<<endl;
	for( i = 0; i<5;i++)
	{
		*(k+i) = i+1;
	}
	for(i = 0; i<5; i++)
	{
		cout<<*(k+i)<<" ";
	}
	
	 //allocates 5 places in heap and return address to the pointer q.
	 
	q = new int[5];
	for(i = 0; i<5; i++)
	{
		*(q+i)  = i+2;
	}
	
	for( i=0;i<5; i++)
	{
		cout<<*(q+i)<<" ";
	}
}
