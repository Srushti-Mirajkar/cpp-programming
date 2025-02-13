#include<iostream>
using namespace std;
class BankAccount{
	private:
	    string accountHolder;
    	int accountNumber;
    	string accountType;
	    double accountBalance;
	public:
		BankAccount()   //default constructor
		{
			accountHolder="";
			accountNumber=0;
			accountType="";
			accountBalance=0.0;
		}
		BankAccount(string name,int number,string type,double balance)  //parameterized constructor
		{
			this->accountHolder=name;
			this->accountNumber=number;
			this->accountType=type;
			this->accountBalance=balance;
		}
		//getter
	    string getAccountHolder()
	    {
		  return accountHolder;
	    }
	    int getAccountNumber()
	    {
		  return accountNumber;
	    }
	    string getAccountType()
	    {
	    	return accountType;
		}
		double getAccountBalance()
		{
			return accountBalance;
		}
		//setter
		void setAccountHolder(string name)
		{
			this->accountHolder=name;
		}
	    void setAccountNumber(int number)
	    {
	    	this->accountNumber=number;
		}
		void setAccountType(string type)
		{
	    	this->accountType=type;	
		}
		void setAccountBalance(double balance)
		{
				this->accountBalance=balance;
		}
		// Additional function methods
		int setDeposite(double amount)
		{
			accountBalance+=amount;
			cout<<"Deposite amount : Rs."<<amount<<endl;
			cout<<"Total balance : Rs."<<accountBalance<<endl;
		}
		int setWithdraw(double amount)
		{
			if(accountBalance>amount)
			{
			  accountBalance-=amount;
			  cout<<"withdraw amount is : Rs."<<amount<<endl;
			  cout<<"Total balance is : Rs."<<accountBalance<<endl;
		    }
		    else
		    {
		    	cout<<"this is not sufficient amount to withdraw"<<endl;
		    	cout<<"total balance is Rs."<<accountBalance<<endl;
			}
		}
		int getAccountDetails()
		{
			cout<<"Account Details :"<<endl;
			cout<<"Account Holder : "<<accountHolder<<endl;
			cout<<"Account Number : "<<accountNumber<<endl;
			cout<<"Account Type : "<<accountType<<endl;
			cout<<"Account Balance : "<<accountBalance<<endl;
		}		
};
int main()
{
	BankAccount account("ABC",2204,"saving",200);
	account.getAccountDetails();
	account.setDeposite(200);
	account.setWithdraw(100);

	
	
}