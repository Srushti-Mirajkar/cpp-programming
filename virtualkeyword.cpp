#include<iostream>
using namespace std;
class Base{
	public:
		virtual void print()
		{
			cout<<"This is the base class print function"<<endl;
		}
			void display()
			{
				cout<<"This is the  base class display function"<<endl;
			}	
};
class Derived{
	public:
		virtual void print()
		{
			cout<<"This is the derived class print function"<<endl;
		}
			void display()
			{
				cout<<"This is the derived class display function"<<endl;
			}	
};
int main()
{
	Base*Baseptr;
	Derived d;
	Baseptr=&d;
	Baseptr->print();
	Baseptr->display();
	return 0;
}