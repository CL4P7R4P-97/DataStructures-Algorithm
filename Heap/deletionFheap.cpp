//deletion from heap

#include<bits/stdc++.h>
using namespace std;

void deletion(int arr[], int n)
{
	int height = (n)/2; // loop will go until the full height of the tree !important
	int left, right;
	int i = 1;
	int temp = arr[i-1];
	int tempI ;
	
	arr[i-1] = arr[n-1];
    arr[n-1] = 0;
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
  int arr[10] = {100, 90, 60, 70, 80, 20, 50, 10, 40, 30};
   	
   	deletion(arr,10);
   	
   	for(int i = 0; i< 10; i++)
   	{
   		cout<<arr[i]<<" ";
	   }
	   cout<<"\n";
	   deletion(arr,9);
	   	for(int i = 0; i< 10; i++)
   	{
   		cout<<arr[i]<<" ";
	   }
	   
}
