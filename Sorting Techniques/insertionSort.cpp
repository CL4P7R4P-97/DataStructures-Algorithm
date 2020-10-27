//Insetion Sort: NO swaps, Adoptive behavious

#include<bits/stdc++.h>

using namespace std;

void Print(int arr[], int len)
{
	for(int i = 0; i<= len ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n\n";
}


void insertionSort(int arr[], int len)
{
	int data,j;
	int temp;
	for(int i = 1; i < len ; i++)
	{
		cout<<"Currently: ";
		Print(arr,i);
		cout<<i<<" -i || ";
         j = i-1;
         data =  arr[i];
         cout<<j<<" -j \n";
		while(j >-1 && data < arr[j])
		{
			
		
				
				arr[j+1] = arr[j--];
			    			
		}
		arr[j+1] = data;
		cout<<"Sorted: ";
		Print(arr,i);
	}
}

int main()
{

	int arr[5]  = {66,34,21,55,34};
	insertionSort(arr,5);
	for(int i = 0; i < 5; i++)
	{
		cout<<arr[i]<<" ";
	}
}
