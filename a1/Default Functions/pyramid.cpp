#include<iostream>
using namespace std;

void print(int n = 4) {
    for (int i = 1; i <= n; i++) {
        for (int space = i; space < n; space++) {
            cout<<" ";
        }

        for (int j = 1; j <= i*2 - 1; j++) {
            cout<<"*";
        }

        cout<<endl;    
    }
}

int main()
{
    print();
    cout<<endl;
    print(6);
    return 0;
}