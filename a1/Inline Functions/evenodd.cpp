#include<iostream>
using namespace std;

inline void evenodd(int n) {
    if (n % 2 == 0) {
        cout<<"Its even.";
    }
    else {
        cout<<"Its odd.";
    }
}

int main()
{
    evenodd(13);
    cout<<endl;
    evenodd(12);

    return 0;
}