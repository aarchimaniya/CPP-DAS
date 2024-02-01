#include<iostream>
using namespace std;

class x
{
	protected:
		
		int a;
		int b;
		int c;
		int sum=0;
		
};

class y : protected x
{
	public:
	void setdata()
	{
		cout<<"enter a:";
		cin>>a;
		cout<<"enter b:";
		cin>>b;
		cout<<"enter c";
		cin>>c;
	}
	
	void getdata()
	{
		sum=(a*a*a)+(b*b*b)+(c*c*c);
		cout<<"sum:"<<sum;
	}
};

int main()
{
	y u1;
	
	u1.setdata();
	u1.getdata();
	
	
	

	
	
}
