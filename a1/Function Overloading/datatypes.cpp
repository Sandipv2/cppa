#include<iostream>
using namespace std;

void type(int n) {
    cout<<n<<" is integer."<<endl;
}

void type(double n) {
    cout<<n<<" is double."<<endl;
}

void type(char ch) {
    cout<<ch<<" is character.";
}

int main()
{
    type(12);
    type(3.2);
    type('x');

    return 0;
}