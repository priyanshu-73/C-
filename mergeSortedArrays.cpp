#include<bits/stdc++.h>
using namespace std;

vector<int> sorted(vector<int> arr1, vector<int> arr2){
  int n = arr1.size();
  int m = arr2.size();
  vector<int> arr3(n + m, 0);
  int i = 0;
  int j = 0;
  int k = 0;
  while(i < n && j < m){
    if(arr1[i] < arr2[j]){
      arr3[k++] = arr1[i++];
    }
    else{
      arr3[k++] = arr2[j++];
    }
  }

  while(i < n){
    arr3[k++] = arr1[i++];
  }

  while(j < m){
    arr3[k++] = arr2[j++];
  }
  return arr3;
  
}

int main(){
    vector<int> arr1 = {5, 6, 7};
    vector<int> arr2 = {1, 2, 3, 4};
    vector<int> ans = sorted(arr1, arr2);
    for(auto it : ans){
      cout << it << " ";
    }
    cout << endl;
}