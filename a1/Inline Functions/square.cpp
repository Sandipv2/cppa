#include<iostream>
using namespace std;

inline int sqr(int n) {
    return n*n;
}

int main()
{
    int n;
    cout<<"Enter any num : ";
    cin>>n;

    cout<<endl<<"Square is "<<sqr(n);

    return 0;
}