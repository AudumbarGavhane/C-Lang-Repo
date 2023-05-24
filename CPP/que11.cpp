/*11. Create cpp application for bank account handling.
11.1. Create a class BankAccount -- acct no(int),customer name(string),balance(double)
Add constr. (2 constrs : first to accept all details )
11.2 Add Business logic methods
Methods
public void withdraw(double amt) 
public void deposit(double amt)
11.3: Create object of account class and test withdraw and deposit methods.*/
#include <iostream>
#include <string>
using namespace std;

class BankAccount {
private:
    int acctNo;
    string custName;
    double balance;

public:
    // Constructors
    BankAccount() {
        acctNo = 0;
        custName = "";
        balance = 0.0;
    }

    BankAccount(int acct, string name, double bal) {
        acctNo = acct;
        custName = name;
        balance = bal;
    }

    // Business logic methods
    void withdraw(double amt) {
        if (amt > balance) {
            cout << "Insufficient balance." << endl;
        } else {
            balance -= amt;
            cout << "Withdrawal successful." << endl;
        }
    }

    void deposit(double amt) {
        balance += amt;
        cout << "Deposit successful." << endl;
    }
};

int main() {
    // Create an object of the BankAccount class using parameterized constructor
    BankAccount acct1(12345, "John Doe", 1000.0);

    // Test withdraw and deposit methods
    acct1.withdraw(500.0);
    acct1.deposit(1000.0);
    acct1.withdraw(2000.0);

    return 0;
}
