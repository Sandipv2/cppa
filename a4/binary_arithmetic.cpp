#include<iostream>
using namespace std;

class Calc {
    int n;

    public:

    Calc(int x) {
        n = x;
    }

    void operator +(Calc a);
    void operator -(Calc a);
    void operator *(Calc c);
};

void Calc::operator +(Calc a) {
    cout<<"Addition : "<<n + a.n<<endl;
}

void Calc::operator -(Calc a) {
    cout<<"Subtraction : "<<n - a.n<<endl;
}

void Calc::operator *(Calc a) {
    cout<<"Product : "<<n * a.n<<endl;
}

int main() {
    Calc a(10);
    Calc b(20);

    a+b;
    b-a;
    a*b;
    
    return 0;
}