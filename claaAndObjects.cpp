#include<bits/stdc++.h>
using namespace std;

class Hero{
    private:
    int health;
    public:
    char level;

    int getHealth(){
        return health;
    }

    void setHealth(int h){
        health = h;
    }

    Hero(){
        cout << "Default constructor called" << endl;
    }

    Hero(int health){
        this -> health = health;
        cout << health << endl;
    }

    ~Hero(){
        cout<<"Destructor bhai called :)" << endl;
    }
};

int main(){
    Hero Ramesh(10);
    Ramesh.setHealth(70);
    Hero ritesh(Ramesh);
    cout << ritesh.getHealth()<< endl;
    Hero *b = new Hero();
    delete b;
}