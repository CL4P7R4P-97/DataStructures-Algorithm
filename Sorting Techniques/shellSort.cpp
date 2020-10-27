//Shell sort

#include <bits/stdc++.h>
using namespace std;




void Print(int arr[], int n)
{
	for(int i = 0; i< n; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

void shellSort(int arr[], int n)
{
	int i=0,j=0,temp , gap;
	for(gap = n/2; gap >=1; gap = gap/2)
	{
		cout<<"gap at: "<<gap<<"\n";
		for(i = gap; i < n; i++)
		{
			cout<<"for gap: "<<gap<<"\n";
			cout<<"i on : "<<arr[i]<<"\n";
			temp = arr[i];
			j = i-gap;
		while((j>=0) && (arr[j] > temp))
		{
			arr[j+gap] = arr[j];
			j = j-gap;
		}
		arr[j+gap] = temp;
		cout<<"\n"	;
		}
	}
}

int main()
{
	int A[] = {5,4,1,6,2,1};
	shellSort(A,6);
	Print(A,6);
}
