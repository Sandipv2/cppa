#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

class Game {
    int num;
    int n;
    int life = 5;
    int counter = 0;

public :
    friend void process(Game o);
};

void process(Game o) {
    srand(time(0));
    o.num = (rand() % 50) + 1;
    cout<<endl<<"*** GUESS NUMBER ***";
    cout<<endl<<"You have : 5 Attempts!"<<endl;
    //cout<<"Num : "<<o.num;

    while (o.life != 0) {
        cout<<endl<<"Life left : "<<5 - o.counter;
        cout<<endl<<"Enter num : ";
        cin>>o.n;

        if (o.n > o.num) {
            cout<<endl<<"Its high!"<<endl;
        }
        else if (o.n < o.num) {
            cout<<endl<<"Its low"<<endl;
        }
        else {
            cout<<endl<<"*** CONGRATULATION! YOU WON!! ****";
            cout<<endl<<"Attempts : "<<5 - o.life;
            exit(0);
        }
        o.life--;
        o.counter++;
    }

    cout<<endl<<"*** GAME OVER!! ***"<<endl;
    cout<<"The Number was : "<<o.num;

}

int main() {
    Game obj;
    process(obj);

    return 0;
}
