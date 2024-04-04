#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
    int marks;

    // Parameterized constructor
    Student(string n, int r, int m) {
        name = n;
        roll = r;
        marks = m;
        cout << "Parameterized constructor called" << endl;
    }

    // Destructor
    ~Student() {
        cout << "Destructor called for " << name << endl;
    }

    void display() {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : " << marks << endl;
    }
};

int main() {
    Student s1("Prem", 1, 90);
    Student s2("Deepak", 2, 85);

    cout << endl<<"Information of s1:" << endl;
    s1.display();
    cout << endl<<"Information of s2:" << endl;
    s2.display();

    return 0;
}
