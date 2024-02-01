#include<iostream>
using namespace std;

class supermarket
{
	public:
		int id = 101;
		string pass = "aarchi@107";
		
	void verifiy()
	{
		cout <<"Enter id";
		cin  >>id;
		
		cout <<"Enter pass";
		cin  >>pass;	
	}
	private:
		int number;
		string name;
		int quantity;
		int price;
		int discount;
		
	public:
	
		void setdata()	
		{
			cout <<"enter number\t:";
			cin >>number;
			cout <<"enter name\t:";
			cin >>name;
			cout <<"enter quantity\t:";
			cin >>quantity;
			cout <<"enter price\t:";
			cin >>price;
			cout <<"discount\t:";
			cin >>discount;
		}
		void getdata()
		{
				cout  <<"Item_number"<<number<<endl
					  <<"Item_name"<<name<<endl
					  <<"quantity"<<quantity<<endl
					  <<"price"<<price<<endl
					  <<"quantity"<<quantity<<endl;
		}
};

int main()
{
	supermarket s;
	s.verifiy();
	s.setdata();
	s.getdata();
}




















