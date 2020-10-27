//reversing string 

#include<bits/stdc++.h>

using namespace std;

int main()
{
	
	char str1[10] = "";
	gets(str1);
    int i=0,j=0,len=0;
    while(str1[i] != '\0')
    {
    	len++;
    	i++;
	}
	i=0;
	cout<<"length: "<<len<<"\n";
	char str2[len];
	for(int i=len-1,j=0;i>=0;i-- ,j++)
	{
		
		
			str2[j] = str1[i];
		
	}
	i=0,len=0;
	cout<<str2<<"\n";

//within one string
char str3[50] = "";
gets(str3);
while(str3[i] != '\0')
{
	len++;
	i++;
}
i=0;
cout<<"length: "<<len<<"\n";
char temp = ' ';
for(i,j=len-1; i<len/2; i++,j--)
{
	cout<<str3[i]<<": ";
	temp = str3[i];
	str3[i] = str3[j];
	str3[j] = temp;
}
	cout<<str3;
	
}
