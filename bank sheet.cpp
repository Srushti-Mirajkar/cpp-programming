#include<iostream>
using namespace std;

int main()
{
    int balance=2000;
    int choice,amount,n;
    string name;
    
   do{
    cout<<"\nBANK MENU"<<endl;
    cout<<"----------------"<<endl;
    cout<<"Create your account"<<endl;
    cout<<"Enter account holder name:"<<endl;
    cin>>name;
    cout<<"Enter your account number:"<<endl;
    cin>>n;
    cout<<"Your account is created succesfully....!"<<endl;
    cout<<"1.Check Balance"<<endl;
    cout<<"2.Deposit"<<endl;
    cout<<"3.Withdraw"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
		cout<<"Balance:"<<balance<<endl;
		break;
		
        case 2:
        cout<<"Enter deposit amount:";
        cin>>amount;
        balance=balance+amount;
        cout<<"Deposit successful !"<<endl;
        cout<<"New Balance = "<<balance<<endl;
        break;

        case 3:
        cout<<"Enter withdrawal amount:";
        cin>>amount;
        if(balance>=amount)
        {
            balance=balance-amount;
        cout<<"Withdrawal successful !"<<endl;
        cout<<"New Balance = "<<balance<<endl;
        }
        else
        {
            cout<<"Insufficient balance!"<<endl;
        }
        break;
    
        case 4:
        cout<<"Exit......"<<endl;
        break;
    default:
        {
         cout<<"lnvalid choice!"<<"\n"<<"Please try again later."<<endl;
           }
    }
   
}
while(choice!=4);
   return 0;
}
