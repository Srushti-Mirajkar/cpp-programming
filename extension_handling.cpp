#include <iostream>
#include <stdexcept>
using namespace std;

class BankAccount {
private:
	string ownerName;
    double balance;

public:
    BankAccount(string name,double balance):ownerName(name),balance(balance){
			cout<<"account created for "<<ownerName<<" with balance "<<balance<<endl;
		}
    void deposit(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Invalid deposit amount.");
        }
        balance += amount;
        cout<<"deposited ammount "<<amount<<" =>New Balance : "<<balance<<endl;
    }

    void withdraw(double amount) {
        if (amount <= 0) {
            throw invalid_argument("Invalid withdrawal amount.");
        }
        if (amount > balance) {
        	cout<<"WithDrawn : "<<amount;
            throw runtime_error("Insufficient balance.");
        }
        balance -= amount;
        cout<<"WithDrawn "<<amount<<" => New Balance : "<<balance<<endl;
    }

    double getBalance() const {
        return balance;
    }
};


int main() {
    BankAccount account("Sakshi",1000.0);

    try {
        account.deposit(500.0);
        //cout << "Balance: " << account.getBalance() << endl;

        account.withdraw(200.0);
        //cout << "Balance: " << account.getBalance() << endl;

        account.withdraw(1500.0); // Insufficient balance
    } catch (const exception& e) {
        cout << " => Error: " << e.what() <<endl;
    }

    return 0;
}

