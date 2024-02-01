#include<iostream>
using namespace std;

class shape
{
	protected:
		double width;
		double height;
		
	public:
		shape()	
		{
			cout<<"Enter width\t:";
			cin>>width;
			cout<<"Enter height\t:";
			cin>>height;
		}
};

class triangle : public shape
{
	double Triangle;
	public:
		
		void tri_area()
		{
			triangle= (0.5)*(width*height);
			cout<<"area of triangle\t:"<<triangle<<endl;
		}
};

class rectangle : public shape
{
	double rectangle;
	public:
		void rec_area()
		{
			Rectangle = height*width;
			cout<<"area of rectangle\t:"Rectangle<<endl;
		}
};

int main()
{
	triangle t;
	t.tri_area();
	
	rectangle r;
	r.rec_area();
}






