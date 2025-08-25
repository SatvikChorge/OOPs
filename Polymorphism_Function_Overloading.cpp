#include <iostream>
#include <string>
using namespace std;

class Calculator {
    public:

    void add(int a, int b) {
        cout << "Addition of two integers : " << a + b << endl;
       }
    
    void add(double a, double b) {
        cout << "Addition of two floating values : " << a + b << endl;
     }

     void add(int a, int b, int c) {
        cout << "Addition of three integers : " << a + b + c << endl;
     }
};

int main () {
    Calculator cal;
    
    cal.add(6, 7);
    cal.add(6.0, 7.0);
    cal.add(6, 7, 9);

    return 0;
}