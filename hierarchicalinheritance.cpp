#include<iostream>
usind namespace std;
class Person{                         //parent class
	public:
		string name;
		int age;
};
class Student: public Person{         //first child class inherited the parent class
	public:
		int roll_no;
};
class Teacher: public Person{         //second child class inherited the parent class
	public:
		string subject;
};
int main()
{
	Teacher T1;
	T1.name="Srushti";
	T1.subject="c++";
	cout<<T1.name<<endl;
	cout<<S1.subject<<endl;
	return 0;
}