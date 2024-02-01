#include<iostream>
using namespace std;

class Num
{
	private:
		int a;
	public:
	void setdata()	
	{
		cout<<"Enter a:";
		cin>>a;
		
	}
	Num operator<(Num b)
	{
		Num tmp;
		
		if(a<b.a)
		{
			cout<<"Second is big:";
		}
		else
		{
			cout<<"first is big:";
		}
		return tmp;
	}
	void getdata()
	{
		
	}
};

int main()
{
	Num n1,n2,n3;
	
	n1.setdata();
	n2.setdata();
	
	n3 = n1<n2;
	
	n1.getdata();
	n2.getdata();
	n3.getdata();
	
}
