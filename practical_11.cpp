/**********{"Write a C++ program that prompts the user to enter three integers and display the integers
            in decreasing order."}**********/

#include <iostream>
using namespace std;

int main(){
    int num1, num2, num3;

    cout <<"enter number 1 : ";
    cin >>num1;
    cout <<"enter number 2 : ";
    cin >>num2;
    cout <<"enter number 3 : ";
    cin >>num3;

    if(num1<num2){
        swap(num1,num2);
    }
    if(num1<num3){
        swap(num1,num3);
    }
    if(num2<num3){
        swap(num2,num3);
    }
    
    cout<<"decreasing order is :"<<num1<<" "<<num2<<" "<<num3 ;

return 0;
}