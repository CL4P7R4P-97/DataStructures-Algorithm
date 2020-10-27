//sparse matrix

#include<bits/stdc++.h>
using namespace std;
static int m=1;

struct elements
{
	int i;
	int j;
	int k;
};

struct sparse
{
	int r;
	int c;
	int num;
    struct elements *e;
};

void create(struct sparse *M, int r, int c, int num)
{
	
   
    cout<<"Enter for matrix: "<<m<<"\n";
    M->r = r;
    M->c = c;
    M->num = num;
   
    M->e = new struct elements[num+1];
    M->e[0].i = r;
    M->e[0].j = c;
    M->e[0].k = num;
    cout<<"enter matrix R, C, and element:\n";
   for(int i=1; i<num+1; i++)
   {
   	//cout<<"enter matrix R, C, and element:\n";
   	
   	cin>>M->e[i].i ;
   	cin>>M->e[i].j ;
   	cin>>M->e[i].k ;
   }
    m++;
	
}

void sumM(struct sparse *m1, struct sparse *m2, struct sparse *s)
{
	if(m1->r == m2->r && m1->c == m2->c)
	{

	s->c = m1->c;
	s->r = m1->r;
	s->num = m1->num + m2->num  ;// one column extra for r,c and n
	s->e = new struct elements[s->num+1];
	s->e[0].i = m1->r;
	s->e[0].j = m1->c;
	
	//cout<<s->num<<endl;
	int count = 0;
	int b=1,d = 1, c = 1;
	while( !(c== m1->num+1  && d == m2->num+1 ) )
	{
		if((m1->e[c].i < m2->e[d].i )||( m1->e[c].i > m2->e[d].i))
		{
			//cout<<"entered if"<<"\n";
		
		if(m1->e[c].i < m2->e[d].i  )
		{
		//	cout<<"if.1"<<"\n";
			s->e[b].i = m1->e[c].i;
			s->e[b].j = m1->e[c].j;
			s->e[b].k = m1->e[c].k;
		    //	cout<<s->e[b].i<<" "<<s->e[b].j<<" "<<s->e[b].k<<c+1<<" "<<d<<" \n";
			c++;
			b++;
			
			count++;
			
		}
		else
		{
				//cout<<"if.2"<<"\n";
			s->e[b].i = m2->e[d].i;
			s->e[b].j = m2->e[d].j;
			s->e[b].k = m2->e[d].k;
		    //cout<<s->e[b].i<<" "<<s->e[b].j<<" "<<s->e[b].k<<c<<" "<<d+1<<" \n";
			d++;
			b++;
				
			count++;
		}
	}
	else
	{
	//	cout<<"entered else"<<"\n";
		if(m1->e[c].i == m2->e[d].i)
		{
			
			if(m1->e[c].j < m2->e[d].j)
			{
				//	cout<<"else.1"<<"\n";
			s->e[b].i = m1->e[c].i;
			s->e[b].j = m1->e[c].j;
			s->e[b].k = m1->e[c].k;
	     	//cout<<s->e[b].i<<" "<<s->e[b].j<<" "<<s->e[b].k<<c+1<<" "<<d<<" \n";
			c++;
			b++;
				
			count++;
			}
			else if(m1->e[c].j > m2->e[d].j)
			{
				//	cout<<"else.2"<<"\n";
			
		    		s->e[b].i = m2->e[d].i;
		        	s->e[b].j = m2->e[d].j;
		        	s->e[b].k = m2->e[d].k;
		  	//cout<<s->e[b].i<<" "<<s->e[b].j<<" "<<s->e[b].k<<c<<" "<<d+1<<" \n";
			d++;
			b++;
				
			count++;
		   }
		   else
		   {
		   		//cout<<"else.3"<<"\n";
		   	    s->e[b].i = m2->e[d].i ;
		    	s->e[b].j = m2->e[d].j ;
		    	s->e[b].k = m2->e[d].k + m2->e[c].k;
		    	//cout<<s->e[b].i<<" "<<s->e[b].j<<" "<<s->e[b].k<<c+1<<" "<<d+1<<" \n";
		    	d++;
		    	c++;
		    	b++;
		    		
		    	count++;
		   }
		}
	}
	}
	s->e[0].k = count-1;
	cout<<"\n"<<count<<"\n";
	return;
}
else
cout<<"Not possible"<<"\n"; 

}

int main()
{
	struct sparse m1,m2,sss;
	create(&m1,3,3,3);
	create(&m2,3,3,3);
	sumM(&m1,&m2,&sss);
	for(int i = 1; i< sss.num+1 ; i++)
	{
		cout<<"("<<sss.e[i].i<<","<<sss.e[i].j<<") : "<<sss.e[i].k<<"\n";
	}
	
}
