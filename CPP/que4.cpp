/*4. Create a class Book with data members as bname, id, author, price. Write getters and setters for all the 
data members. Also add the display function. Create Default and Parameterized constructors. Create 
the object of this class in main method and invoke all the methods in that clas*/
#include <iostream>
#include <string>
using namespace std;

class Book {
private:
    string bname;
    int id;
    string author;
    float price;

public:
    // Default constructor
    Book() {
        bname = "";
        id = 0;
        author = "";
        price = 0.0;
    }

    // Parameterized constructor
    Book(string name, int book_id, string author_name, float book_price) {
        bname = name;
        id = book_id;
        author = author_name;
        price = book_price;
    }

    // Getters
    string get_bname() {
        return bname;
    }

    int get_id() {
        return id;
    }

    string get_author() {
        return author;
    }

    float get_price() {
        return price;
    }

    // Setters
    void set_bname(string name) {
        bname = name;
    }

    void set_id(int book_id) {
        id = book_id;
    }

    void set_author(string author_name) {
        author = author_name;
    }

    void set_price(float book_price) {
        price = book_price;
    }

    // Display function
    void display() {
        cout << "Book Name: " << bname << endl;
        cout << "Book ID: " << id << endl;
        cout << "Author Name: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main() {
    // Create an object of the Book class
    Book book1;

    // Use setters to initialize object's data members
    book1.set_bname("The Alchemist");
    book1.set_id(101);
    book1.set_author("Paulo Coelho");
    book1.set_price(10.99);

    // Display object's data members using getters
    cout << "Using getters:" << endl;
    book1.display();

    // Create another object of the Book class using parameterized constructor
    Book book2("To Kill a Mockingbird", 102, "Harper Lee", 12.99);
    cout << "Using display function for book2:" << endl;
    book2.display();

    return 0;
}
