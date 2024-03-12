#include<iostream>
using namespace std;

void print(int n = 5) {
    for (int i = 1; i <= n; i++) {
        cout<<i<<" ";
    }
}

int main()
{
    print(10);
    return 0;
}