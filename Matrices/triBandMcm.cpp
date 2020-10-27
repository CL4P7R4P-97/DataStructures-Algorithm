//tri-band matrix or tri- diagonal matrix

#include<bits/stdc++.h>

using namespace std;

class triB
{
	private:
		int n;
		int *a;
		
		public:
			
			triB(int n)
			{
				this->n = n;
				a = new int[n+2*(n-1)];
			}
			
            ~triB()
            {
            	delete []a;
            	cout<<"\nObject Destroyed!";
			}
			int formula(int i, int j)
			{
				if(i==2)
				return i+j-1;
				if(i=3)
				return i+j;
				if(i=1)
				return j-i;
			}
			
			void set(int i, int j , int x)
			{
				if((i-j == 1 || i-j == 0 || i-j == -1))
				{
					a[formula(i,j)] = x;
				}
			}
			
			int  get(int i, int j)
			{
				if((i-j == 1 || i-j == 0 || i-j == -1))
				{
					return a[formula(i,j)];
				}
				else 
				return 0;
			}
			
};

int main()
{
	
	int n;
	cin>>n;
	triB obj(n);
	cout<<"Size: "<<"\n\n";
	
	for(int i=1; i<n+1; i++)
	{
		for(int j = 1; j<n+1; j++)
		{
			obj.set(i,j,i+j);
			cout<<obj.get(i,j)<<"     ";
			if(j==n)
			cout<<"\n";
		}
	}
}

