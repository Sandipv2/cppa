#include<iostream>
using namespace std;

void canvote(int age) {
    if (age >= 18) {
        cout<<"Sir, you can vote.";
    }
    else {
        cout<<"Sorry! You cant vote."<<endl;
        cout<<"Wait for "<<18 - age<<" years.";
    }
}

int main()
{
    int age;
    cout<<"Enter the age :";
    cin>>age;

    canvote(age);

    return 0;
}