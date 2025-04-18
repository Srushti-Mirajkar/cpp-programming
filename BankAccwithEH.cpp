#include<iostream>
#include<string>
using namespace std;
class BankAccount {
	private:
		string holder_name;
		double ini_balance;
		int amount;
		public:
			BankAccount(string name,double balance)try:holder_name(name),ini_balance(balance)
	        {
				cout<<"enter the account holder name:"<<endl;
				cin>>holder_name;
				cout<<"enter the initial balance:"<<endl;
				cin>>ini_balance;
				if(ini_balance<0)
					{
					throw(ini_balance);
			    	}
	     	}
			        catch(double amt)
					{
					cout<<	"Exception: Amount should be positive "<<endl;
                    }
			
			
				void deposite(double amount)
				{
					ini_balance+=amount;
			    	cout<<"deposite amount:"<<amount<<endl;
					cout<<"Total balance:"<<ini_balance<<endl;
				
				}
				//	if(amount<0)
				//	{
				//	throw(amount);
			    //	}
			     //   catch(int amt)
				//	{
				//	cout<<	"Exception: Amount should be positive "<<end;
                 //   }
			    void withdraw(double amount)
				{
					if(ini_balance>amount)
					{
						ini_balance-=amount;
					cout<<"withdrawal amount:"<<endl;
					cout<<"Total balance:"<<ini_balance<<endl;
					}
					else
					{
						cout<<"insufficient balance to withdraw"<<endl;
						cout<<"Total balance:"<<ini_balance<<endl;
					}
		    	} 
 };
 int main(){
 	BankAccount A1("abc",2000);
 	A1.deposite(200);
 	A1.withdraw(4000);
 }
			    	
			    	
				
