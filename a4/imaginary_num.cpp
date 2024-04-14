#include<iostream>
using namespace std;

class Imaginary {
    int n;
    int i;

    public:
    Imaginary(int a, int b) {
        n = a;
        i = b;
    }

    void show() {
        cout<<n<<" + "<<i<<"i"<<endl;
    }

    void operator +(Imaginary obj) {
        n += obj.n;
        i += obj.i;
        cout<<endl<<n<<" + "<<i<<"i";
    }
};

int main() {
    Imaginary s1(2,3);
    Imaginary s2(4,5);
    s1.show();
    s2.show();
    s1+s2;
    return 0;
}