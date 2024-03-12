#include<iostream>
using namespace std;

inline double pnr(double p, double n, double r) {
    return (p*n*r) / 100;
}

int main()
{
    int p = 1000, n = 2;
    double r = 7.5;

    cout<<"S.I. is : "<<pnr(p,n,r);

    return 0;
}