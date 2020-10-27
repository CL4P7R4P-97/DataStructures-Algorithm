//Quick Sort

#include<bits/stdc++.h>

using namespace std;


void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void Print(int arr[], int len)
{
	for(int i = 0; i<len ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int partition(int arr[], int l, int h)
{
	cout<<"Partitioning\n";
	int pivot = arr[l];
	int i = l;
	int j = h;
	
	do
	{
		do{i++;}while(arr[i] <= pivot);
		do{j--;}while(arr[j] > pivot);
		
		if(i<j)
		swap(arr[i],arr[j]);
	}while(i<j);
	
	
	if(i > j)
    swap(arr[l],arr[j]);
	//	cout<<"center returned\n";
	return j;

}

void quickSort(int arr[], int l,int h)
{
	Print(arr,h+1);
	cout<<"CAlled\n";
    int j = 0;
	if(l<h)
	{
	
	j = partition(arr,l,h);
	quickSort(arr,l,j-1);
	quickSort(arr,j+1,h);
}
}


int main()
{
	int A[] = {34,12,67,32,78,65,54,34,87,90};
	quickSort(A,0,9);
	Print(A,10);
}
