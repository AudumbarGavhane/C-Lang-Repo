/*2. Create a class Person with data members as name, age, city. Write getters and setters for all the data 
members. Also add the display function. Create Default and Parameterized constructors. Create the object 
of this class in main method and invoke all the methods in that class.*/
#include <iostream>
#include <string>
using namespace std;

class Person {
private:
    string name;
    int age;
    string city;

public:
    // Default constructor
    Person() {
        name = "";
        age = 0;
        city = "";
    }

    // Parameterized constructor
    Person(string n, int a, string c) {
        name = n;
        age = a;
        city = c;
    }

    // Getters
    string get_name() {
        return name;
    }

    int get_age() {
        return age;
    }

    string get_city() {
        return city;
    }

    // Setters
    void set_name(string n) {
        name = n;
    }

    void set_age(int a) {
        age = a;
    }

    void set_city(string c) {
        city = c;
    }

    // Display function
    void display() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "City: " << city << endl;
    }
};

int main() {
    // Create an object of the Person class
    Person p1;

    // Use setters to initialize object's data members
    p1.set_name("John");
    p1.set_age(30);
    p1.set_city("New York");

    // Display object's data members using getters
    cout << "Using getters:" << endl;
    cout << "Name: " << p1.get_name() << endl;
    cout << "Age: " << p1.get_age() << endl;
    cout << "City: " << p1.get_city() << endl;

    // Display object's data members using display function
    cout << "Using display function:" << endl;
    p1.display();

    // Create another object of the Person class using parameterized constructor
    Person p2("Jane", 25, "Los Angeles");
    cout << "Using display function for p2:" << endl;
    p2.display();

    return 0;
}
