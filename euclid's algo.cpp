#include<bits/stdc++.h>
using namespace std;

int gCd(int a, int b){
	if(a == 0){
		return b;
	}
	if(b == 0){
		return a;
	}

	while (a != b)
	{
		if(a > b){
			a = a - b;
		}
		if(b > a){
			b = b - 1;
		}
	}
	return a;
}

int main(){
	int a = 72, b = 24;
	cout << gCd(a, b);
}