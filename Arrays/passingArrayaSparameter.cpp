#include<bits/stdc++.h>
using namespace std;

//int sumArray(int arr[], int size) //  An array specific pointer (array pointer ,base address of the array) and the size of array is passed as parameters
int sumArray(int *p, int size) // here pointer 'p' is used as parameter which is general a pointer 
{
	int sum  = 0;
	for(int i= 0; i<size; i++)
	
	{
		sum = sum+(*(p+i));
	}
	return sum;
}

int main()
{
	int A[5] = {34,53,23,56,65};
	cout<<sumArray(A,5);
	
}
