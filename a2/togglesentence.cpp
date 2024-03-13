#include<iostream>
using namespace std;

class Toggle {
    string s;

    public :

    void getData() {
        cout<<"Type something : ";
        getline(cin, s);
    }

    void toggler() {
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 65 && s[i] <= 90) {
                s[i] += 32;
            }
            else if (s[i] >= 97 && s[i] <= 122) {
                s[i] -= 32;
            }
        }

        cout<<endl<<s;
    }
};

int main() {
    Toggle obj;
    obj.getData();
    obj.toggler();

    return 0;
}