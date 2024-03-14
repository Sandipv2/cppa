#include<iostream>
using namespace std;

class Rev {
    string str;

    public:

    void reverse() {
        cout<<"Enter a word : ";
        cin>>str;

        int s = 0;
        int e = str.size() - 1;

        while (s < e) {
            char t = str[s];
            str[s] = str[e];
            str[e] = t;

            s++;
            e--;
        }

        cout<<endl<<str;
    }
};

int main() {
    Rev obj;
    obj.reverse();

    return 0;
}