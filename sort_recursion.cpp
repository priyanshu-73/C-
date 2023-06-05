#include<bits/stdc++.h>
using namespace std;

bool sort(int arr[], int size){

	if(size == 0 || size == 1){
		return true;
	}

	if(arr[0] > arr[1]){
		return false;
	}
	else{
		bool ans = sort(arr + 1, size - 1);
		return ans;
	}
}

int main(){

	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	cout << sort(arr, 8);
}