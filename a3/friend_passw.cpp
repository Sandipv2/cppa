#include<iostream>
using namespace std;

class Google{
    string username = "google";
    string password = "google123";

    public :

    friend void login(Google obj);
};

