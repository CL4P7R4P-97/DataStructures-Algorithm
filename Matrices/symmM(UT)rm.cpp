//symmetric matrix

#include<bits/stdc++.h>

using namespace std;

class symM
{
	private:
		int n;
		int *a;
		
		public:
			
			symM(int n)
			{
				this->n = n;
				a = new int[n*(n+1)/2];
			}
			
			~symM()
			{
				delete []a;
				cout<<"\nmemory saved";
			}
			
			int formula(int i, int j)
			{
				//with uppertriangular matrix
				if(i<=j)
				{
					return i+j-1;
				}
				
                
			}
			
			void set(int i, int j, int x)
			{
				if(i<=j)
				{
					a[formula(i,j)] = x; //we need element for the upper triangular only
				}

				
			}
			
			int get(int i, int j)
			{
				if(i<=j)
				{
					return a[formula(i,j)]; // if i<=j
				}
				else
				return a[formula(j,i)];   // if i>=j we interchange i and j as formula is  : (i+j) - 1 so no effect even interchanged i and j as i+j = j+i
			}
};

int main()
{
	cout<<"Enter size: ";
	int n;
	cin>>n;
	symM obj(n);
	int k;
	cout<<"Enter "<<n*n<<" elements in matrix form:"<<"\n";
	for(int i  = 1;i<n+1;i++)
	{
		for(int j = 1; j<n+1 ; j++)
		{
			cin>>k;
			obj.set(i,  j,k  );
		
		}
	}
	
	cout<<"\nOUTPUT: "<<"\n\n";
		for(int i  = 1;i<n+1;i++)
	{
		for(int j = 1; j<n+1 ; j++)
		{

			cout<<obj.get(i,  j)<<" ";
			if(j==n)
			cout<<"\n";
		}
	}
	
	
}
