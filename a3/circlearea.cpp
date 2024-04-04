#include<iostream>
using namespace std;

class Circle {
    public:

    Circle (double r) {
        cout<<"Area is : "<<3.14*r*r;
    }

    ~Circle () {
        cout<<endl<<"Object destroyed";
    }
};

int main() {
    Circle obj(4.5);
    return 0;
}