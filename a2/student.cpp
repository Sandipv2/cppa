#include<iostream>
using namespace std;

class Student {
    string name;
    char div;
    int marks;
    
    public:

    void getData();
    void display() {
        cout<<endl<<name<<" "<<div<<" "<<marks;
    }
};

void Student::getData() {
    cout<<"Enter name, div and marks : ";
    cin>>name>>div>>marks;
}

int main() {
    Student s1;
    s1.getData();
    s1.display();

    return 0;
}