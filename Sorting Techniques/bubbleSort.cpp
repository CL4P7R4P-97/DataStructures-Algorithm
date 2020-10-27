//Bubble Sorting
//Bubble sort has time complexity of O(n2) and space is just O(n).
//Stable and Adoptive sort.
#include<bits/stdc++.h>

using namespace std;


void swap(int &a, int &b)
{
	int c ;
	c = a;
	a = b;
	b = c;
	
}

void bubbleSort(int arr[], int n)
{
	int flag = -1;
	for(int i = 0; i < n-1; i++)
	{
		cout<<"Pass: "<<i+1<<"\n";
		for(int j = 0; j < n - 1- i; j++)
		{
			if(arr[j] > arr[j+1])
			{
				cout<<"Swapping: "<<arr[j]<<" with "<<arr[j+1]<<"\n";
				swap(arr[j],arr[j+1]);
				flag = 0;
			}
		}
		if(flag == -1)
		break;
	}
}

int main()
{
	int A[12] = {20,49,12,34,56,64,35,43,55,22,27,64};
	bubbleSort(A,12);
	for(int i = 0 ; i < 12; i++ )
	{
		cout<<A[i]<<" ";
	}
   
}
