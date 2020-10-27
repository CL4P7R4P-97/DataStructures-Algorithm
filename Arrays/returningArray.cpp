#include<bits/stdc++.h>
using namespace std;

int *  Arrayreturn(int size)
{
    int *p ;
	p = (int*)malloc(size*sizeof(int));
	for(int i = 0; i<size; i++)
	{
		*(p+i) = i+1;
	}
	return p;  //returning the pointer pointing to the base address of dynamically allocated array (that's in heap).
}

int main()
{
	int n = 5, *ptr;
	ptr = Arrayreturn(5);
	for(int i = 0; i<n;i++)
	{
		cout<<*(ptr+i)<<" ";
	}
	
}
