//validating the sentenceing

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	char str[50] = " ";
	
	gets(str);
	int len  = 0, i=0;
	while(str[i] != '\0')
	{
		len++;
		i++;
	}
	cout<<len<<endl;
	i = 0;
for(i ; i<len;i++)
	{
		if(!(str[i] >=65 && str[i] <=90) && !(str[i] >=97 && str[i] <=122) && !(str[i] >=48 && str[i] <= 57))
		{
		cout<<"not valid";
		return 0;
	}
	}
	cout<<"Valid string ";
	
}
