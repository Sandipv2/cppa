#include<iostream>
using namespace std;

class Logic {
    bool n;

    public:

    Logic(bool val) {
        n = val;
    }

    bool operator &&(Logic a);
    bool operator ||(Logic a);
};

bool Logic::operator &&(Logic a) {
    if(n && a.n) {
        return true;
    } 

    return false;
}

bool Logic::operator ||(Logic a) {
    if(n || a.n) {
        return true;
    } 

    return false;
}

int main() {
    Logic a(true);
    Logic b(false);

    if(a && b) {
        cout<<"True Block";
    }
    else {
        cout<<"False Block";
    }

    return 0;
}