#include<iostream>
using namespace std;

class MyClass {
    int n;

    public:

    MyClass(int a) {
        n = a;
    }

    void show() {
        cout<<n<<endl;
    }

    friend void operator ++(MyClass &obj);
    friend void operator --(MyClass &obj);
};

void operator ++(MyClass &obj) {
    obj.n++;
}

void operator --(MyClass &obj) {
    obj.n--;
}

int main() {
    MyClass obj1(5);
    MyClass obj2(8);
    ++obj1;
    obj1.show();
    
    --obj2;
    obj2.show();

    return 0;
}