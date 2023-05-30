#include<bits/stdc++.h>
using namespace std;

string commonPrefix(vector<string>& s){
	int n = s.size();
	if(n == 0) return "";
	string ans = "";
	sort(begin(s), end(s));
	string a = s[0];
	string e = s[n - 1];
	for(int i = 0; i < n; i++){
		if(a[i] == e[i]){
			ans = ans + a[i];
		}
		else{
			break;
		}
	}
	return ans;
}

int main(){
	vector<string> s = {"flower","flow","flight"};
	cout << commonPrefix(s);
}