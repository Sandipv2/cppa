#include<iostream>
using namespace std;

class Substring {
    string s;

    public :

    void printsub() {
        cout<<"Enter a string : ";
        cin>>s;

        int n = s.size();

        cout<<endl;
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                cout<<s[j];
            }
            cout<<endl;
        }
    }
};

int main() {
    Substring obj;
    obj.printsub();

    return 0;
}