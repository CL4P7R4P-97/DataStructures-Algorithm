//comparing and pallingdrome

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int k;
	char cc1[10] = ""; 
	char cc2[10] = "";
	char str[20] = "";
    gets(str);
    gets(cc1);
    gets(cc2);
    while(cc1[k] != '\0')
    { 
    
    	if(cc1[k] != cc2[k])
    	{
	    	if(cc1[k] > cc2[k])
	        	{
		
                	cout<<"Greater cc1"<<"\n";
                	break;
                }
         	else
          	{
		
             	cout<<"Lesser cc1"<<"\n";
             	break;
            }
            
            
    
     	}
     	
     	k++;
}

    int i=0,len=0,j=0;
    while(str[i] != '\0')
    {
    	len++;
    	i++;
	}
	cout<<len<<"\n";
	for(i=0,j= len-1; i<len/2;i++,j--)
	{
		if(str[i] != str[j])
		{
			
		
		cout<<"not pallindrome";
		return 0;
	}
	}
	cout<<"pallindrome";
}
