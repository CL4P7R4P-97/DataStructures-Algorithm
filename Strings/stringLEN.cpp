//finding the length of the string

#include<bits/stdc++.h>

using namespace std;

int main()
{
	//declaration with automatically null character
	char abc[] = "hello" ;
	char *pqr = "toster";
	//explicitly adding null character
	char klm[6] = {'n','u','l','l'};
	char xyz[5] = {'w','i','t','h'};
	
	int len,i=0;
	cout<<"finding length with implicit null character: ";
	while(abc[i] != '\0')
	{
		len++;
		i++;
	}
	cout<<len<<"\n";
	len = 0,i=0;
	cout<<"finding the length of exlicit null character string: ";
	while(klm[i] != '\0')
	{
		len++;
		i++;
	}
	cout<<len;
	
}
