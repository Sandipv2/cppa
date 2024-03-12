#include<iostream>
using namespace std;

class Digit {
    int n, rev = 0;

    public :

    void compute() {
        cout<<"Enter num : ";
        cin>>n;

        while (n > 0) {
            int r = n % 10;
            rev = (rev * 10) + r;
            n /= 10;
        }

        cout<<endl<<"Reversed num : "<<rev;
    }
};

int main() {
    Digit obj;
    obj.compute();

    return 0;
}