/**********{"Write a C++ program that reads a number in meters, converts it to feet, and displays the
             result."}**********/

#include <iostream>
using namespace std;

int main() {
    float meter,feet;

    cout <<"enter value in meter : ";
    cin >>meter;

    feet = meter * 3.28;

    cout <<meter<<" meter is equal to "<<feet<<" feet.";
    return 0;
}