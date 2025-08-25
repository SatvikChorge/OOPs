#include <iostream>
#include <string>
using namespace  std;

class BankAccount{
    private:
    int accountNumber;
    double balance;
    protected:
    string accountHolderName;
    public:
    void setAccountDetails(int no, double bal, string n) {
        accountNumber = no;
        balance = bal;
        accountHolderName = n;
    }
    void diplayAccoutDetails() {
        cout << "Account Holder : " << accountHolderName << endl;
        cout << "Account Number : " << accountNumber << endl;
        cout << "Balance : " << balance << endl;
    }
};

class SavingsAccount : public BankAccount {
    private:
    double interestRate;
    public:
    void setInterestRate(double rate) {
        interestRate = rate;
    }
    void displayInterestRate() {
        cout << "Interest Rate : " << interestRate << endl;
        }
};

int main(){
    SavingsAccount sa;
    sa.setAccountDetails(123456, 6000.00, "Abhi");
    sa.setInterestRate(6.7);
    sa.diplayAccoutDetails();
    sa.displayInterestRate();
    return 0;
}