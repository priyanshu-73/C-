#include<bits/stdc++.h>
using namespace std;

string mobileNumberSeq(string input){
	string ans = "";
	string str[]
    = { "2",   "22",  "222", "3",   "33",   "333", "4",
        "44",  "444", "5",   "55",  "555",  "6",   "66",
        "666", "7",   "77",  "777", "7777", "8",   "88",
        "888", "9",   "99",  "999", "9999" };
	int n = input.length();
	for(int i = 0; i < n ; i++){
		if(input[i] == '0'){
			ans = ans + ' ';
		}
		else{
			int pos = input[i] - 'A';
			ans = ans + str[pos];
		}
	}	
	return ans;
}

int main(){
    string input = "GEEKSFORGEEKS";
    cout << mobileNumberSeq(input);
    return 0;
}