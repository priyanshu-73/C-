#include<bits/stdc++.h>
using namespace std;

bool isAnagram(string s, string t){
	if(s.length() != t.length()) return false;
	vector<int> arr(26, 0);
	for(int i = 0; i < s.size(); i++){
		int k = s[i] - 'a';
		int j = t[i] - 'a';
		arr[k]++;
		arr[j]--;
	}

	for(int i = 0; i < arr.size(); i++){
		if(arr[i] != 0){
			return false;
		}
	}
	return true;
}

int main(){
	string s = "anagram";
	string t = "nagaram";
	cout << isAnagram(s, t);
}