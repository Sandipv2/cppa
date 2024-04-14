#include<iostream>
using namespace std;

class Decrement {
    int n;

    public:

    Decrement(int a) {
        n = a;
    }

    void show();
    void operator --();
};

void Decrement::show() {
    cout<<n<<endl;
}

void Decrement::operator --() {
    n--;
}

int main() {
    Decrement s1(10);
    s1.show();
    --s1;
    s1.show();
    return 0;
}