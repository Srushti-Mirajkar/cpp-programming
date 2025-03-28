#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter n:";
	cin>>n;
	for(int i=n;i<=n*10;i++)
	{
		if(i%n==0)
		cout<<i<<" ";
	}
	
}