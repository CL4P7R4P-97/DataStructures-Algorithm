//upper triangular matrix

#include<bits/stdc++.h>

using namespace std;


class upperTMrm
{
	private: 
	           int n;
	           int *a;
	           
	           public:
	           	    upperTMrm(int n)
	           	    {
	           	    	this->n = n;
	           	    	a = new int[n*(n+1)/2];
					   }
					   
					   ~upperTMrm()
					   { 
					        cout<<"memory saved!";
					        delete []a;
					   }
					   
					   int  formula(int i, int j)
					   {
					   	return i+j-1;
					   }
					   void set(int i, int j, int x)
					   {
					   	if(i<=j)
					   	a[formula(i,j)] = x;
					   }
					   
					   int get(int i, int j)
					   {
					   	if(i<= j)
					     {
					     	return a[formula(i,j)];
						 }
						 else 
						 return 0;
					   }
};


int main()
{
	upperTMrm obj(6);
	
	for(int i= 1; i<6; i++)
	{
		for(int j =1; j<6; j++)
		{
			obj.set(i,j,i+j);
			cout<<obj.get(i,j)<<" ";
			if(j==5)
			cout<<"\n";
		}
	}
	
}
