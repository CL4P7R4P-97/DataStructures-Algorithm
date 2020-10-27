#include<bits/stdc++.h>

using namespace std;

struct Two
{
	int aa;
	int bb;
};

struct rectangle 
{
	int length;
	int breadth;
	int arr[5];
};

struct Two sumAndArea(struct rectangle r1)
{
	struct Two obj;
    for(int i = 0;i<5; i++)
    {
    	obj.bb =  obj.bb + r1.arr[i];
	}
	obj.aa = r1.length * r1.breadth;
	return obj;
}

int main()
{
	struct rectangle r = {23,21,{2,3,4,5,32} };
    struct Two obj1;
    obj1 = sumAndArea(r);
	cout<<obj1.aa<<" "<<obj1.bb;
}


