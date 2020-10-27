#include<stdio.h>
#include<bits/stdc++.h>

using namespace std;

struct rectangle
{
    int length;
    int breadth;
};

int main()
{
	//creating structure in stack as normal declaration
	
    struct rectangle r;
    r.breadth = 10;
    r.length = 20;

    struct rectangle s = {10,35};
    cout<<s.length<<endl;
    cout<<s.breadth<<endl;
    
    // Pointer pointing to the dynamically allocted structure.
    
    struct rectangle *pp;
    pp = (struct rectangle*)malloc(sizeof(struct rectangle));
    (*pp).length = 10;
    (*pp).breadth = 20;
    cout<<pp->breadth<<" ";
    cout<<pp->length<<endl;
}
