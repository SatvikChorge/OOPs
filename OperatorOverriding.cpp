#include <iostream>
#include <string>
using namespace std;

class box{
    private:
    int length;

    public:
    box(int l) {
        l = length;
    }

    void display() {
        cout << "Length of rectangle is : " << length << endl;
    }

    box operator + (data l1) {
        box l3(0);
        l3.length = length + l2.length;
        return l3;
    }
};

void main() {
    box l1(6), l2(7), l3(0);
    l3 = l1 + l2;
    l3.display();
}