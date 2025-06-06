/**********{"Write a C++ program to compute the power of given number."}**********/

#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a,b;
    int n;
    cout<<"enter the number :";
    cin>>a;
    cout<<"enter power :";
    cin>>b;

    n = pow(a,b);

    cout <<a<<" ^"<<b<<" = "<<n;

    return 0;
}