// Online C++ compiler to run C++ program online
#include <iostream>
#include <string>
using namespace std;

class Student {
    private:
    int rollNo = 67;
    protected:
    string grade = "A+";
    public:
    string name = "Rahul ";
          
    void setDetails(int r, string g, string n) {
        rollNo=r;
        grade=g;
        name=n;
    }

    void displayDetails() {
        cout << "Name : " << name << endl;
        cout << "Roll No. : " << rollNo << endl;
        cout << "Grade : " << grade << endl;
    }
};

class Identity : public Student {
    public:

    void displayName() {
        cout << "Protected Name : " << name << endl; 
    }
};

class Result : public Student {
    public:

    void displayGrade() {
        cout << "Protected Grade : " << grade << endl;
    }
};

int main() {
    Identity ID;
    Result R;
    ID.displayDetails();
    ID.displayName();
    R.displayGrade();
    return 0;
}