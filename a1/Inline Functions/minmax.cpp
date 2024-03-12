#include<iostream>
using namespace std;

inline int min(int a, int b) {
    return a < b ? a : b;
}

inline int max(int a, int b) {
    return a > b ? a : b;
}

int main()
{
    cout<<min(12,1)<<endl;
    cout<<max(12,1);
}