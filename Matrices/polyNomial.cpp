//Polynomial representation

#include <bits/stdc++.h>
static int countt = 0;
using namespace std;

struct terms
{
	int coeff;
	int expo;
};

struct polynomial
{
	int n;
	struct terms *t;
};

void create(struct polynomial *p, int num)
{
	static int c=1;
	p->n = num;
	p->t = new struct terms[num];
	cout<<"Enter equation "<<c<<": coeff expo "<<"\n";
	c++;
	for(int i = 0; i< p->n; i++)
	{
		cin>>p->t[i].coeff>>p->t[i].expo;
	}
	cout<<"created successfully!"<<"\n\n";
}

void addition(struct polynomial *p1, struct polynomial *p2, struct polynomial *s)
{


	s->n = p1->n + p2->n;
	s->t = new terms[s->n];
	int k = 0,i=0,j=0;
	while( !(i == p1->n && j == p2->n))
	{
	
		if(p1->t[i].expo == p2->t[j].expo)
		{
			//cout<<"if"<<"\n";
			s->t[k].coeff = p1->t[i].coeff + p2->t[j].coeff;
			s->t[k].expo = p1->t[i].expo;
		//	cout<<s->t[k].expo<<"\n";
			k++;
			i++;
			j++;
			countt++;
		}
		else
		{
		//	cout<<"else"<<"\n";
			if(p1->t[i].expo > p2->t[j].expo)
			{
				//cout<<"else 1."<<"\n";
			s->t[k].coeff = p1->t[i].coeff ;
			s->t[k].expo = p1->t[i].expo;
		//	cout<<s->t[k].expo<<"\n";
			k++;
			i++;
			countt++;
				
			}
			else
			{
				
			    if(p1->t[i].expo < p2->t[j].expo)
		      	{
		      		//cout<<"else 2."<<"\n";
		           	s->t[k].coeff = p2->t[j].coeff ;
		         	s->t[k].expo = p2->t[j].expo;
		         //	cout<<s->t[k].expo<<"\n";
		         	k++;
					j++; 
					countt++; 
		    	}
		    }
     	}
	}
}

	void print(struct polynomial *ff)
	{
		for(int i = 0; i<countt; i++)
		{
			cout<<ff->t[i].coeff<<"x"<<ff->t[i].expo<<" ";
		}
	}

int main()
{
	struct polynomial p1,p2,sum;
	create(&p1,4);
	create(&p2,5);
	addition(&p1,&p2,&sum);
	print(&sum);
}
