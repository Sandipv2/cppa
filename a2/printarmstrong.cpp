#include<iostream>
#include<math.h>
using namespace std;

class Printarm {
    int low, high;

    public:

    void print() {
        cout<<"Enter limits (Low & High) : ";
        cin>>low>>high;

        for (int i = low; i <= high; i++) {
            int n = i, sum = 0;
            int power = 0;

            while (n > 0) {
                power++;
                n /= 10;
            }

            n = i;
            while (n > 0) {
                int r = n % 10;
                sum += pow(r, power);
                n /= 10;
            }

            if (sum == i) {
                cout<<endl<<i;
            }
        }
    }
};

int main() {
    Printarm obj;
    obj.print();

    return 0;
}