#include<iostream>
using namespace std;

class Prime {
    int low, high;

    public :

    bool isPrime(int n) {
        bool flag = true;

        for (int i = 2; i < n; i++) {
            if (n % i == 0) {
                flag = false;
                break;
            }
        }

        return flag;
    }

    void print() {
        cout<<"Enter limits (Low & High) : ";
        cin>>low>>high;

        for (int i = low; i <= high; i++) {
            if (isPrime(i)) {
                cout<<i<<endl;
            }
        }
    }
};

int main() {
    Prime obj;
    obj.print();

    return 0;
}