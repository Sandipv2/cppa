#include<iostream>
using namespace std;

class MyClass {
    int a, b, c;

    public:
    MyClass(int x, int y, int z) {
        a = x;
        b = y;
        c = z;
    }

    void operator +();
    void operator -();
    void operator *();
}; 

void MyClass::operator +() {
    cout<<"Addition : "<<a+b+c<<endl;
}

void MyClass::operator -() {
    cout<<"Subtraction : "<<a-b-c<<endl;
}

void MyClass::operator *() {
    cout<<"Product : "<<a*b*c<<endl;
}

int main() {
    int a, b, c;
    cout<<"Enter 3 nums : ";
    cin>>a>>b>>c;
    
    MyClass s1(a,b,c);
    +s1;
    -s1;
    *s1;

    return 0;
}

