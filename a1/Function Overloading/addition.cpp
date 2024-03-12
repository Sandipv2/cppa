#include<iostream>
using namespace std;

int add(int a, int b) {
    return a+b;
}

int add(int a, int b, int c) {
    return a+b+c;
}

int add(int a, int b, int c, int d) {
    return a+b+c+d;
}

int main()
{
    cout<<add(12,2)<<endl;
    cout<<add(2,21,4)<<endl;
    cout<<add(1,4,2,4);

    return 0;
}