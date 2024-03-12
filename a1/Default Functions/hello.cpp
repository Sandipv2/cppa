#include<iostream>
#include<string>
using namespace std;

void greet(string s = "Tony Stark") {
    cout<<"Hello "<<s<<", it's nice to meet you!!";
}

int main()
{
    greet();
    cout<<endl;
    greet("Sandip Varma");
    return 0;
}