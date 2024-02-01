/* Give an example which shows Expection handling of divison by zero expection*/

#include<iostream>
using namespace std;

int main() 
{
	int a,b;
	cout<< " Enter a :";
	cin>>a;
	cout<< " Enter b :";
	cin>>b;
	
	try
	{
		if(b==0)
		{
			throw b;
		}
		else
		{
			cout<<" divison of" << "and"<< b <<" : "<<a/b<< endl;
		}
	}
	catch(int n)
	{
		cout <<" this  can't be divided by"<< n << endl;
	}
}
 	
 
