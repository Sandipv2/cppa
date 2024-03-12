#include<iostream>
#include<string>
using namespace std;

void printMsg(string author = "Tony Stark", string msg = "This is Tony from Stark Company. Welcome you all!!") {
    cout<<author<<" :"<<endl;
    cout<<msg;
}

int main()
{
    printMsg();
    cout<<endl<<endl;

    string myMsg = "Hi there! Hope you all are doing well. Myself Sandip Varma, SDE at Google. Lets work together and make this project a huge success.";

    printMsg("Sandip",myMsg);

    return 0;
}