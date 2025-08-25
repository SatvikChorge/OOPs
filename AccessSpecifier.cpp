#include <iostream>
#include <string>
using namespace std;

class BankAccount{
    private:
    int accountNumber;
    float balance;

    protected:
    string accountType;

    public:
    string name;

    BankAccount(string n, int no, string type, double b) {
        name = n;
        accountNumber = no;
        accountType = type;
        balance = b;
    }

    void deposit (float amount) {
        balance += amount;
        cout << "Deposit : " << amount << endl;
    }

    void withdraw(float amount) {
        if (amount <= balance) {
            balance -= amount;
            cout << "Withdrawal : " << amount << endl;
        }
        else {
            cout << "Insufficient balance : " << endl;
        }
    }

    void displayDetails() {
        cout << "Account Holder Name : " << name << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Account Type : " << accountType << endl;
        cout << "Balance : " << balance << endl;
    }
};

int main () {
    BankAccount account("Satvik Chorge", 67123, "Savings", 9676767.0);

    account.displayDetails();
    account.deposit(6706.0);
    account.withdraw(670);
    
    return 0;
}
 