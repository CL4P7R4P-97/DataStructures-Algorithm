//Inserting in Max Heap

#include<bits/stdc++.h>

using namespace std;


void  Insert(int arr[], int n)
{
     int temp, i = n;
     temp = arr[n-1];
	while(i >1 && temp >  arr[i/2 -1])
	{
		arr[i-1] = arr[i/2 -1];
	    i = i/2 ;
		
		
	}
	
	arr[i-1] = temp;
	
}

int main()
{
	int arr[20] = {30,20,15,5,10,12,6};
	arr[7] = 40;
	Insert(arr,8);
	arr[8] = 50;
	Insert(arr,9);
	for(int i = 0; i<9; i++)
	{
		cout<<arr[i]<<" ";
	}
}
