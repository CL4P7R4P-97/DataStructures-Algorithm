//Toeplitz matrix

#include<bits/stdc++.h>

using namespace std;

class toeplitzM
{
	private:
		int n;
		int *a;
		int d;
		public:
			
			toeplitzM(int n)
			{
				this->n = n;
				d = 2*n-1;
				a = new int[d];
			}
			~toeplitzM()
			{
				cout<<n<<" \nHeap array: ";
			    p();
				delete  []a;
				cout<<"\nCleared heap"<<"\n";
			}
			int formula(int i, int j)
			{
				if(i<=j)
				return j-i;
				if(i>j)
				return n+(i - j - 1);
			}
			void set(int i, int j, int x)
			{
				if(i==1||j==1)
				a[formula(i,j)] = x;
				//cout<<a[formula(i,j)]<<" ";
			}
			
			int get(int i, int j)
			{
			    return a[formula(i,j)];
			}
			void p()
			{
				for(int i = 0;i<d;i++)
				{
					cout<<a[i]<<" ";
				}
			}
};

int main()
{
	int n;
	cout<<"Size: ";
	cin>>n;
	toeplitzM obj(n);
	int k;
	for(int i = 1; i<n+1; i++)
	{
		for(int j =1; j<n+1; j++)
		{
		//	cin>>k;
			
			obj.set(i,j,i+j);
			cout<<obj.get(i,j)<<"  ";
			if(j==n)
			cout<<"\n";
		}
	}
//	for(int i = 1; i<n+1; i++)
//	{
//		for(int j =1; j<n+1; j++)
//		{
//		
//			cout<<obj.get(i,j)<<"  ";
//			if(j==n)
//			cout<<"\n";
//		}
//	}
	

	
}
