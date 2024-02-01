#include <iostream>
using namespace std;

class diamond 
{
	private:
		int id;
		string name;
		int staff_quantity;
		int revenue;
		int import_raw_diamond;
		int export_raw_diamond;
		string ceo;
		
	public:
		void setdata()
		{
			cout <<"Enter id\t:";
			cin >>id;
			cout <<"Enter name\t:";
			cin >>name;
			cout <<"Enter staff_quantity\t:";
			cin >>staff_quantity;
			cout <<"Enter revenue\t:";
			cin >>revenue;
			cout <<"Enter import_raw_diamond\t:";
			cin>> import_raw _diamond;
			cout <<"Enter export_raw_diamond\t:";
			cin >>export_raw_diamond;
			cout <<"ceo\t:";
			cin >>ceo;
		}
		void getdata()
		{
			cout <<"Id" << id << endl
				 <<"Name" << name <<endl
				 <<"Staff_Quantity" << staff_quantity <<endl
				 <<"Revenue" <<revenue <<endl
				 <<"Import_raw_diamond" << import_raw_diamond <<endl
				 <<"Export_raw_diamond" << export_raw_diamond <<endl
				 <<"Ceo" << ceo << endl;
		}
};

int main()
{
	diamond C;
	
	C.setdata();
	C.getdata();
}









