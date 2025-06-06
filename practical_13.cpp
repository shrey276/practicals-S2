/**********{"Write a C++ program to implement Multilevel Inheritance."}*********/
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

class exam {
    public:
    int marks;
    void displayexm(){
        cout<<"marks :"<<marks<<endl;
    }

};

class branch : public student, public exam {
    public:
    string branch;
    void displaybranch(){
        cout<<"Branch : "<<branch;
    }
};

int main(){
    branch s1;
    s1.name = "Amit";
    s1.roll_no = 9;
    s1.display();
    s1.marks = 90;
    s1.displayexm();
    s1.branch = "AIML";
    s1.displaybranch();
    return 0;
}
