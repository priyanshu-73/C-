#include<bits/stdc++.h>
using namespace std;

int power(int x, int n, int m){
    int res = 1;
    while(n > 0){
        if(n & 1){
            res = (1LL * (res) * (x) % m) % m;
        }
        x = (1LL * (x) % m * (x) % m) % m;
        n = n>>1;
    }
    return res;
}

int main(){
    int x = 3;
    int n = 1;
    int m = 2;
    cout << power(x, n, m);
}