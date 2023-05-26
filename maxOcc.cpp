#include<bits/stdc++.h>
using namespace std;

char getMaxOcc(string s){
  int n = s.length();
  int arr[26] = {0};
  for(int i = 0; i < n; i++){
    char ch = s[i];
    int n;
    if(ch >= 'a' && ch <= 'z'){
      n = ch - 'a';
    }
    else{
      n = ch - 'A';
    }
    arr[n]++;
  }

  int maxi = -1, ans = -1;
  for(int i = 0; i < 26; i++){
    if(maxi < arr[i]){
      maxi = arr[i];
      ans = i;
    }
  }
  return 'a' + ans;
}

int main(){
  string s;
  cin >> s;
  cout << getMaxOcc(s);
}