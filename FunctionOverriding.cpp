#include <iostream>
#include <string>
using namespace std;

class A {
    public:
    void display() {
        cout << "Base class" << endl;
    }
};
class B : public A {
    public:
    void display() {
        A::display();
        cout << "Derived class" << endl;
    }
};

class Animal {
    public: 
    virtual void speak() {
        cout << "Animal makes sound" << endl; 
    }
};
class Dog : public Animal{
    public: 
    void speak() override{
        cout << "Dog barks" << endl;
    }
};
class Cat : public Animal {
    void speak() override{
        cout << "Cat meows" << endl; 
    }
};

int main() {
    B aa;
    aa.display();
    
    Animal *a;
    Dog d;
    Cat c;
    a = &d;
    a->speak();
    a = &c;
    a->speak();

    return 0;
}