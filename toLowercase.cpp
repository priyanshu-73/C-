#include<bits/stdc++.h>
using namespace std;


string toLowerCase(string s) {
    int n = s.length();
    for(int i = 0; i < n; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] = s[i] - 'A' + 'a';
        }
    }
    return s;        
}

int main(){
    string s = "Hello";
    cout << toLowerCase(s);
}