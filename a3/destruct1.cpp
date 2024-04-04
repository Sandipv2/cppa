#include<iostream>
using namespace std;

class Table {
    int n;

    public:
    Table () {
        cout<<"Object created!"<<endl;
    }

    void set() {
        cout<<"Enter num : ";
        cin>>n;
    }

    void table () {
        for (int i = 1; i <= 10; i++) {
            cout<<n<<" X "<<i<<" = "<<i*n<<endl;
        }
    }

    ~Table (){
        cout<<endl<<"Object destroyed!!"<<endl;
    }
};

int main() {
    Table obj;
    obj.set();
    obj.table();
    return 0;
}