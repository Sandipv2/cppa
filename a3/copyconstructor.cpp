#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int roll;
    int marks;

    Student() {} // Default constructor;

    void display()
    {
        cout << "Name : " << name << endl;
        cout << "Roll : " << roll << endl;
        cout << "Marks : " << marks;
    }

    Student(Student &ob);
};

Student::Student(Student &obj)
{
    name = obj.name;
    roll = obj.roll;
    marks = obj.marks;
}

int main()
{
    Student s1;
    s1.name = "sandip";
    s1.roll = 75;
    s1.marks = 100;

    Student s2(s1);
    s2.display();

    return 0;
}