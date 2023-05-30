#include<bits/stdc++.h>
using namespace std;

char lowercase(char ch){
	if(ch >= 'A' && ch <= 'Z'){
		ch = ch - 'A' + 'a';
		return ch;
	}
	else{
		return ch;
	}
}

bool isValid(char ch){
	if(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z' || ch >= '0' && ch <= '9'){
		return true;
	}
	return false;
}

bool palindrome(string s){
	int n = s.size();
	int st = 0;
	int e = s.size() - 1;
	while(st <= e){
		if(isValid(s[st]) && isValid(s[e])){
			if(lowercase(s[st++]) != lowercase(s[e--])){
				return false;
			}
		}
		else if(!isValid(s[st])){
			st++;
		}
		else{
			e--;
		}
	}
	return true;
}

int main(){
	string s = "A man, a plan, a canal: Panama";
	cout << palindrome(s);
}