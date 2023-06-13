#include<bits/stdc++.h>
using namespace std;

class Human{
    public:
    int age;
    int height;
};

class male{
    public:
    string colour;
};

class female : public Human{

};

class human2 : public male, public Human{

};

int main(){
    human2 h;
    cout << h.age << endl;
}