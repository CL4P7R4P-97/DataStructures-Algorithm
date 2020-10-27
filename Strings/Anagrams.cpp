//finding whether two string are anagram or/not

#include<bits/stdc++.h>

using namespace std;

int main()
{
	int i=0,len1=0,len2=0;
	int H[128] = {0};
	char str1[10] = "";
	char str2[10] = "";
	gets(str1);
	gets(str2);
	while(str1[i] != '\0' )
	{
		i++;
		len1++;
	}
	i=0;
	while(str2[i] != '\0' )
	{
		i++;
		len2++;
	}
	i=0;
	if(len1 != len2)
	{
	cout<<"Not anagrams"<<"\n"; return 0;
    } 
	else
	{
		while(str1[i] != '\0')
		{
			if(str1[i] != 32)
			++H[(int)str1[i]];
			i++;
		}
		    i=0;
		
		while(str2[i] != '\0')
		{
			int d;
	    	d = 	--H[(int)str2[i]];
	    	if(d<0)
	    	{
		
	        	cout<<"Not anagrams"<<"\n";
	        	return 0;
        	}
        	i++;
		}
		
		cout<<"Anagrams";
		 return 0;
	}
}
