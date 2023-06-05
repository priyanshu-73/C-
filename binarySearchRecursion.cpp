#include <bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[], int s, int e, int k){
	int mid = (s + e) / 2;
	if(s > e){
		return false;
	}
	if(arr[mid] == k){
		return true;
	}

	if(arr[mid] < k){
		return binarySearch(arr, mid + 1, e, k);
	}
	else{
		return binarySearch(arr, s, mid - 1, k);
	}
}

int main(){
	int arr[] = {1, 2, 3, 4, 5, 6};
	int n = 6;
	int s = 0;
	int end = n - 1;
	cout << binarySearch(arr, s, end, 45);
}