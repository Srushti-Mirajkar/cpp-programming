 #include <iostream>
using namespace std;

class Student {
public:
    string name;
    int rollNo;
    double marks;

    void input() {
        cout << "Enter Name, Roll No, Marks: ";
        cin >> name >> rollNo >> marks;
    }

    void display() {
        cout << "Name: " << name << ", Roll No: " << rollNo << ", Marks: " << marks << endl;
    }
};

int main() {
    const int SIZE = 10;
    Student students[SIZE];
    int count = 0, choice;

    do {
        cout << "\n1. Add Student\n2. Display Students\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            if (count < SIZE) {
                students[count].input();
                count++;
            } else {
                cout << "Student list is full!\n";
            }
        } 
        else if (choice == 2) {
            for (int i = 0; i < count; i++) {
                students[i].display();
            }
        }
    } while (choice != 3);

    return 0;
}