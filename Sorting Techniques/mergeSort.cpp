//MergeSort
#include<bits/stdc++.h>

using namespace std;

void Print(int arr[], int len)
{
	for(int i = 0; i< len ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void merge(int arr[],int l, int mid, int h)
{
  cout<<"Merging...\n";
//  Print(arr,h-l+1);
  cout<<"l- "<<l<<" || mid- "<<mid<<"|| h -"<<h<<"\n";
  int narr[h-l+1];
  cout<<arr[mid]<<"- mid\n";
  int i = 0,j = 0, k = 0;
  for(i = l, j = mid+1; i<=mid&&j<=h;)
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
  cout<<"OUT!\n";
  
  
  while(i<=mid)
  {
  	cout<<"lowerA\n";
  	cout<<"remaining: "<<arr[i]<<"\n";
  	narr[k++] = arr[i++];
  }
  while(j <= h)
  {
  	cout<<"upperA\n";
  	cout<<"remaining: "<<arr[j]<<"\n";
  	narr[k++] = arr[j++];
  }
  
  for(i = l ,j=0; i<=h ; i++)
  {
  	arr[i] = narr[j++];
  }
  Print(arr,h+1);
}


void mergeSort(int arr[], int n)
{
	int p, mid, l,h;
	for(p = 2; p<=n; p = p*2)
	{
		for(int i = 0; i+p-1 < n; i= i+p)
		{
			cout<<p<<" -p\n";
			l = i;
			h  = i+p-1;
			mid = (l+h)/2;
			merge(arr,l,mid,h);
		}
	}
	cout<<"Printing...last\n";
	cout<<p<<"\n";
	if(p/2< n)
	merge(arr,0,p/2-1,n-1);
}



int main()
{
	int arr[] = {6,-3,15,-4,12,11,6,-3,15,-4,12,11};
	mergeSort(arr,12);
	for(int i = 0; i< 12; i++)
	{
		cout<<arr[i]<<" ";
	}
}
