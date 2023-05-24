/*1. Write a program to create student class with data members rollno, marks1, mark2, mark3.
Accept data (acceptInfo()) and display using display member function.
Also display total, percentage and grade.
*/
#include<iostream>
#include<cstring>
using namespace std;

class Student {
    int rollno, mark1, mark2, mark3;
    float total, percentage;
    char grade[10];
    
    public:
        void acceptInfo();
        void display();
        void calculate();
};

void Student::acceptInfo() {
    cout << "Enter Roll Number: ";
    cin >> rollno;
    cout << "Enter Mark1: ";
    cin >> mark1;
    cout << "Enter Mark2: ";
    cin >> mark2;
    cout << "Enter Mark3: ";
    cin >> mark3;
}

void Student::display() {
    cout << "Roll Number: " << rollno << endl;
    cout << "Mark1: " << mark1 << endl;
    cout << "Mark2: " << mark2 << endl;
    cout << "Mark3: " << mark3 << endl;
    cout << "Total: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;
}

void Student::calculate() {
    total = mark1 + mark2 + mark3;
    percentage = total / 3.0;
    
    if(percentage >= 90)
        strcpy(grade, "A+");
    else if(percentage >= 80)
        strcpy(grade, "A");
    else if(percentage >= 70)
        strcpy(grade, "B");
    else if(percentage >= 60)
        strcpy(grade, "C");
    else if(percentage >= 50)
        strcpy(grade, "D");
    else
        strcpy(grade, "F");
}

int main() {
    Student s;
    s.acceptInfo();
    s.calculate();
    s.display();
    return 0;
}
