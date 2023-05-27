#include<bits/stdc++.h>
using namespace std;

vector<int> sumRows(vector<vector<int>> arr){
    vector<int> ans;
    for(int i = 0; i < arr.size(); i++){
        int sum = 0;
        for(int j = 0; j < arr[i].size(); j++){
            sum += arr[i][j];
        }
        ans.push_back(sum);
    }
    return ans;
}

int main(){
  vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
  vector<int> ans = sumRows(arr);
  for(auto it : ans){
    cout << it << " ";
  }
  cout << endl;
}