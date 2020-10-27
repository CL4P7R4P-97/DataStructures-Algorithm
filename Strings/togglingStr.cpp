//changing cases of string

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int i = 0, len = 0;
	char str[10];
	cin>>str;

	while(str[i] != '\0')
	{
		i++;
		len++;
	}
	for(int i=0; i<len; i++)
	{
		if(str[i] >= 65 && str[i] <=90)
		{
			str[i] = str[i] + 32;
		}
		else
		if(str[i] >=97 && str[i] <=122)
		{
			str[i] = str[i] -32;
		}
	}
	cout<<str;
	
	
}
