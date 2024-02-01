#include<iostream>
using namespace std;

class Admin
{
	protected:
		string company_name;
		int    manager_salary;
		int    employee_salary;
		int    total_staff;
		double total_annual_revenue;
		string can_terminate;
	public:
		
		void input()
		{
			cout <<"Company_name :";
			cin  >>company_name;
			cout <<"Manager_salary :";
			cin  >>manager_salary;
			cout <<"Employee_salary :";
			cin  >>employee_salary;
			cout <<"Total_staff :";
			cin  >>total_staff;
			cout <<"Total_annual_revenue :";
			cin  >>total_annual_revenue;
			cout <<"Can_terminate :";
			cin  >>can_terminate;
			
			 }
			 
			 void get_data()	 
			 {
			 	cout <<"company_name\t:"        << company_name         <<endl
			 		 <<"manager_salary\t:"      << manager_salary       <<endl
					 <<"employee_salary\t:"     << employee_salary      <<endl
					 <<"total_staff\t:"         << total_staff	        <<endl
					 <<"total_annual_revenue\t:"<< total_annual_revenue <<endl
					 <<"can_terminate\t:"		<< can_terminate        <<endl;  	
			 }
};

class Manager : protected Admin
{
	public:
		
		void get_manager()
		{
			cout    <<"manager_salary\t:"      << manager_salary        <<endl
					<<"employee_salary\t:"     << employee_salary       <<endl
					<<"total_staff\t:"         << total_staff	        <<endl;
		}
};

class Employee : public Manager
{
	public:
		
		void get_employee()
		{
			cout   	<<"employee_salary\t:"     << employee_salary       <<endl 
					<<"total_staff\t:"         << total_staff	        <<endl;
		}
	
};

int main()
{
	Admin    a;
	Employee e;
	Manager  m;
	
	a.input();
	e.get_employee();
	m.get_data();
}
