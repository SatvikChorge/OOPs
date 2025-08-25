#include <iostream>
#include <string>
using namespace std;

class Employee {
    public:
    int empId;
    string empName;
    float salary;
    Employee(int i, string n, float s){
        empId = i;
        empName = n;
        salary = s;
        cout << "Constructor called for Employee : " << empName << endl;
    }
    void display() {
        cout << "Employee Name : " << empName << endl;
        cout << "Employee I.D. : " << empId << endl;
        cout << "Salary : " << salary << endl;
    }
    ~Employee() {
        cout << "Constructor destroyed for Employee" << endl;
    }
};

int main() {
    Employee e1(67123, "Satvik", 60000.0);
    e1.display();
    Employee e2(12376, "Abhimanyu", 670076);
    e2.display();
    return 0;
}