#include<bits/stdc++.h>
using namespace std;

int firstMissing(vector<int> arr){
    int n = arr.size();
    for(int i = 0; i < n; i++){
        if(arr[i] > 0 && arr[i] != i + 1 && arr[i] <= n){
            int temp = arr[arr[i] - 1];
            arr[arr[i] - 1] = arr[i];
            arr[i] = temp;
            i--;
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] != i + 1){
            return i + 1;
        }
    }
    return n + 1;
}


int main(){
    vector<int> arr = {26, -18, 34, 22, 31, 3, 5, 23, -40, -10};
    cout << firstMissing(arr) << endl;
}