/*12. Create an abstract class Shape with pure virtual method area;
Create Rectangle, Circle, Square class. Inherit them from Shape class. Override area method.
Test these all classes by creating object of respective class*/
#include <iostream>
using namespace std;

// Abstract class Shape with pure virtual method area
class Shape {
public:
    virtual double area() = 0; // pure virtual method
};

// Rectangle class inheriting from Shape
class Rectangle : public Shape {
private:
    double width;
    double height;

public:
    // Constructor
    Rectangle(double w, double h) {
        width = w;
        height = h;
    }

    // Override area method
    double area() {
        return width * height;
    }
};

// Circle class inheriting from Shape
class Circle : public Shape {
private:
    double radius;

public:
    // Constructor
    Circle(double r) {
        radius = r;
    }

    // Override area method
    double area() {
        return 3.14 * radius * radius;
    }
};

// Square class inheriting from Shape
class Square : public Shape {
private:
    double side;

public:
    // Constructor
    Square(double s) {
        side = s;
    }

    // Override area method
    double area() {
        return side * side;
    }
};

int main() {
    // Create objects of Rectangle, Circle, Square classes and test their area methods
    Rectangle r(4, 5);
    cout << "Area of Rectangle: " << r.area() << endl;

    Circle c(3);
    cout << "Area of Circle: " << c.area() << endl;

    Square s(6);
    cout << "Area of Square: " << s.area() << endl;

    return 0;
}
