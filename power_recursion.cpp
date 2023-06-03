#include<bits/stdc++.h>
using namespace std;

int powerr(int n){
	if(n == 0)
		return 1;

	return 2 * powerr(n - 1);
}

int main(){
	int n = 10;
	cout << powerr(n);
}