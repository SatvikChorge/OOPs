#include <iostream>
#include <string>
using namespace std;

class Student {
    
    private:
    int rollNo;

    protected:
    string branch;

    public:
    string name;

    Student(int r, string b, string n) {
        rollNo = r;
        branch = b;
        name = n;
    }

    virtual void display() {
        cout << "\nName of Student : " << name << endl;
        cout << "Roll No. : " << rollNo << endl;
        cout << "Branch : " << branch << endl;
    }
}; 

class PGStudent : public Student {
    
    private:
    string specialization;

    public:

    PGStudent(int r, string b, string n, string s) : Student(r, b, n){
            specialization = s;
        }
    
    void display() override {
        cout << "\nPG Student Name : " << name << endl;
        cout << "Branch : " << branch << endl;
        cout << "Specialization : " << specialization << "\n" << endl;
    }
};

int main() {
    Student s1(96, "Data Science", "Satvik Chorge");
    PGStudent pg1(67, "Nuclear and Aeronautics", "Abhimanyu Veer", "Indian Defence Intelligence");

    Student *ptr;
    
    ptr = &s1;
    ptr -> display();

    ptr = &pg1;
    ptr -> display();

    return 0;
}