/*10. Solve this.
Fresh business scenario to apply inheritance , polymorphism to emp based organization scenario.
Create Emp based organization structure --- Emp , Mgr , Worker
10.1 Emp state--- id(int), name, deptId , basicSalary(double)
Accept all of above in constructor arguments.
Methods ---
10.2. Compute net salary ---ret 0
(eg : public double computeNetSalary(){return 0;})
10.3 Mgr state ---id,name,basic,deptId , perfBonus
Add suitable constructor
Methods ----
1. Compute net salary (formula: basic+perfBonus) -- override computeNetSalary
10.4 Worker state --id,name,basic,deptId,hoursWorked,hourlyRate
Methods:
1. Compute net salary (formula: = basic+ (hoursWorked*hourlyRate) --override computeNetSalary
2. Get hrlyRate of the worker -- add a new method to return hourly rate of a worker.(getter)
Create suitable array to store organization details.
Provide following options
1. Hire Manager
I/P : all manager details
2. Hire Worker 
I/P : all worker details
3. Display information of all employees net salary (by invoking computeNetSal), 
4. Exit*/
#include <iostream>
#include <string>
using namespace std;

class Employee {
protected:
    int id;
    string name;
    int deptId;
    double basicSalary;

public:
    Employee(int i, string n, int d, double b) {
        id = i;
        name = n;
        deptId = d;
        basicSalary = b;
    }

    virtual double computeNetSalary() {
        return 0;
    }

    int getId() {
        return id;
    }

    string getName() {
        return name;
    }

    int getDeptId() {
        return deptId;
    }

    double getBasicSalary() {
        return basicSalary;
    }
};

class Manager : public Employee {
private:
    double perfBonus;

public:
    Manager(int i, string n, int d, double b, double p) : Employee(i, n, d, b) {
        perfBonus = p;
    }

    double computeNetSalary() override {
        return basicSalary + perfBonus;
    }
};

class Worker : public Employee {
private:
    double hourlyRate;
    int hoursWorked;

public:
    Worker(int i, string n, int d, double b, double hr, int hw) : Employee(i, n, d, b) {
        hourlyRate = hr;
        hoursWorked = hw;
    }

    double computeNetSalary() override {
        return basicSalary + (hoursWorked * hourlyRate);
    }

    double getHourlyRate() {
        return hourlyRate;
    }
};

int main() {
    const int MAX_EMPLOYEES = 100;
    Employee* empList[MAX_EMPLOYEES];
    int numEmployees = 0;

    while (true) {
        cout << "Enter option:\n1. Hire Manager\n2. Hire Worker\n3. Display net salary of all employees\n4. Exit\n";
        int option;
        cin >> option;

        if (option == 1) {
            cout << "Enter manager details: (id, name, deptId, basicSalary, perfBonus)\n";
            int id, deptId;
            double basicSalary, perfBonus;
            string name;
            cin >> id >> name >> deptId >> basicSalary >> perfBonus;
            empList[numEmployees] = new Manager(id, name, deptId, basicSalary, perfBonus);
            numEmployees++;
            cout << "Manager hired.\n";
        }
        else if (option == 2) {
            cout << "Enter worker details: (id, name, deptId, basicSalary, hourlyRate, hoursWorked)\n";
            int id, deptId, hoursWorked;
            double basicSalary, hourlyRate;
            string name;
            cin >> id >> name >> deptId >> basicSalary >> hourlyRate >> hoursWorked;
            empList[numEmployees] = new Worker(id, name, deptId, basicSalary, hourlyRate, hoursWorked);
            numEmployees++;
            cout << "Worker hired.\n";
        }
        else if (option == 3) {
            for (int i = 0; i < numEmployees; i++) {
                cout << "ID: " << empList[i]->getId() << ", Name: " << empList[i]->getName() << ", Dept ID: " << empList[i]->getDeptId() << ", Net Salary: " << empList[i]->computeNetSalary() << endl;
            }
        }
        else if (option == 4) {
            break;
        }
        else {
            cout << "Invalid option.\n";
        }
    }

    // Deallocate memory
