/**********{"Write a C++ program to implement Simple Inheritance."}**********/

#include <iostream>
using namespace std;

class student 
{
    public:
    string name;
    int roll_no;
    void display(){
        cout<<"name is "<<name<<endl<<"roll no : "<<roll_no<<endl;
    }
};

class exam :public student{
    public:
    int marks;
    void displayexm(){
        cout<<"marks :"<<marks;
    }

};

int main(){
    exam s1;
    s1.name = "Amit";
    s1.roll_no = 9;
    s1.display();
    s1.marks = 90;
    s1.displayexm();
    return 0;
}
