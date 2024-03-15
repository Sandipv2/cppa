#include<iostream>
#include<sstream>
using namespace std;

class Binary {
    int n;
    string bi;

public:

    void convert() {
        cout<<"Enter the number : ";
        cin>>n;

        while (n > 0) {
            int r = n % 2;
            stringstream ss;
            ss << r;
            bi += ss.str();
            n /= 2;
        }

        int s = 0, e = bi.size() - 1;
        while (s < e) {
            char t = bi[s];
            bi[s] = bi[e];
            bi[e] = t;
            s++;
            e--;
        }

        cout<<endl<<"Binary : "<<bi;
    }
};

int main() {
    Binary obj;
    obj.convert();

    return 0;
}
