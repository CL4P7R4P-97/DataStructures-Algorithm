//Binary Search Algorithm;

#include<bits/stdc++.h>
using namespace std;

int bSearch(int *a,int key, int l, int h)
{
     //without recursion
	int mid;
	/*
	while(l<=h)
	{
		mid = (l+h)/2;
		cout<<"mid index "<<mid<<" ";
		cout<<"mid element"<<a[mid]<<"\n";
		if(a[mid]== key)
		return mid;
		if(a[mid]<key)
		{
			l = mid+1;
			cout<<l<<" "<<h<<" "<<mid<<"\n";
			
		}
		else
		{
			h = mid-1;
			cout<<l<<" "<<h<<" "<<mid<<"\n";
		}
	}
	*/
	//with recursion
	if(l<=h)
	{
		mid = (l+h)/2;
		if(a[mid] == key)
		return mid;
		if(a[mid] < key)
		return bSearch(a,key,mid+1,h); // tail recursion
		else
		return bSearch(a,key,l,mid-1); //tail recursion
	}
	return -1;
	
	
}


int main()
{
	int A[15] = {1,2,4,5,6,7,8,9,11,15,16,17,19,21,24};
	cout<<"found at: "<<bSearch(A,100,0,14);
	
	
	
}
