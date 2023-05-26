#include<bits/stdc++.h>
using namespace std;

string removePattern(string s, string part){
  int n = s.length();
  while(n != 0 && s.find(part) < n){
    s.erase(s.find(part), part.length());
  }
  return s;
}

int main(){
  string s;
  string part = "abc";
  getline(cin, s);
  cout << removePattern(s, part);
}