#include<bits/stdc++.h>
using namespace std;

void sortArray(int arr[], int n){
	if(n == 1){
		return;
	}

	for(int i = 0; i < n - 1; i++){
		if(arr[i] > arr[i + 1]){
			swap(arr[i], arr[i + 1]);
		}
	}
	sortArray(arr, n - 1);
}

int main(){
	int arr[] = {2, 1, 3,  4, 5, 0, 1};
	sortArray(arr, 7);
	for(int i = 0; i < 7; i++){
		cout << arr[i] << " ";
	}
}