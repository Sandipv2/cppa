#include<iostream>
#include<ctime>
using namespace std;

class Pass {
    string alpha = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    string nums = "123456789";
    string password;
    int n;

    friend string generate(Pass o);

};

string generate(Pass o) {
    srand(time(0));

    cout<<"Enter password length : ";
    cin>>o.n;

    while (o.password.size() != o.n) {
        int i = (rand() % 51) + 1;
        o.password += o.alpha[i];

        if (o.password.size() == o.n) break;
        
        int j = (rand() % 8) + 1;
        o.password += o.nums[j];

    }

    return o.password;
}

int main() {
    Pass obj;
    cout<<endl<<"Password : "<<generate(obj);
    return 0;
}