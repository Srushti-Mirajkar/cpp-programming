#include <iostream>
#include <string>
using namespace std;


class Bank {
public:
    
    void deposit(int amount) {
        cout << "Depositing ?" << amount << " in cash." << endl;
    }

 
    void deposit(float amount) {
        cout << "Depositing " << amount << " via digital payment." << endl;
    }

    
    void deposit(const string& upi_id) {
        cout << "Depositing " << upi_id<< " using UPI"  << upi_id  << endl;
    }
};

class Account {
private:
    int account_number;
    float balance;

public:
    
    Account(int account_number, float balance) {
        this->account_number = account_number;
        this->balance = balance;
    }

    
    void display_account() const {
        cout << "Account " << account_number << " Balance: ?" << balance << endl;
    }

    
    void operator+(Account& other) {
        float transfer_amount;
        cout << "Enter amount to transfer from Account " << account_number << " to Account " << other.account_number << ": ?";
        cin >> transfer_amount;

        if (balance >= transfer_amount) {
            balance -= transfer_amount;
            other.balance += transfer_amount;
            cout << "Transferring" << transfer_amount << " from Account " << account_number << " to Account " << other.account_number << "..." << endl;
            cout << "New Account " << account_number << " Balance: " << balance << endl;
            cout << "New Account " << other.account_number << " Balance: " << other.balance << endl;
        } else {
            cout << "Insufficient balance in Account " << account_number << "!" << endl;
        }
    }

    
    void operator-(float withdraw_amount) {
        if (balance >= withdraw_amount) {
            balance -= withdraw_amount;
            cout << "Withdrawing " << withdraw_amount << " from Account " << account_number << "..." << endl;
            cout << "Remaining Balance: " << balance << endl;
        } else {
            cout << "Insufficient funds in Account " << account_number << "!" << endl;
        }
    }
};

int main() {
    
    Bank bank;

    bank.deposit(5000);        
    bank.deposit(1500.75f);    
    bank.deposit("2500@gpay"); 

    
    Account account1(1, 10000);
    Account account2(2, 5000);

    account1.display_account();
    account2.display_account();

    account1 + account2;  
    account1 - 2000;     

    return 0;
}

