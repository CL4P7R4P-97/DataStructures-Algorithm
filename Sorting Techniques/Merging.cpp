//Merge Sort
#include<bits/stdc++.h>
using namespace std;



void merge(int arr1[],int arr2[], int n1, int n2)
{
	int arr3[n1+n2] = {0};
	int i, j, k;
	for( i = 0,j = 0,k = 0; i<n1,j<n2;  )
	{
		if(arr1[i] <=  arr2[j])
		{
			cout<<arr1[i]<<" is < "<<arr2[j]<<"\n";
			arr3[k++] = arr1[i++];
		}
		else
		{
			cout<<arr2[i]<<" is > "<<arr1[j]<<"\n";
			arr3[k++] = arr2[j++];
		}
	}
	while(i<n1)
	{
		arr3[k++] = arr1[i++];
		
	}
	while(j<n2)
	{
		arr3[k++] = arr2[j++];
	}
	for(int m = 0; m< n1+n2; m++ )
	{
		cout<<arr3[m]<<" ";
	}
	
}







int main()
{
	int *arr;
	int A[]  = {10,20,30,40,50,60,70,80,90,100,110,120,130,140,150};
	int B[]  = {21,31,41,51,61};
	 merge(A,B,15,5);
//	for(int i =0; i< 20; i++)
//	{
//		cout<<arr[i]<<" ";
//	}
}
