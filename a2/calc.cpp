#include <iostream>
using namespace std;

class Calc
{
    int a, b, ch;

    public:
    
    void menus();
    void compute();
    void takeInputs(string title);
};

void Calc::menus()
{
    cout << endl<< "1. Addition" << endl;
    cout << "2. Substraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit";
}

void Calc::takeInputs(string title) {
    cout<<endl<<"--- "<<title<<" ---"<<endl;
    cout<<"Enter two nums : ";
    cin>>a>>b;
}

void Calc::compute()
{
    cout<<endl<<"Your Choice : ";
    cin>>ch;

    switch (ch)
    {
        case 1:
            takeInputs("Addition");
            cout<<endl<<"The Result = "<<a + b<<endl;
            menus();
            compute();
            break;

        case 2:
            takeInputs("Substraction");
            cout<<endl<<"The Result = "<<a - b<<endl;
            menus();
            compute();
            break;

        case 3:
            takeInputs("Multiplication");
            cout<<endl<<"The Result = "<<a * b<<endl;
            menus();
            compute();
            break;

        case 4:
            takeInputs("Division");
            cout<<endl<<"The Result = "<<a / b<<endl;
            menus();
            compute();
            break;
        
        case 5:
            cout<<endl<<"--- HAVE A NICE DAY :) ---";
            break;
    
        default:
            cout<<endl<<"Please! Enter a valid option!!"<<endl;
            menus();
            compute();
            break;
    }
}

int main()
{
    Calc obj;
    obj.menus();
    obj.compute();

    return 0;
}