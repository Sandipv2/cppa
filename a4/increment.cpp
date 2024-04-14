#include<iostream>
using namespace std;

class Increment {
    int n;

    public:
    Increment(int a) {
        n = a;
    }

    void operator ++() {
        n++;
    }

    void show() {
        cout<<n<<endl;
    }
};

int main() {
    Increment s1(5);
    s1.show();
    ++s1;
    s1.show();
    return 0;
}