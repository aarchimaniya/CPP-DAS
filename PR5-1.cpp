#include<iostream>
using namespace std;

class divison
{
	int a,b;
	
	public:
		void set_data()
		{
			cout<<"Enter a : ";
			cin>>a;
			cout<<"Enter b : ";
			cin>>b;
		}
		void get_data()
		{
			try
			{
				if(b==0)
				{
					throw 0;
				}
				else
				{
					cout<<"divison :"<<a/b<<endl;
				}
			}
			catch(int c)
			{
				cout<<"can't divided by"<<c<<endl;
			}
			catch(...)
			{
				cout <<" general exception";
			}
		}
};

int main()
{
	divison d;
	
	d.set_data();
	d.get_data();
}
