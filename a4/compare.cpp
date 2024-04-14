#include<iostream>
using namespace std;

class Compare {
    int n;

    public:

    Compare(int a) {
        n = a;
    }

    friend int operator <(Compare &o1, Compare &o2);
    friend int operator ==(Compare &o1, Compare &o2);
};

int operator <(Compare &o1, Compare &o2) {
    if (o1.n < o2.n) {
        return 1;
    } 

    return 0;
}

int operator ==(Compare &o1, Compare &o2) {
    if (o1.n == o2.n) {
        return 1;
    } 
    
    return 0;
}

int main() {
    Compare a(45);
    Compare b(23);

    if (a < b) {
        cout<<"a is smaller"<<endl;
    }
    else if (a == b) {
        cout<<"a and b are equal"<<endl;
    }
    else {
        cout<<"b is smaller";
    }

    return 0;
}