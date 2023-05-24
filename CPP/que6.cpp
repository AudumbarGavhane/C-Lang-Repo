/*6. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized 
constructors. Write getters and setters for all the data members. Also add the display function. Create 
the object of this class in main method and invoke all the methods in that class*/


#include <iostream>
using namespace std;

class ComplexNumber {
private:
    double real;
    double imaginary;

public:
    // Default constructor
    ComplexNumber() {
        real = 0.0;
        imaginary = 0.0;
    }

    // Parameterized constructor
    ComplexNumber(double real_part, double imaginary_part) {
        real = real_part;
        imaginary = imaginary_part;
    }

    // Getters
    double get_real() {
        return real;
    }

    double get_imaginary() {
        return imaginary;
    }

    // Setters
    void set_real(double real_part) {
        real = real_part;
    }

    void set_imaginary(double imaginary_part) {
        imaginary = imaginary_part;
    }

    // Display function
    void display() {
        cout << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    // Create an object of the ComplexNumber class
    ComplexNumber c1;

    // Use setters to initialize object's data members
    c1.set_real(5.5);
    c1.set_imaginary(-3.2);

    // Display object's data members using getters
    cout << "Using getters:" << endl;
    cout << "Real part: " << c1.get_real() << endl;
    cout << "Imaginary part: " << c1.get_imaginary() << endl;

    // Create another object of the ComplexNumber class using parameterized constructor
    ComplexNumber c2(-2.8, 4.6);
    cout << "Using display function for c2:" << endl;
    c2.display();

    return 0;
}
