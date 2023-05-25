#include<bits/stdc++.h>
using namespace std;

vector<int> findArraySum(vector<int>& arr1, vector<int>& arr2){
  int n = arr1.size();
  int m = arr2.size();
  vector<int> arr3;
  int carry = 0;
  int i = n - 1;
  int j = m - 1;
  while (i >= 0 && j >= 0)
  {
    int val1 = arr1[i];
    int val2 = arr2[j];

    int sum = val1 + val2 + carry;
    carry = sum / 10;
    sum = sum % 10;
    arr3.push_back(sum);
    i--;
    j--;
  }

  while(i >= 0){
    int sum = arr1[i] + carry;
    carry = sum / 10;
    sum = sum % 10;
    arr3.push_back(sum);
    i--;
  }

  while(j >= 0){
    int sum = arr2[j] + carry;
    carry = sum / 10;
    sum = sum % 10;
    arr3.push_back(sum);
    j--;
  }

  while(carry != 0){
    int sum = carry;
    carry = sum / 10;
    sum = sum % 10;
    arr3.push_back(sum);
  }
  reverse(arr3.begin(), arr3.end());
  return arr3;
  
}

int main(){
    vector<int> arr1 = {1, 2, 3};
    vector<int> arr2 = {6};
    vector<int> arr3 = findArraySum(arr1, arr2);
    for(auto it : arr3){
      cout << it << " ";
    }
    cout << endl;
}