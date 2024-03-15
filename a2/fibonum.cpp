#include<iostream>
using namespace std;

class Fibo {
    int n, a = 0, b = 1;

public :
    friend void print(Fibo obj);
};

void print(Fibo obj) {
    cout<<"Enter the num : ";
    cin>>obj.n;

    for (int i = 0; i < obj.n; i++) {
        int c = obj.a + obj.b;
        cout<<endl<<c;
        obj.a = obj.b;
        obj.b = c;
    }
}

int main() {
    // 0 1 1 2 3 5 8 13
    Fibo obj;
    print(obj);

    return 0;
}
