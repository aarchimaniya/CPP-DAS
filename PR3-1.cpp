#include<iostream>
using namespace std;

class value
{
	protected:
		
		int a;
		public:
			void setdata()
			{
				cout<<"enter a:";
				cin >>a;
				
			}
};

class square1 : public value
{
	public:
		void square()
		{
			cout <<"square of a\t:"
					<<(a*a)<<endl;
		}
};

class cube1: public value
{
	public:
		void cube()
		{
			cout <<"cube of a\t:"
			     <<(a*a*a)<<endl;
			
		}
};

int main()
{
	square1 S;
	S.setdata();
	S.square();
	
	cube1 C;
	C.setdata();
	C.cube();
}

