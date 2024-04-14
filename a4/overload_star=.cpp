#include<iostream>
using namespace std;

class Number {
    int n;

    public:

    Number (int a = 0) {
        n = a;
    }

    void operator *= (int num) {
        n *= num;
    }

    void print() {
        cout<<n<<endl;
    }
};

int main() {
    Number a(2);
    a *= 5;
    a.print();

    return 0;
}