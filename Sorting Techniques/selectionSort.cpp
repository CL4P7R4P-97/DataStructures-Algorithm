//Selection sort

#include <bits/stdc++.h>
using namespace std;

void swap(int &a, int &b)
{
	cout<<"Replacing: "<<a<<" with "<<b<<"\n";
	int temp = a;
	a = b;
	b = temp;
}

void Print(int arr[], int n)
{
	for(int i = 0; i< n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void selectionSort(int arr[], int n)
{
	int i, j, k;
	for( i = 0; i < n; i++)
	{
		cout<<i<<" -i\n";
		k = i;
		cout<<"Before: ";
		Print(arr,n);
	    for( j = i; j < n; j++)
	    {
	    	
	    	if(arr[i] > arr[j])
	    	{
	    		
	    		k = j;
	    		cout<<j<<" -j ";
	    		cout<<k<<" -k\n";
			}
		}
		if(arr[i] != arr[k])
		swap(arr[i],arr[k]);
		cout<<"After: ";
		Print(arr,n);
		cout<<"\n";
	}
	
}

int main()
{
	
	int A[10] = {6,5,4,3,2,1,7,9,8,0};
	selectionSort(A,10);
	cout<<"Finally: ";
	for(int i = 0; i < 10; i++)
	{
		cout<<A[i]<<" ";
	}
}
