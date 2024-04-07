#include<iostream>
using namespace std;

class Rect {
    int l, w;

    public:

    Rect (int length, int width) {
        l = length;
        w = width;
    }

    void area() {
        cout<<"The area is : "<<l*w;
    }
};

int main() {
    Rect obj(12,12);
    obj.area();

    return 0;
}