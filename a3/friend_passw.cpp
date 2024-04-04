#include<iostream>
using namespace std;

class Google{
    string username = "google";
    string password = "google123";

    public :
    Google () {
        cout<<"Constructor called";
    }

    ~Google () {
        cout<<endl<<"Destructor called";
    }

    friend void login(Google &obj);
};

void login(Google &obj) {
    string user, pass;
    cout<<endl<<"Enter username and password : "<<endl;
    cin>>user>>pass;

    if (user == obj.username && pass == obj.password) {
        cout<<endl<<"Login successfully!";
    } else {
        cout<<endl<<"Username or password incorrect";
    }
}

int main() {
    Google obj;
    login(obj);

    return 0;
}