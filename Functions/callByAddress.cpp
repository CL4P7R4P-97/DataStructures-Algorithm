#include<bits/stdc++.h>
using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int x= 20,y = 30;
	swap(&x,&y);
	cout<<x<<" "<<y;
}
