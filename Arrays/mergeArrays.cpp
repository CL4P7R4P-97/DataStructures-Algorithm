//merging an array
#include<bits/stdc++.h>

using namespace std;
int * merge(int a[],int b[],  int l1, int l2)
{
	int size = l1+l2-2;
	int *ta = new int[l1+l2];
	int k = 0,i,j;
	for( i = 0;i<l1;i++)
	{
		for(int j = 0; j<l2; j++)
		{
			if(a[i]<=b[j])
			{
			   ta[k] = a[i]	;
			   i++;
			   k++;
			}
			else
			{
			   ta[k] = b[j];
			   j++;
			   k++;
		    }
		}
	}
	for(i;i<l1;i++,k++)
	{
		ta[k] = a[i];
	}
	for(j; j<l2; j++,k++)
	{
		ta[k] = b[j];
	}
	
	
	return ta;
}

int main()
{
	int *arr;
	int a[6] = {10,24,35,64,67,79};
	int b[8] = {3,20,26,30,53,66,70,77};
	
	arr = merge(a,b,6,8);
	for(int i =0; i<14;i++ )
	{
		cout<<arr[i]<<" ";
	}
}
