#include<iostream>
#include<string>
using namespace std;

int main() {
    try
    {
        float a, b;
        cout << "Enter value of a ";
        cin >> a;
        cout << "Enter value of b ";
        cin >> b;
        if(b > 0.0f) {
            cout << "Ratio = " << a / b << endl;
        }
        else {
            throw a / b;
        }
    }
    catch(float c)
    {
        cout << "Ratio not defined";
    }
    
    return 0;
}