//bin Sort/ Bucket Sort

#include<bits/stdc++.h>

using namespace std;


struct node 
{
	int data;
	struct node *next; 
};


void Insert(struct node **b, int data)
{
	cout<<" data recently at"<<&b[data]<<".\n";
	cout<<"Inserting..."<<data<<"\n";
	struct node *tt = new struct node;
	if(b[data] == NULL)
	{
		cout<<"at head at address "<<&b[data]<<"'\n";
		b[data] = tt;
		tt->data = data;
		tt->next = NULL;
		cout<<"Inserted\n\n";
	}
	else
	{
		cout<<"After head At address: "<<&b[data]<<"'s next.'\n";
		while(b[data]->next != NULL)
		b[data] = b[data]->next;
		
		b[data]->next = tt;
		tt->data = data;
		tt->next =NULL;
		cout<<"Inserted\n\n";
	}
}



void Print(int arr[], int n)
{
	cout<<"Printing values...\n";
	for(int i = 0; i< n ; i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<"\n";
}

int maxum(int arr[], int n)
{
	int m = arr[0];
	for(int i =1; i< n; i++)
	{
		if(m < arr[i])
		{
			m = arr[i];
		}
	}
	cout<<"Maximum is: "<<m<<"\n";
	return m;
}

void bucketSort(int arr[], int n)
{
   int m = maxum(arr,n);
   struct node **bins  = new struct node*[m+1];
  
  cout<<"Setting bin array ptrs to NULL.\n";
   for(int i = 0;  i<m+1; i++)
   {
   	    bins[i] = NULL;    
   }
    
    cout<<"Inserting array values in bin array.\n";
   for(int i = 0; i< n; i++)
   {
   	 Insert(bins,arr[i]);
   }
   
   
   cout<<"Putting values in sorted order.\n";
   for(int i = 0,j=0 ; i< m+1; i++)
   {
   	    while(bins[i] != NULL)
   	    {
   	    	arr[j++] = bins[i]->data;
   	    	bins[i] = bins[i]->next;
		   }
		   
   }
}


int main()
{
	int A[10]	 = {11,15,9,11,2,1,5,7,12,14};
	cout<<"Initially: ";
	Print(A,10);
	
	bucketSort(A,10);
	Print(A,10);
	
}
