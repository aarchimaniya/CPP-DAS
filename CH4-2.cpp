#include<iostream>
using namespace std;

class P
{
	protected:
		double t;
		double f;
		double k;
		
	public:
		void setdata()
		{
			cout<<"Entr tempreature :";
			cin>>t;
		}
		
};

class R : public q
{
	public:
		void getk()
		{
			k=t+273.15;
	        cout <<"Kelvin:"<<k;
		}
};

int main()
{
	R r1;
	r1.setdata();
	r1.getk();
	r1.getk();
}
