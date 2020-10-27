//duplicates with bit manipulation

#include<bits/stdc++.h>
using namespace std;

int main()
{
	int h=0,x=0;

	char str[10] = "";
	gets(str);
	int len=0,i=0,dup= 0;


	while(str[i] != '\0')
	{
		len++;
		i++;
	}

	i=0;
	while(str[i] != '\0')
	{
		
	     	x=1;
	        if(str[i]>=97 && str[i] <= 122)
		    {
		    	 //   cout<<str[i]-97<<"\n";
		    	 
		    		x = x<<(str[i]-97);
		    	//	cout<<x<<endl;
		    		if((h & x )> 0)
	               	{
	                  	 // cout<<"mask"<<endl;
	              	  dup++;
		  	
	             	}
	            	else
	            	{
		
	                	h = h|x ;
                   	//	cout<<"merge: ";
                 	//	cout<<h<<endl;
	             	}
	             
        	}
        		i++;
	}
		    
		
	
	cout<<dup;
}
