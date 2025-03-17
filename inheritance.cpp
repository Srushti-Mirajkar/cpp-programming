#include<iostream>
using namespace std;
class Student
{
public:
	string name_student;
	int roll_no,age;
public:
	void getstudent()
	{
	cout<<"enter the name of the student"<<endl;
	cin>>name_student;
	cout<<"enter the roll no of the student"<<endl;
	cin>>roll_no;
	cout<<"enter the age of the student"<<endl;
	cin>>age;
	}

};
class Person:public Student
{
public:
	string name_person;
	int sallary;
public:
         void getperson()
          {
         cout<<"enter the name of the person"<<endl;
        cin>>name_person;
	cout<<"enter the sallary of the person"<<endl;
	cin>>sallary;
	}
public:void showperson()
	{
	cout<<"Name of student :"<<name_student<<"\t"<<"Roll no is:"<<roll_no<<"\t"<<"Age 		   is:"<<age<<"Name of person is: "<<name_person<<"\t"<<"Sallary is:"<<sallary<<endl; 
       }
};
int main()
	{

	Person p;
	p.getstudent();
	p.getperson();
	p.showperson();
	return 0;
	}







