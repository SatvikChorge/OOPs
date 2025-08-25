#include <iostream>
#include <string>
using namespace std;

class Employee {
    protected:
    int empId = 67123;
    string empName = "Satvik";
    public:
    void setEmployee(int i, string n) {
        i = empId;
        n = empName;
    }
    void displayEmployee() {
        cout << "Employee Name : " << empName << endl;
        cout << "Employee I.D. : " << empId << endl;
    }
};
 
class Manager : public Employee {
    public:
    string department = "Data Management";
    float bonus = 6000.0;
    void setManagerDetails(string d, float b) {
        department = d;
        bonus = b ;
    }
    void displayManagerDetails() {
        cout << "Employee Department : " << department << endl;
        cout << "Salary Bonus : " << bonus << endl;
    }
};

int main() {
    Manager m;
    m.displayEmployee();
    m.displayManagerDetails();
    return 0; 
}