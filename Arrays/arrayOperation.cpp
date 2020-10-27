//Operation on array
#include<bits/stdc++.h>
using namespace std;

class arrayOperation
{
	private:
		int A[10] ;
	    int length;
	public:
		void addelements()
		{
			int count = 0;
			for(int i = 0;i<6;i++)
			{
			   cin>>A[i];
			   count++;
			}
			length = count;
			display();
			
		}
		
		void display()
		{
			for(int i =0;i<length;i++)
			{
				cout<<A[i]<<" ";
			}
			cout<<"\n";
		}
		void append(int x)
		{
			A[length] = x;
			length++;
			display();
			
		}
		void insert(int index, int element)
		{
			for(int i=length; i>index; i--)
			{
				A[i+1] = A[i];
			}
			A[index] = element;
			length++;
			display();
		}
		
		void Delete(int index)
		{
			for(int i =index; i<length-1; i++)
			{
				A[i] = A[i+1];
			}
			length--;
			display();
		}
		void search(int x)
		{
				int flag = 0;
			for(int i = 0;i<length; i++)
			{
			
				if(A[i] == x)
				{
					cout<<"found!"<<"\n";
					flag = 1;
					break;
				}
				
			}
			if(flag ==0)
				cout<<"not found :("<<"\n";
			
		}
		void maxNmin()
		{
			int max = A[0];
			int min = A[0];
			for(int i=1; i<length; i++)
			{
				if(max < A[i])
				max = A[i];
				if(min > A[i])
				min = A[i];
			}
			cout<<"max is :"<<max<<"\n";
			cout<<"min is :"<<min<<"\n";
		}
		void reverse()
		{
			if(length % 2 !=0)
			{
				for(int i=0, j=1; i<length/2; i++,j++)
				{
					int temp;
					temp = A[i];
					A[i] = A[length-j];
					A[length-j] = temp;
				}
				
			}
			else
			{
				for(int i=0, j=1; i<length/2; i++,j++)
				{
						int temp;
					temp = A[i];
					A[i] = A[length-j];
					A[length-j] = temp;
					
				}
			}
			display();
		}
		void get(int index)
		{
			if(index >=0 && index < length)
			cout<<"so value is: "<<A[index]<<"\n";
			
		}
		void set(int index, int value)
		{
			if(index >=0 && index < length)
			{
				A[index] = value;
			}
			display();
		}
		void average()
		{
			int sum = 0;
			for(int  i = 0; i<length; i++)
			{
				sum += sum+A[i];
			}
			cout<<"The average is: "<<sum/length<<"\n";
		}
		
};


int main()
{
	arrayOperation obj;
	obj.addelements();
    obj.get(5);
    obj.set(6,191);
	obj.append(99);
    obj.average();
	obj.insert(4,20);

	obj.Delete(3);

	obj.search(99);
	obj.search(100);
	obj.maxNmin();
	obj.reverse();
	
	
}
