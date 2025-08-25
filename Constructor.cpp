#include <iostream>
#include <string>
using namespace std;

class Rectangle {
    public:
    int length, breadth;

    Rectangle() {
        length = 0;
        breadth = 0;
    }

    Rectangle(int l, int b) {
        length = l;
        breadth = b;
    }

    Rectangle(const Rectangle &r) {
        length = r.length;
        breadth = r.breadth;
    }

    int area() {
        return length * breadth;
    }
};

int main() {
    Rectangle r1;
    Rectangle r2(6,7);
    Rectangle r3(r2);

    cout << "Area (Default) : " << r1.area() << endl;
    cout << "Area (Parameterized) : " << r2.area() << endl;
    cout << "Area (Copy) : " << r3.area() << endl;

    return 0;
}