#include <iostream>
#include <string>

class Student {
private:
    std::string* name;
    int rollNumber;
    float marks;

public:
    // Default Constructor
    Student() {
        name = new std::string("Unknown");
        rollNumber = 0;
        marks = 0.0;
        std::cout << "Default Constructor called for " << *name << std::endl;
    }

    // Parameterized Constructor
    Student(std::string studentName, int roll, float studentMarks) {
        name = new std::string(studentName);
        rollNumber = roll;
        marks = studentMarks;
        std::cout << "Parameterized Constructor called for " << *name << std::endl;
    }

    // Copy Constructor (Deep Copy)
    Student(const Student& obj) {
        name = new std::string(*obj.name);
        rollNumber = obj.rollNumber;
        marks = obj.marks;
        std::cout << "Copy Constructor called for " << *name << std::endl;
    }

    // Destructor
    ~Student() {
        std::cout << "Destructor called for " << *name << std::endl;
        delete name; // Free allocated memory
    }

    // Display Student Details
    void display() {
        std::cout << "Student Name: " << *name << ", Roll No: " << rollNumber 
                  << ", Marks: " << marks << std::endl;
    }
};

int main() {
    // Creating Student Objects
    Student s1; // Default constructor
    Student s2("Alice", 101, 95.5); // Parameterized constructor
    Student s3("Bob", 102, 89.0);
    
    // Copy Constructor Example
    Student s4 = s2; // Copy constructor is called

    // Displaying Details
    std::cout << "\nStudent Details:\n";
    s1.display();
    s2.display();
    s3.display();
    s4.display(); // Copy of s2

    return 0; // Destructor is called for all objects
}