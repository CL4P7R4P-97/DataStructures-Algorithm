//duplicates in string

#include<bits/stdc++.h>

using namespace std;

int main()
{
//O[n2] method

/*

	char str[10] = "";
	gets(str);
	int i=0,length = 0,count = 0;
	while( str[i] != '\0')
	{
		length++;
		i++;
	}
	for(int i=0;i<length;i++)
	{
		for(int j = i+1; j<length; j++)
		{
			if(str[i] == str[j])
			{
				count++;
			}
		}
	}
	cout<<"no of duplicates: "<<count;
	*/
	
	//With hash table
	int arr[127] = {0};
	char str[10] = "";
	gets(str);
	int i= 0,len = 0;
	while( str[i] != '\0')
	{
		len++;
		i++;
	}
	int dup=0,d=0;
	for(int i = 0; i<len; i++)
	{
		if(str[i] != 32)
	 {
	 
	   d = ++arr[(int)str[i]];
	   if(d>1)
	   dup++;
     }
	}
//	int sum = 0;
//	for(int i = 0;i<127; i++)
//	{
//		if(arr[i] >1)
//		sum += arr[i];
//	}
//	cout<<sum<<endl;
cout<<dup<<endl;
	
	
}
