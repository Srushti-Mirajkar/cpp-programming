#include<iostream>
using namespace std;
class Rectangle
{
	int base;
	int height;
	int circumference;
	int area;
friend void getRect();
public:
Rectangle(int b,int h)
{
	base=b;
	height=h;
}

public:
void getRect()
{
	circumference=2*base*height;
	area=base*height;
	//cout<<"circumference"<<circumference<<endl;
	//cout<<"area"<<area<<endl;
	cout<<circumference<<endl;
	cout<<area<<endl;
}
};

int main()
{
Rectangle rt(2,3);
rt.getRect();
}



