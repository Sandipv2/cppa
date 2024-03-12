#include<iostream>
using namespace std;

int compare(int a, int b) {
    return a > b ? a : b;
}

int compare(int a, int b, int k) {
    if (k == 1) {
        return a < b ? a : b;
    }

    return -1;
}

int main()
{
    int a = 12, b = 23;

    cout<<"Max : "<<compare(a, b)<<endl;
    cout<<"Min : "<<compare(a, b, 1);

    return 0; 
}