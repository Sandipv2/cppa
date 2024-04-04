#include<iostream>
using namespace std;

class Rev {
    string name;

    public:
    Rev (string str) { // Parameterised constructor;
        name = str;
    } 

    void print() {
        int n = name.size();
        int s = 0;
        int e = n - 1;

        while (s < e) {
            char c = name[s];
            name[s] = name[e];
            name[e] = c;

            s++;
            e--;
        }

        cout<<name;
    }

    ~Rev() {
        cout<<endl<<endl<<"Object destroyed!";
    }
};

int main() {
    Rev obj("abcde");
    obj.print();

    return 0;
}