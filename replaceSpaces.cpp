#include<bits/stdc++.h>
using namespace std;

string getMaxOcc(string s){
  string temp = "";
  int n = s.length();
  int arr[26] = {0};
  for(int i = 0; i < n; i++){
    if(s[i] == ' '){
      temp.push_back('@');
      temp.push_back('4');
      temp.push_back('0');
    }
    else{
      temp.push_back(s[i]);
    }
  }
  return temp;
}

int main(){
  string s;
  getline(cin, s);
  cout << getMaxOcc(s);
}