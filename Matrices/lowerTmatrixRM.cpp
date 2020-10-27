//lower triangle matrix - ROW MAJOR

#include<bits/stdc++.h>

using namespace std;

class rowmajorM
{
	private: 
	      int n;
	      int *a;
	      
	      public:
	      	
	      	rowmajorM(int n)
	      	{
	      		this->n = n;
	      		a = new int[n*(n+1)/2];
			  }
			  
			 ~rowmajorM()
			 {
			 	delete []a;
			 	cout<<"\n"<<"finished";
			 }
			  
			  int formula(int i, int j)
			  {
			  	int d = ((i-1)*i)/2 + j-1;
			  	return d;
			  }
			  
			 void set( int i, int j, int x) 
			  {
			  	 
			  	if(i>=j)
			  	{
			  		a[formula(i,j)] = x;
				  }
			  }
			  
			  int get( int i,int j)
			  {
			  	if(i>=j)
			  	{
			  		return a[formula(i,j)] ;
				  }
				  else
				  return 0;
			  }
};

int main()
{
	rowmajorM obj(5);
	for(int i = 1; i<6; i++)
	{
		for(int j = 1; j<6; j++)
		{
			obj.set(i,j,i+j);
			cout<<obj.get(i,j)<<" ";
			if(j==5)
			cout<<"\n";
		}
	}
}
