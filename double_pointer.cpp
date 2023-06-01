#include<bits/stdc++.h>
using namespace std;

void update(int **p2){
    **p2 = **p2 + 1;
}

int main(){
    int i = 5;

    // single pointer
    int *p = &i;

    // double pointer
    int **p2 = &p;

    //miltilevel pointe 
    int ***p3 = &p2;


    cout << *p << endl;
    cout << p + 1 << endl;
    cout << *p + 1 << endl;
    cout << *p2 << endl;
    cout << **p2 << endl;
    update(p2);
    cout << **p2 << endl;
}