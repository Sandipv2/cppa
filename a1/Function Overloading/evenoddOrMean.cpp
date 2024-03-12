#include<iostream>
using namespace std;

void func(int n) {
    if (n % 2 == 0) {
        cout<<n<<" is even.";
    }
    else {
        cout<<n<<" is odd.";
    }
}

int func(int a, int b) {
    return (a + b) / 2;
}

int main()
{
    cout<<"Even/Odd : ";
    func(12);

    cout<<endl;
    cout<<"Mean : "<<func(12,10);

    return 0;
}