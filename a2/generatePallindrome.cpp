#include<iostream>
using namespace std;

class Pallindrome {
    string s;

    public : 

    void generate() {
        cout<<"Enter a word : ";
        cin>>s;

        string temp = "";

        for (int i = s.size() - 2; i >= 0; i--) {
            temp += s[i];
        }

        s += temp;

        cout<<endl<<s;
    }
};

int main() {
    Pallindrome obj;
    obj.generate();

    return 0;
}