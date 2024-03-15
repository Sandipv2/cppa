#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class Pass {
    string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string nums = "123456789";
    string password;
    int idx;

public:
    void print() {
        srand(time(0));
        for (int i = 0; i < 3; i++) {
            idx = (rand() % 51) + 1;
            password += alpha[idx];

            idx = (rand() % 8) + 1;
            password += nums[idx];
        }

        cout<<"Password : "<<password;
    }

};

int main() {
    Pass obj;
    obj.print();

    return 0;
}
