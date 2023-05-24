/*8. Create Employee class with members id(int),name(string),dob(Date).Use above created Date class. 
Write default and parameterized constructor in Employee Class.Write accept () function to accept 
information and display () to display emp information.
*/
#include <iostream>
#include <string>
using namespace std;

class Date {
private:
    int day;
    int month;
    int year;

public:
    // Default constructor
    Date() {
        day = 1;
        month = 1;
        year = 2000;
    }

    // Parameterized constructor
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    // Display function
    void display() {
        cout << day << "/" << month << "/" << year;
    }
};

class Employee {
private:
    int id;
    string name;
    Date dob;

public:
    // Default constructor
    Employee() {
        id = 0;
        name = "";
    }

    // Parameterized constructor
    Employee(int empId, string empName, Date empDob) {
        id = empId;
        name = empName;
        dob = empDob;
    }

    // Accept function to accept employee information
    void accept() {
        cout << "Enter employee ID: ";
        cin >> id;
        cout << "Enter employee name: ";
        cin >> name;
        cout << "Enter employee date of birth (dd mm yyyy): ";
        int d, m, y;
        cin >> d >> m >> y;
        dob = Date(d, m, y);
    }

    // Display function to display employee information
    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee name: " << name << endl;
        cout << "Employee date of birth: ";
        dob.display();
        cout << endl;
    }
};

int main() {
    // Create an object of the Employee class using default constructor
    Employee emp1;

    // Create another object of the Employee class using parameterized constructor
    Date dob2(15, 6, 1990);
    Employee emp2(123, "John Doe", dob2);

    // Accept and display employee information for emp1
    emp1.accept();
    cout << endl << "Employee 1 information:" << endl;
    emp1.display();

    // Display employee information for emp2
    cout << endl << "Employee 2 information:" << endl;
    emp2.display();

    return 0;
}
