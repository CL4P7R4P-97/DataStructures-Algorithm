//total substrings
#include<bits/stdc++.h>
using namespace std;


void perm(char *p, int k)
{
	
	static int flag[10] = {0};
	static char temp[10] = "";
	int i = 0;
	static int c = 0;
	if(p[k] == '\0')
	{
		c++;
		temp[k] = '\0';
		cout<<c<<": "<<temp<<"\n";
		return;
	}
	
	else
	{
		
	
	
	while( p[i] != '\0')
	{
	//	cout<<i<<" "<<k<<endl;
		if(flag[i] == 0)
		{
			
			temp[k] = p[i];
			flag[i] = 1;
			perm(p,k+1);
			flag[i] = 0;
		}
		i++;
	}
}
	
}

int main()
{
	char str[10]  = "";
	gets(str);
	int i=0,len=0;
	while( str[i] != '\0')
	{
		len++;
		i++;
	}
	cout<<"length: "<<len<<endl;
	perm(str,0);
}
