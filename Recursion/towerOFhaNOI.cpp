//tower of hanoi
#include<bits/stdc++.h>

using namespace std;

void TOH(int n, int a, int b, int c)
{
	if(n>0)
	{
		TOH(n-1,a,c,b);
		cout<<"moving disk from "<<a<<" "<<c<<"\n";
		TOH(n-1,b,a,c);
	}
}

int main()
{
	int discs;
	cin>>discs;
	TOH(discs,1,2,3);
}
