#include<iostream>
using namespace std;

class hotel
{
	int id;
	string name;
	 string type;
	int rate;
	string city;
	double establishyear;
	int staffquantity;
	int roomquantity;
	
	public:
		
		void setdata()
		{
			cout <<"enter id\t:";
			cin>>id;
			cout <<"enter name\t:";
			cin>>name;
			cout <<"enter rate\t:";
			cin>>rate;
			cout <<"enter city\t:";
			cin>>city;
			cout <<"enter establishyear\t:";
			cin>>establishyear;
			cout <<"enter staffquantity\t:";
			cin>>staffquantity;
			cout <<"enter roomquantity\t:";
			
		}
		
		void getdata()
		{
			cout<<"id\t"<<"name\t"<<"type\t"<<"rate\t"<<"city\t"<<"establishyear\t"<<"staffquantity\t"<<"roomquantity\t"<<endl;
			cout<<id<<"\t"<<name<<"\t"<<type<<"\t"<<rate<<"\t"<<city<<"\t"<<establishyear<<"\t"<<staffquantity<<"\t"<<roomquantity<<"\t"<<endl;
		}
};


int main()
{
	int n;
	
	cout <<"Enter number of hotel\t:";
	cin>>n;
	
	hotel h[n];
	
	for (int i=0;i<n;i++)
	{
		h[i].setdata();
		
		
	}
	for(int i=0;i<n;i++)
	{
		h[i].getdata();
	}
}

























