#include<iostream>
using namespace std;

class Calc {
    int n;

    public:

    Calc(int x) {
        n = x;
    } 

    friend void operator +(Calc a, Calc b);
    friend void operator -(Calc a, Calc b);
    friend void operator *(Calc a, Calc b);
    friend void operator /(Calc a, Calc b);
};

void operator +(Calc a, Calc b) {
    cout<<"Addition : "<<a.n + b.n<<endl;
}
void operator -(Calc a, Calc b) {
    cout<<"Subtraction : "<<a.n - b.n<<endl;
}
void operator *(Calc a, Calc b) {
    cout<<"Product : "<<a.n * b.n<<endl;
}
void operator /(Calc a, Calc b) {
    cout<<"Division : "<<a.n / b.n<<endl;
}

int main() {
    Calc a(2);
    Calc b(10);

    a+b;
    b-a;
    a*b;
    b/a;

    return 0;
}