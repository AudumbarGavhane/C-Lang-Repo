/*3. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the 
object of this class in main method and invoke all the methods in that class.*/
#include <iostream>
using namespace std;

class Date {
private:
    int dd;
    int mm;
    int yy;

public:
    // Default constructor
    Date() {
        dd = 0;
        mm = 0;
        yy = 0;
    }

    // Parameterized constructor
    Date(int d, int m, int y) {
        dd = d;
        mm = m;
        yy = y;
    }

    // Getters
    int get_dd() {
        return dd;
    }

    int get_mm() {
        return mm;
    }

    int get_yy() {
        return yy;
    }

    // Setters
    void set_dd(int d) {
        dd = d;
    }

    void set_mm(int m) {
        mm = m;
    }

    void set_yy(int y) {
        yy = y;
    }

    // Display function
    void display() {
        cout << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() {
    // Create an object of the Date class
    Date d1;

    // Use setters to initialize object's data members
    d1.set_dd(19);
    d1.set_mm(3);
    d1.set_yy(2023);

    // Display object's data members using getters
    cout << "Using getters:" << endl;
    cout << "Date: ";
    d1.display();

    // Create another object of the Date class using parameterized constructor
    Date d2(1, 1, 2000);
    cout << "Using display function for d2:" << endl;
    d2.display();

    return 0;
}
