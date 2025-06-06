/**********{"Write a C++ program to implement operator overloading using polymorphism."}**********/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

class Number {
public:
    int value;
    Number(int v) : value(v) {}
    // Overload + operator to add two Number objects
    Number operator+(const Number& n) {
        return Number(value + n.value);
    }

    void display() {
        cout << "Value: " << value << endl;
    }
};

int main() {
    Number n1(5);
    Number n2(10);
    Number n3 = n1 + n2;  // Uses overloaded + operator
    n3.display();          // Output: Value: 15
    return 0;
}