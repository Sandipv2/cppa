#include<iostream>
using namespace std;

class Prime {
    public:

    Prime(int n) {
        cout<<"Inside Constructor!"<<endl;
        bool flag = true;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = false;
                break;
            }
        }

        if (flag) {
            cout<<"Its Prime!"; 
        } else {
            cout<<"Its Not Prime!";
        }
    }

    ~Prime (){
        cout<<endl<<endl<<"Object terminated!";
    }
};

int main() {
    Prime obj(11);
    return 0;
}