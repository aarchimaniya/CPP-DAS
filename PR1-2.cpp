#include<iostream>
using namespace std;

int main()
{
	int s;
	int sec,min,hr;
	cout<<"Enter the second: "<<endl;
	cin>>s;
	
	hr = s/3600;
	sec = s%60; s=s%3600;
	min = s%60;
	
	cout<<"time: "<<hr<<":"<<min<<":"<<sec;
	
}
