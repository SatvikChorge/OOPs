#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
    int accountNumber;
    float balance;

    public:
    BankAccount(int aN, float b) {
        accountNumber = aN;
        balance = b;
        cout << "Your Account has been created" << endl;
    }

    void deposit(int amount) {
        balance += amount;
        cout << "Your deposit = " << amount << endl;
    }

    void withdraw (int amount) {
        if(amount <= balance) {
            balance -= amount;
            cout << "Your Withdrawal = " << amount << endl;
        }
        else {
            cout << "Insufficient balance to withdraw" << endl;
        }
    }

    void displayBalance() {
        cout << "Your current balance is : " << balance << endl;
    }

    ~BankAccount() {
        cout << "Account has been closed" << endl;
    }
};

int main() {
    BankAccount myAccount(123456, 76000.0);
    myAccount.deposit(1000000.0);
    myAccount.withdraw(6700.0);
    myAccount.displayBalance();
    /* cout << "Accessing private balance:" << myAccount.balance << endl; **Optional** */
    return 0;
}
