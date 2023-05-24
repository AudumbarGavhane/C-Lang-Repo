/*5. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write 
getters and setters for all the data members. Also add the display function. Create the object of this 
class in main method and invoke all the methods in that class.*/
#include <iostream>
using namespace std;

class Point {
private:
    int x, y;

public:
    // Default constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    Point(int x_coord, int y_coord) {
        x = x_coord;
        y = y_coord;
    }

    // Getters
    int get_x() {
        return x;
    }

    int get_y() {
        return y;
    }

    // Setters
    void set_x(int x_coord) {
        x = x_coord;
    }

    void set_y(int y_coord) {
        y = y_coord;
    }

    // Display function
    void display() {
        cout << "Point coordinates: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Create an object of the Point class
    Point p1;

    // Use setters to initialize object's data members
    p1.set_x(5);
    p1.set_y(10);

    // Display object's data members using getters
    cout << "Using getters:" << endl;
    cout << "X coordinate: " << p1.get_x() << endl;
    cout << "Y coordinate: " << p1.get_y() << endl;

    // Create another object of the Point class using parameterized constructor
    Point p2(3, 7);
    cout << "Using display function for p2:" << endl;
    p2.display();

    return 0;
}
