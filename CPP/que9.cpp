/*9. Consider that payroll software needs to be developed for computerization of operations of an ABC 
organization. The organization has employees.
9.1. Construct a class Employee with following members using private access specifies:
Employee Id integer
Employee Name string
Basic Salary double
HRA double
Medical double=1000
PF double
PT double
Net Salary double
Gross Salary double
Please use following expressions for calculations: //Note: Don’t accept HRA,PF PT from user
* HRA = 50% of Basic Salary
* PF = 12% of Basic Salary
* PT = Rs. 200
9.2. Write methods to display the details of an employee and calculate the gross and net salary.
* Goss Salary = Basic Salary + HRA + Medical
* Net Salary = Gross Salary – (PT + PF)
9.3 Create Object of employee class and assign values and display Details.*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
private:
    int id;
    string name;
    double basicSalary;
    double HRA;
    double medical;
    double PF;
    double PT;
    double netSalary;
    double grossSalary;

public:
    // Default constructor
    Employee() {
        id = 0;
        name = "";
        basicSalary = 0;
        HRA = 0;
        medical = 1000;
        PF = 0;
        PT = 200;
        netSalary = 0;
        grossSalary = 0;
    }

    // Parameterized constructor
    Employee(int i, string n, double b) {
        id = i;
        name = n;
        basicSalary = b;
        HRA = 0.5 * basicSalary;
        medical = 1000;
        PF = 0.12 * basicSalary;
        PT = 200;
        grossSalary = basicSalary + HRA + medical;
        netSalary = grossSalary - (PT + PF);
    }

    // Method to display employee details
    void display() {
        cout << "Employee ID: " << id << endl;
        cout << "Employee Name: " << name << endl;
        cout << "Basic Salary: " << basicSalary << endl;
        cout << "HRA: " << HRA << endl;
        cout << "Medical: " << medical << endl;
        cout << "PF: " << PF << endl;
        cout << "PT: " << PT << endl;
        cout << "Gross Salary: " << grossSalary << endl;
        cout << "Net Salary: " << netSalary << endl;
    }
};

int main() {
    // Create an object of the Employee class using parameterized constructor
    Employee emp1(101, "John Doe", 50000);

    // Display employee details
    emp1.display();

    return 0;
}
