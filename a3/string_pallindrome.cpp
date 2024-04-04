#include<iostream>
using namespace std;

class Pallindrome {
    public:
    string name;
    Pallindrome(string s);
    ~Pallindrome();
};

Pallindrome::~Pallindrome() {
    cout<<endl<<name<<" destroyed.";
}

Pallindrome::Pallindrome(string str) {
        name = str;
        int n = str.size();
        int s = 0;
        int e = n - 1;
        bool flag = true;

        while ( s < e) {
            if (str[s] != str[e]) {
                flag = false;
                break;
            }
            s++;
            e--;
        }

        if (flag) {
            cout<<"Its Pallindrome"<<endl;
        } else {
            cout<<"Its Not Pallindrome"<<endl;
        }
    }

int main() {
    Pallindrome obj1("madam");
    Pallindrome obj2("mango");
    Pallindrome obj3("anna");
    return 0;
}

