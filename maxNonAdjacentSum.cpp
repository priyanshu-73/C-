#include<bits/stdc++.h>
using namespace std;

int maximumNonAdjacentSum(vector<int> &arr){
	int n = arr.size();
	int prevSum = 0;
	int currSum = arr[0];
	for(int i = 1; i < n; i++){
		int temp = currSum;
		currSum = max(currSum, prevSum + arr[i]);
		prevSum = temp;
	}
	return currSum;
}

int main(){
	vector<int> arr = {11, 55, 17, 23, 97, 11, 3, 64, 45, 21};
	cout << maximumNonAdjacentSum(arr);
}