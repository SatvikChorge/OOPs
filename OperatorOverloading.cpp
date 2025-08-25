#include <iostream>
#include <string>
using namespace std;

class Box {
    private:
    int length;

    public:
    Box(int l = 0) {
        length = l;
    }

    void display() {
        cout << "Length of Box : " << length << endl;
    }

    Box operator+(Box b) {
        Box temp;
        temp.length = this -> length + b.length;
        return temp;
    }
};

int main() {
    Box b1(6), b2(7), b3(9);

    b1.display();
    b2.display();

    b3 = b1 + b2;

    cout << "After addition : " << endl;
    b3.display();
    return 0;
}
