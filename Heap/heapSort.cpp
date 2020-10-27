//Heap sort
//insertion n(logn) as well as deletion will also take n(logn), so total complexity is 2n(logn)
#include<bits/stdc++.h>

using namespace std;

void insertion(int arr[], int n)
{
	int i = n;
	int temp = arr[i-1];
	while(i>1 && temp > arr[i/2-1])
	{
		arr[i-1] = arr[i/2 -1];
		i = i/2;
	}
	arr[i-1] = temp;
}

void deletion (int arr[], int n)
{
	cout<<n<<"- Value of n\n";
int height = (n)/2; // loop will go until the full height of the tree !important
	int left, right;
	int i = 1;
	int temp = arr[i-1];
	int tempI ;
	cout<<"value of i: "<<i<<"\n";
	arr[i-1] = arr[n-1];
    arr[n-1] = temp;
	while(i < height)
	{
		tempI = arr[i-1];
		cout<<"i: "<<i<<"\n";
		cout<<"ON: "<<arr[i-1]<<"\n";
		left = arr[2*i -1];
		cout<<left<<"-L : ";
		right = arr[2*i];
		cout<<right<<"-R\n";
		arr[i-1] = left>right?left:right;
		cout<<arr[i-1]<<" \n";
		
		i =  left>right?(2*i-1) : (2*i);
		i +=1;
		arr[i-1] = tempI;
		
	}
}

int main()
{
	int arr[10] = {10,20,30,40,50,60,70,80,90,100};
	for(int i = 2; i<11; i++)
	{
		insertion(arr,i);
	}
	cout<<"After-Insertion: ";
	for(int i = 0; i<10; i++)
	{
		
		cout<<arr[i]<<" ";
	}
	cout<<"\n";

	for(int i = 0; i<10; i++)
	{
		
		deletion(arr,10-i);
		cout<<"After-Deletion: ";
		for(int i = 0; i<10; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
	
	}
	cout<<"\n";

}
