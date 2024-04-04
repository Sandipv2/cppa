#include<iostream>
using namespace std;

class MyClass {
    public:

    int a = 2;

    MyClass(int n) {
        a = n;
        cout<<"Obj "<<n<<" created!!"<<endl;
    }

    ~MyClass() {
        cout<<"Obj "<<a<<" destroyed!!"<<endl;
    }
};

int main() {
    int n;
    MyClass a(1);

    {
        MyClass b(2);
    }
    
    cout<<endl<<"Enter to continue : ";
    cin>>n;
    return 0;
}