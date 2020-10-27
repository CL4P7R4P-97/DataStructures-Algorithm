//recursive mergesort

#include<bits/stdc++.h>
using namespace std;



void Print(int arr[], int l,int len)
{
	for(int i = l; i<len ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void merge(int arr[], int l, int mid, int h)
{
	cout<<"Merging...\n";
	Print(arr,l,h+1);
	cout<<"low: "<<l<<" mid: "<<mid<<" high: "<<h<<"\n";
	int narr[h-l+1];
	int i=0,j=0,k = 0;
	for( i  = l , j= mid+1; i<=mid&&j<=h; )
	{
		if(arr[i] <= arr[j])
		{
			cout<<arr[i]<<" <= "	<<arr[j]<<"\n";
			narr[k++]  = arr[i++];
		}
		else
		{
			cout<<arr[i]<<" > "	<<arr[j]<<"\n";
			narr[k++] = arr[j++];
		}
	}
	
	while(i<=mid)
	{
		cout<<"upper\n";
		cout<<"remaining: "<<arr[i]<<"\n";
		narr[k++] = arr[i++];
	}
	
	while(j<=h)
	{
		cout<<"lower\n";
		cout<<"remaining: "<<arr[j]<<"\n";
		narr[k++] = arr[j++];
	}
	
	 for(i = l ,j=0; i<=h ; i++)
  {
  	arr[i] = narr[j++];
  }
	Print(arr,l,h-l+1);

}


void mergeSort(int arr[], int l, int h)
{
	cout<<"Original: ";
	Print(arr,0,12);
	Print(arr,l,h+1);
	int mid;
	cout<<"l: "<<l<<" || "<<"h: "<<h<<"\n\n";
	if(l<h)
	{
		
		mid = (l+h)/2;
		mergeSort(arr,l,mid);
		mergeSort(arr,mid+1,h);
		merge(arr,l,mid,h);
	}
	return;
}

int main()
{
	int arr[] = {6,-3,15,-4,12,11,6,-3,15,-4,12,11};
	mergeSort(arr,0,11);
	for(int i = 0; i< 12; i++)
	{
		cout<<arr[i]<<" ";
	}
	
}
