#include <iostream>
#include <string>
using namespace std;

class AreaCalculator {
    private:
    int side;
    int length, breadth;
    float radius;

    public:
    AreaCalculator() {
        cout << "Calculator created" << endl;
    }   

    int calculateArea(int s) {
        s = side;
        cout << "Area of square = " << side * side << endl;
        return 0;
    }

    int calculateArea(int l, int b) {
        l = length, b = breadth;
        cout << "Area of Rectangle = " << length * breadth << endl;
        return 0;
    }

    int calculateArea(float r) {
        r = radius;
        cout << "Area of circle = " << 3.14f * radius * radius << endl;
        return 0;
    }

    ~AreaCalculator() {
        cout << "Calculator closed" << endl;
    }
}; 

 int main() {
    AreaCalculator ac;
    int areaSquare = ac.calculateArea(6);
    int areaRectangle = ac.calculateArea(6,7);
    float areaCircle = ac.calculateArea(6.0f);
    return 0;
 }