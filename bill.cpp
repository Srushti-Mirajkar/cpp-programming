#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	string name;
	string items[3]={"rice","oil","soap"};
	int price[3]={60,1240,40};
	int total=0,i;
	cout<<"Enter the customer name:";
	cin>>name;
	cout<<"\n*********************BILL*******************\n";
	cout<<left<<"items"<<"\t"<<right<<"price"<<endl;
	for(i=0;i<3;i++)
	{
		cout<<left<<items[i]<<"\t"<<right<<setw(4)<<setfill('0')<<price[i]<<endl;
		total=total+price[i];
	}
	cout<<"----------------------\n";
    cout<<right<<"total"<<right<<"\t"<<total;
	return 0;	
}
