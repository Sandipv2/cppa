#include<iostream>
using namespace std;
 
void ismul(int a = 12, int b = 2) {
    if (a % b == 0) {
        cout<<a<<" is multiple of "<<b;
    } 
    else {
        cout<<a<<" is not a multiple of "<<b;
    }
}

int main()
{
    int a = 25, b = 5;
    ismul();
    cout<<endl;
    ismul(a, b);

    return 0;
}