#include<iostream>
using namespace std;

class Bank {
    int balance = 0;
    string holder = "sandip"; 
    int ch, temp;

    public :
    // Constructors
    Bank(){}; // Default Constructor
    Bank(string name) { // Parameterized constrcutor
        holder = name;
    }

    void msg();
    void process(); 
};

void Bank::msg() {
    cout<<endl<<"--- TMV Bank ---"<<endl;
    cout<<"1. Balance"<<endl;
    cout<<"2. Deposit"<<endl;
    cout<<"3. Withdraw"<<endl;
    cout<<"4. Acc. Holder"<<endl;
    cout<<"5. Change Acc. Holder"<<endl;
    cout<<"6. Exit"<<endl;
}

void Bank::process() {
    cout<<"Your Choice : ";
    cin>>ch;

    switch (ch)
    {
        case 1:
            cout<<endl<<"Balance : "<<balance<<endl;
            msg();
            process();
            break;

        case 2:
            cout<<endl<<"Enter Deposit amount : ";
            cin>>temp;
            balance += temp;
            cout<<endl<<"Amount Deposited Successfully!"<<endl;
            msg();
            process();
            break;

        case 3:
            cout<<endl<<"Enter Withdrawl Amount : ";
            cin>>temp;
            if (temp > balance) {
                cout<<endl<<"WARNING! No Sufficient Balance!!"<<endl;
            } else {
                balance -= temp;
                cout<<endl<<"Amount Withdrawl Successfully!"<<endl;
            }
            msg();
            process();
            break;

        case 4:
            cout<<endl<<"Account Holder : "<<holder<<endl;
            msg();
            process();
            break;

        case 5:
            cout<<endl<<"Current Holder : "<<holder;
            cout<<endl<<"Enter new name : ";
            cin>>holder;
            cout<<endl<<"Acc. Holder changed!"<<endl;
            msg();
            process();
            break;

        case 6: 
            cout<<endl<<"--- THANK YOU! VISIT AGAIN :) ---"<<endl;
            break;

        default:
            cout<<endl<<"Please! Enter a valid option!"<<endl;
            msg();
            process();
            break;
    }
}

int main() {
    Bank p1;
    p1.msg();
    p1.process();

    return 0;
}