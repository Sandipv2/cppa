#include<iostream>
using namespace std;

class Evenodd {
    int n;

    public:

    Evenodd() {
        cout<<"In default constructor!"<<endl;
        cout<<endl<<"Enter num : ";
        cin>>n;

        if (n % 2 == 0) {
            cout<<endl<<"Its even!";
        } else {
            cout<<endl<<"Its odd!";
        }
    }

    ~Evenodd (){
        cout<<endl<<endl<<"Object terminated!";
    }
};

int main() {
    Evenodd obj;
    return 0;
}