//Rotate and shift operation on array

#include<bits/stdc++.h>
using namespace std;


void rotateL(int *a, int length, int times)
{
	cout<<"Giving "<<times<<"  left rotations"<<"--->";
	int k = 0;
	int i = 0;
	int temp ;
	while(k<times)
	{
	

	i=0;
	
	temp = a[0];
	for(i; i<length; i++)
	{
		a[i] = a[i+1];
	    
	}
	
    a[i-1] = temp;
    	k++;
}
	
	
	
	
}

void rotateR(int a[], int length,int times)
{
	cout<<"Giving "<<times<<" right rotations"<<"--->";
	int k  = 0;
	int i = 0;
	while(k<times)
	{
    i = 0;
	int temp;
	temp = a[length-1];
	for(i= length-1; i>0 ;i--)
	{
		a[i] = a[i-1];
	}
	a[0] = temp;
	k++;
}
	
	
}

void shiftL(int a[], int length, int times)
{
	cout<<"Giving "<<times<<" left   shifting"<<"--->";
	int k = 0;
	while(k<times)
	{
	
	int i =0;
	for( i  ; i<length; i++)
	{
		a[i] = a[i+1];
	}
	
	a[i-1] = 0;
	k++;
}
}

void shiftR(int a[], int length,int times)
{
	cout<<"Giving "<<times<<" right  shifting"<<"--->";
	int k = 0;
	while(k<times)
	{
	
  int i = 0;
  for(i=length-1; i>0; i--)
  {
  	a[i] = a[i-1];
  }
  a[0] = 0;
  k++;
}
	
}

void display(int a[], int len)
{
	for(int i = 0; i<len;i++)
	{
		cout<<a[i]<<" ";
	}
	cout<<"\n";
}

int main()
{
	int a[10] = {1,2,3,4,5,6,7,8,9,10};

	rotateL(a,10,6);
	display(a,10);
	rotateR(a,10,3);
	display(a,10);
	shiftL(a,10,2);
	display(a,10);
	shiftR(a,10,3);
	display(a,10);
	
	
	
	
	
}
