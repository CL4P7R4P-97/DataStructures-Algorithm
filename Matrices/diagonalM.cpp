//Diagonal Matix

#include<bits/stdc++.h>
using namespace std;

void diagonalM(int arr[],int i, int j, int x)
{
   if(i==j)
   arr[i] = x;
}

int get(int arr[],int i, int j )
{
	if(i==j)
	{
		return arr[i];
	}
	else
	return 0;
}
int main()
{
	int arr[5];
	for(int i = 0; i<5; i++)
	{
		for(int j = 0; j<5; j++)
		{
			diagonalM(arr,i,j,i+j+1);
			cout<<get(arr,i,j)<<" ";
			if(j==4)
			cout<<"\n";
		}
	}
	
}
