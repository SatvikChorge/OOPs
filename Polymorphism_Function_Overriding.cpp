#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class Shape {
    public:
    virtual void area() {
        cout << "Area of shape" << endl;
    }
};

class Circle : public Shape {
    
    private:
    double radius;

    public:
    Circle(double r) {
        radius = r;
    }
    void area() override {
        cout << "Area of Circle : " << radius * radius * 3.14159 << endl;
    }
};

class Rectangle : public Shape {
    
    private:
    double length, breadth;

    public:
    Rectangle(double l, double b) {
        length = l;
        breadth = b;
    }
    void area() override {
        cout << "Area of Rectangle : " << length * breadth << endl;
    }
};

int main() {
    Shape *s;

    Circle c(6);
    Rectangle r(6, 7);

    s = &c;
    s -> area();

    s = &r;
    s -> area();

    return 0;
}