//inserting in sorted array 
//checking is array is sorted 
//-ve on left side and +ve on right side

#include<bits/stdc++.h>
using namespace std;

int  insertion(int *a, int x, int length)
{
	int i = length;
	if(x > a[length-1])
	{
		a[length] = x;
		return length+1;
	}
	for( i ; a[i-1] > x; i--)
	{
		
		a[i]  = a[i-1];
	}
	a[i+1] = x;
	
	return length+1;
}

string checkifSorted(int a[], int length)
{
	int flag = -1;
	for(int i=0; i<length; i++)
	{
		if(a[i] <= a[i+1])
		flag = 0;
		else
		flag = -1;
	}
	if(flag == -1)
	return "No";
	else
	return "Yes";
}

void display(int a[], int length,string message)
{
	cout<<message<<"-->";
	for(int i=0; i<length; i++)
	{
		
		cout<<a[i]<<" ";
	}cout<<"\n";
}

void sortNvPv(int a[], int length)
{
	int i = 0;
	int j = length-1;
	
	while(i<j)
	{
	
	while(a[i]<0)
	{
		i++;
	}
	while(a[j] >0)
	{
		j--;
	}
	int temp = a[i];
	a[i] = a[j];
	a[j] = temp;
	
}
}

int main()
{
	int nlen;
	int nA[10] = {-23,-4,1,3,5,-6,-2,-9,24,54};
	int A[18] = {2,4,6,23,34,56,78,700,92,102,106,123,256};
	cout<<checkifSorted(A,13)<<"\n";
	display(A,13,"before");
	nlen  = insertion(A,45,13);
	display(A,nlen,"after ");
	sortNvPv(nA,10);
	display(nA,10,"-ve on L & +ve on R :");
	
}
