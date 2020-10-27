//merging single list i.e A list having two list

#include<bits/stdc++.h>

using namespace std;

void merge(int arr[], int len, int mid)
{
	int arr2[len];
	int i,j,k;
	for(i = 0, j = mid,k = 0; i<mid, j<len; )
	{
		if(arr[i] <= arr[j])
		{
			arr2[k++] = arr[i++];
		}
		else
		{
			arr2[k++] = arr[j++];
		}	
	}
	while(i<mid)
	{
		arr2[k++] = arr[i++];
	}
	while(j<len)
	{
		arr2[k++] = arr[j++];
	}
	for(i = 0, j = 0; i<len ; i++,j++)
	{
		arr[i] = arr2[j];
	}
	
	for(i = 0 ; i<len; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int divider;
	int arr[] = {10,20,30,40,50,0,3,6,9,12,15,18};
	for(int i = 0; i< 12; i++)
    {
    	if(arr[i] > arr[i+1])
    	{
		
    	divider =  i+1;
    	break;
        }
   	}
   	
   	merge(arr,12,divider);
}
