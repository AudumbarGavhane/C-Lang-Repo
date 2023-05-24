/*7. Create Date class with members day, month, year. Write no argument and parameterized constructor. 
Create two object s and initialize them using no argument and parameterized constructor respectively. 
Print date using display function*/
#include <iostream>
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
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    // Create an object of the Date class using default constructor
    Date d1;

    // Create another object of the Date class using parameterized constructor
    Date d2(15, 6, 2022);

    // Display both objects using display function
    cout << "d1: ";
    d1.display();
    cout << "d2: ";
    d2.display();

    return 0;
}
