#include<iostream>
using namespace std;

class distanc
{
	private:
		int km;
		int meter;
	
	public:
		void set_data()	
		{
			cout<<"Enter km:";
			cin>>km;
			cout<<"Enter meter:";
			cin>>meter;
		}
		distanc operator +(distanc a)	
		{
			distanc b;
			
			b.km = km + a.km;
			b.meter = meter + a.meter;
			
			while(b.meter>1000)
			{
				b.km = b.km + 1;
				b.meter = b.meter - 1000;
			}
			
			return b;
		}
		void getdata()
		{
			cout<<"km : "<<km<<endl
				<<"meter :"<<meter<<endl;
		}
		
};

int main()
{
	distanc d1,d2,d3;
	
	d1.set_data();
	d2.set_data();
	
	d3 = d1+ d2;
	
	d3.getdata();
}
