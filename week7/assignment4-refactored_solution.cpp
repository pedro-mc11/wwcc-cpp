#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

class BankAccount {
private:
    string customerName;
    double balance;
    bool isOpen;
    int accountNumber;
    string accountType;
    // makes variables private instead of public

    static const double SAVINGS_INTEREST = 1.03;
    static const double CHECKING_INTEREST = 1.01;
    static const double BUSINESS_INTEREST = 1.005;
    // constants for the interest rate
public:
    BankAccount(string name, int number, string type) {
        customerName = name;
        accountNumber = number;
        accountType = type;
        balance = 0.0;
        isOpen = true;
    }
    // bank account constructor

    void setCustomerName(string name) {
        customerName = name;        // setter for customer name 
    }
    
    string getCustomerName() const { return customerName; }     // getter for customer name
    int getAccountNumber() const { return accountNumber; }    // getter for account number
    double getBalance() const { return balance; }    // getter for balance
    bool isAccountOpen() const { return isOpen; }    // getter for account status
    string getAccountType() const { return accountType; }    // getter for account type

    void deposit(double amount) {
        if (!isOpen) {
            cout << "Account is closed. Cannot deposit into closed account." << endl;
            return;
        }
        if (amount > 0) {
            balance += amount;
        } else {
            cout << "Invalid deposit amount." << endl;
        }
    }
    // deposit function with error checking

    void withdraw(double amount) {
        if (!isOpen) {
            cout << "Account is closed. Cannot withdraw from closed account." << endl;
            return;
        }
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        } else {
            cout << "Insufficient funds for withdrawal." << endl;
        }
    }
    // withdraw function with error checking

    void addInterest() {
        if (!isOpen) {
            cout << "Account is closed. No interest can be applied to a closed account" << endl;
            return;
        }

        if (accountType == "savings") {
            balance *= (SAVINGS_INTEREST);
        } else if (accountType == "checking") {
            balance *= (CHECKING_INTEREST);
        } else if (accountType == "business") {
            balance *= (BUSINESS_INTEREST);
        }
    }
    // adds interest based on the type of account you have

    void print() {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Customer Name: " << customerName << endl;
        cout << "Balance: $" << fixed << setprecision(2) << balance << endl;
        cout << "Account Type: " << accountType << endl;
        cout << "Status: " << (isOpen ? "Open" : "Closed") << endl;
    }
    // pritns info

    void closeAccount() {
        isOpen = false;
    }
    // closes account
};

int main() {
    // Create an account
    BankAccount account1("John Smith", 12345, "savings");

    // Perform operations
    account1.deposit(1000);
    account1.withdraw(250);
    account1.addInterest();

    // Display information
    account1.print();   

    // Close the account
    account1.closeAccount();

    return 0;
}
