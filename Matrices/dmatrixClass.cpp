//Diagonal matrix with class

#include<bits/stdc++.h>

using namespace std;


class dmatrix
{
	private:
		int n;
		int *a;
	public:	
		dmatrix(int n)
		{
			this->n= n;
			a = new int[n];
		}
		
		void set(int i, int j,int x)
		{
			if(i==j)
			{
				a[i-1] = x;
			}
		}
		
		int get(int i,int j)
		{
			if(i==j)
			return a[i-1];
			else
			{
				return 0;
			}
		}
};

int main()
{
	dmatrix obj(5);
	for(int i = 1;i<6;i++)
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
