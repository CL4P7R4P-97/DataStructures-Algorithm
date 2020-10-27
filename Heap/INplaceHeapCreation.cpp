//Inplace heap insertion 

#include <bits/stdc++.h>

using namespace std;

void insert(int arr[], int n)
{
	int i = n;
int temp = arr[n-1];
	while(i > 1 && temp > arr[i/2-1])
	{
		arr[i-1] = arr[i/2 -1];
		i = i/2;
	}
	arr[i-1] = temp;
}

int main()
{
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	for(int i = 2;i  < 11; i++)
	{
		insert(arr,i);
	}
	
	for(int i = 0; i<10;i++)
	{
		cout<<arr[i]<<" ";
	}
}
