#include<iostream>
using namespace std;

class Phone {
    string names[100];
    string numbers[100];
    int totalContacts = 0;
    int namePointer = 0;
    int numPointer = 0;
    int ch;

public:

    void menu() {
        cout<<endl<<"--- Phone Book ---";
        cout<<endl<<"1. Save Number";
        cout<<endl<<"2. Find Number";
        cout<<endl<<"3. All Contacts";
        cout<<endl<<"4. Exit";
        cout<<endl<<"Your Choice : ";
    }

    friend void process(Phone o);
    friend void printContacts(Phone o);

};

void process(Phone o) {
    string name;
    string num;
    bool flag;
    
    o.menu();
    cin>>o.ch;
    switch (o.ch) {
        case 1:
            cout<<endl<<"Enter Name & Number : ";
            cin>>name>>num;
            o.names[o.namePointer++] = name;
            o.numbers[o.numPointer++] = num;
            o.totalContacts++;
            cout<<endl<<"Saved !!"<<endl;
            process(o);
            break;

        case 2:
            cout<<endl<<"Enter name : ";
            cin>>name;
            flag = false;
            for (int i = 0; i < 100; i++) {
                if (o.names[i] == name) {
                    cout<<endl<<"Number : "<<o.numbers[i]<<endl;
                    flag = true;
                    break;
                }
            }

            if (!flag)
                cout<<endl<<"Not Found !!"<<endl;

            process(o);
            break;

        case 3:
            printContacts(o);
            process(o);
            break;

        case 4:
            cout<<endl<<"--- HAVE A NICE DAY :) ---";
            cout<<endl<<" ";
            break;
    }

}

void printContacts(Phone o) {
    cout<<endl<<"--- CONTACTS ---"<<endl;
    if (o.totalContacts == 0) {
        cout<<"No Contacts!"<<endl;
        return;
    }

    for (int i = 0; i < o.totalContacts; i++) {
        cout<<o.names[i]<<" : "<<o.numbers[i]<<endl;
    }
}

int main() {
    Phone obj;
    process(obj);

    return 0;
}