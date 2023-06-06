#include<iostream>
using namespace std;

bool palindrome(string &s, int i, int n){
	if(i > n - i - 1){
		return true;
	}

	if(s[i] != s[n - i - 1]){
		return false;
	}
	i++;
	palindrome(s, i, n);
}

int main(){
	string s = "non";
	int n = s.length();
	cout << palindrome(s, 0, n);
	return 0;
}