#include<bits/stdc++.h>
using namespace std;

class Student{
    string name;
    int age;
    int height;
    public:
    int getAge(){
        return this -> age;
    }
};

int main(){
    Student first;
    cout << first.getAge() ;
}