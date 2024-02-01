/* Write a c++ program to print factorial series using recursion*/

#include<iostream>
using namespace std;

class Fact 
{
	private:
		int n;
		int ans;
	
	public:
		
		Fact(int n)	
		{
			for(int i; i<0; i++)
			{
				if(n<=1)
				{
					cout <<n*(n-1) << endl;
				}
			}
		}
		
};

int main()
{
	Fact f(5);
}
