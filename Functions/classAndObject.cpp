#include<bits/stdc++.h>
using namespace std;

template <class T>
class arithmetic
{
private:
	
	T a;
	T b;
	
	public:
		
		arithmetic()
		{
			a = b = 1;
		}
		arithmetic( T a, T b);
		T sum();
		
	};
	
	    template <class T>
		arithmetic<T>::arithmetic(T a, T b)
		{
			this->a = a;
			this->b = b;
		}
		template <class T>
		T arithmetic<T>:: sum()
		{
			T c = a+b;
			return c;
		}
	


int main()
{
	arithmetic<int> obj(20,32);
	cout<<obj.sum();
	
}
