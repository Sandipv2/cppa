#include<iostream>
using namespace std;

int area(int a, int b) { // Quadrilateral;
    return a*b;
}

double area(double a, int b, int h) { // Triangle;
    return a*b*h;
}

double area(double r) { // Circle;
    return 3.14*r*r;
}

int main()
{
    cout<<"Square area : "<<area(12,2)<<endl;
    cout<<"Triangle area : "<<area(0.5, 12, 10)<<endl;
    cout<<"Circle area : "<<area(7.5);
}