#include<iostream>
using namespace std;

class Pallindrome {
    int low, high;

    public :

    bool isPallindrome(int n) {
        int t = n;
        int rev = 0;
        while (t > 0) {
            int r = t % 10;
            rev = (rev * 10) + r;
            t /= 10;
        }

        if (rev == n) {
            return true;
        }

        return false;
    }

    void print() {
        cout<<"Enter low and high : ";
        cin>>low>>high;

        for (int i = low; i <= high; i++) {
            if (isPallindrome(i)) {
                cout<<i<<endl;
            }
        }
    }
};

int main() {
    Pallindrome obj;
    obj.print();

    return 0;
}