#include<iostream>
#include<string>
using namespace std;

int main() {
    try {
        int age;
        cout << "\nEnter your age";
        cin >> age;
        if(age >= 18){
            cout << "\nAccess granted";
        }
        else {
            throw age;
        }
    }
        catch(int myNum){
            cout << "\nAccess denied";
            cout << "\nAge is : " << myNum;
        }
    
    return 0;
}