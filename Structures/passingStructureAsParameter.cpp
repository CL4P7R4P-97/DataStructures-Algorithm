#include<bits/stdc++.h>
using namespace std;

struct rectangle
{
	int length;
	int breadth;
};


/*int area(struct rectangle r1)
{
	return(r1.length * r1.breadth); // activation of function area with variables r1 having variables l & b.
}

int main()
{
	struct rectangle r = {10,3};
   cout<< area(r);                 // call by value
    
}*/




// Passing structure as parameter using call by address.

/*int area(struct rectangle *p)
{
	return(p->breadth*p->length);   // only pointer p is created in activated function area() pointing to the r in main()
}
int main()
{
	struct rectangle r  = {23,53};
	cout<<area(&r);                 // call by Address

}*/

int area(struct rectangle &r1)
{
	return(r1.breadth * r1.length);  // r1 is alias name of r in main() we can directly access main() variables.
	
}
int main()
{
	struct rectangle r = {234,221};
	cout<<area(r);                  // call by reference
}
