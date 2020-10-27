//Count Sort

#include<bits/stdc++.h>

using namespace std;



void Print(int arr[], int n)
{
	for(int i= 0; i < n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int maxum(int arr[], int n)
{
	int m = arr[0];
	for(int i = 1; i< n; i++)
	{
		if(arr[i] > m)
		{
			m = arr[i];
		}
	}
	return m;
}

void countSort(int arr[], int len)
{
	int max = maxum(arr,len);
	int *c = new int[max+1];
	for(int i = 0; i < max+1; i++ )
	{
		c[i] = 0;
	}
	
	for(int i= 0;  i< len; i++)
	{
		c[arr[i]]++;
	}
	int j = 0;
	int i  = 0;
	while( j< max+1)
	{
		if(c[j] > 0)
		{
			arr[i++] = j;
			c[j]--;
		}
		else
		j++;
	}
}


int main()
{
  int A[10]	 = {11,13,9,4,2,1,5,7,12,14};
  countSort(A,10);
  Print(A,10);
}
