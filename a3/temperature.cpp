#include<iostream>
using namespace std;

class Temp {
    public :

    Temp (double c) {
        cout<<"Object created!"<<endl;
        cout<<c<<" in Fahrenheit is : "<<(c * 9/5) + 32;
    }

    ~Temp() {
        cout<<endl<<"Object destroyed";
    }
};

int main() {
    double c;
    cout<<"Enter temp in C : ";
    cin>>c;

    Temp obj(c);

    return 0;
    
}