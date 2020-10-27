//counting words and vowels

#include<bits/stdc++.h>

using namespace std;

int main()
{
	char str[] = "";
	gets(str);
	int i=0,len=0,vcount=0,wcount = 0;
	while(str[i] != '\0')
	{
		len++;
		i++;
	}
	cout<<len<<"\n";

	
	for( i = 0;i<len;i++)
	{
	
		if(str[i] == 'a'||str[i] == 'e'||str[i] == 'i'||str[i] == 'o'||str[i] == 'u')
		{
			vcount++;
			
		}
		if(str[i] == 32)
		wcount++;
		
	}
	cout<<"Vowels: "<<vcount<<"\n"<<"Words: "<<wcount+1;
	
}
